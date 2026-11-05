@echo off
setlocal enabledelayedexpansion
set EMSDK_QUIET=1
call C:\emsdk\emsdk_env.bat
cd /d C:\wiisportsrecomp
if not exist web-runtime\objects mkdir web-runtime\objects

for %%F in (output\RZTE01_generated\chunks\*.c) do (
  if not exist web-runtime\objects\%%~nF.o emcc -std=c11 -O2 -fno-strict-aliasing -fwrapv -I C:\wiisportsrecomp\DolRecomp\src -I C:\wiisportsrecomp\output\RZTE01_generated -c "%%F" -o "web-runtime\objects\%%~nF.o"
  if errorlevel 1 exit /b 1
)

emcc -std=c11 -O2 -fno-strict-aliasing -fwrapv -I C:\wiisportsrecomp\DolRecomp\src -I C:\wiisportsrecomp\output\RZTE01_generated -c web-runtime\runtime.c -o web-runtime\objects\runtime.o
if errorlevel 1 exit /b 1
emcc -std=c11 -O2 -fno-strict-aliasing -fwrapv -I C:\wiisportsrecomp\DolRecomp\src -I C:\wiisportsrecomp\output\RZTE01_generated -c DolRecomp\src\cpu\cpu.c -o web-runtime\objects\cpu.o
if errorlevel 1 exit /b 1

if exist web-runtime\objects.rsp del web-runtime\objects.rsp
for %%F in (web-runtime\objects\*.o) do echo "%%~fF">>web-runtime\objects.rsp

emcc @web-runtime\objects.rsp -sASSERTIONS=1 -sENVIRONMENT=node,web,worker -sALLOW_MEMORY_GROWTH=1 -sINITIAL_MEMORY=96MB -sSTACK_SIZE=2MB -sEXIT_RUNTIME=0 -sEXPORTED_RUNTIME_METHODS=ccall,cwrap,FS -sEXPORTED_FUNCTIONS=_rz_runtime_init,_rz_runtime_step,_rz_runtime_pc,_rz_runtime_register,_rz_runtime_lr,_rz_runtime_exception,_rz_runtime_srr0,_rz_runtime_external_read_count,_rz_runtime_external_write_count,_rz_runtime_host_call_count,_rz_runtime_disc_region_count,_rz_runtime_gx_bytes,_rz_runtime_vi_xfb_address,_rz_runtime_mmio_read,_rz_runtime_peek,_rz_runtime_peek8,_rz_runtime_memory_ptr --preload-file extracted\DATA\sys\main.dol@main.dol -o web-runtime\rz-runtime.js
exit /b %errorlevel%
