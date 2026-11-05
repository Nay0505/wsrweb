$ErrorActionPreference = "Stop"

$workspace = "C:\wiisportsrecomp"
Set-Location $workspace

$chunks = Get-ChildItem "$workspace\output\RZTE01_generated\chunks\*.c" | Sort-Object Name
$objDir = "$workspace\web-runtime\objects"
New-Item -ItemType Directory -Force -Path $objDir | Out-Null

$compileBase = @(
    "-std=c11", "-O2", "-fno-strict-aliasing", "-fwrapv",
    "-I", "$workspace\DolRecomp\src",
    "-I", "$workspace\output\RZTE01_generated"
)

function Invoke-Emcc {
    param([string[]]$Arguments)
    $command = "call C:\emsdk\emsdk_env.bat >nul && emcc " + ($Arguments -join " ")
    & cmd.exe /d /c $command
    return $LASTEXITCODE
}

Write-Host "Compiling $($chunks.Count) generated C chunks"
for ($index = 0; $index -lt $chunks.Count; $index++) {
    $chunk = $chunks[$index]
    $object = Join-Path $objDir ($chunk.BaseName + ".o")

    Invoke-Emcc ($compileBase + @($chunk.FullName, "-c", "-o", $object))
    if ($LASTEXITCODE -ne 0) {
        throw "Chunk $($chunk.Name) failed with exit code $LASTEXITCODE"
    }
}

Write-Host "Compiling runtime and CPU sources"
# Emscripten needs separate output names for combined inputs, so compile these two files separately.
Invoke-Emcc ($compileBase + @("$workspace\web-runtime\runtime.c", "-c", "-o", "$objDir\runtime.o"))
if ($LASTEXITCODE -ne 0) { throw "runtime.c compilation failed" }
Invoke-Emcc ($compileBase + @("$workspace\DolRecomp\src\cpu\cpu.c", "-c", "-o", "$objDir\cpu.o"))
if ($LASTEXITCODE -ne 0) { throw "cpu.c compilation failed" }

Write-Host "Linking WASM module"
$objects = Get-ChildItem "$objDir\*.o" | Sort-Object Name
$linkArgs = $objects.FullName + @(
    "-sASSERTIONS=1", "-sENVIRONMENT=node,web,worker", "-sALLOW_MEMORY_GROWTH=1",
    "-sINITIAL_MEMORY=96MB", "-sSTACK_SIZE=2MB", "-sEXIT_RUNTIME=0",
    "-sEXPORTED_RUNTIME_METHODS=ccall,cwrap,FS",
    "-sEXPORTED_FUNCTIONS=_rz_runtime_init,_rz_runtime_step,_rz_runtime_pc,_rz_runtime_register,_rz_runtime_lr,_rz_runtime_exception,_rz_runtime_srr0,_rz_runtime_external_read_count,_rz_runtime_external_write_count,_rz_runtime_host_call_count,_rz_runtime_disc_region_count,_rz_runtime_gx_bytes,_rz_runtime_vi_xfb_address,_rz_runtime_mmio_read,_rz_runtime_peek,_rz_runtime_peek8,_rz_runtime_memory_ptr",
    "--preload-file", "$workspace\extracted\DATA\sys\main.dol@main.dol",
    "-o", "$workspace\web-runtime\rz-runtime.js"
)
Invoke-Emcc $linkArgs
if ($LASTEXITCODE -ne 0) {
    throw "Emscripten link failed with exit code $LASTEXITCODE"
}
