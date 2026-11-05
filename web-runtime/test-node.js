const Module = require('./rz-runtime.js');

function validate() {
    try {
        console.log('fs_root=' + Module.FS.readdir('/').join(','));
    } catch (error) {
        console.log('fs_error=' + error);
    }
    let initialized = Module.ccall('rz_runtime_init', 'number', ['string'], ['/main.dol']);
    if (!initialized) {
        initialized = Module.ccall('rz_runtime_init', 'number', ['string'], ['main.dol']);
    }
    console.log('init=' + initialized);
    console.log('diagnostics=mmio_reads:' + Module.ccall('rz_runtime_external_read_count', 'number', [], []) +
        ',mmio_writes:' + Module.ccall('rz_runtime_external_write_count', 'number', [], []) +
        ',host_calls:' + Module.ccall('rz_runtime_host_call_count', 'number', [], []));

    let previousPc = 0;
    for (let call = 0; call < 2000; ++call) {
        const stepped = Module.ccall('rz_runtime_step', 'number', ['number'], [10000]);
        const pc = Module.ccall('rz_runtime_pc', 'number', [], []) >>> 0;
        const exception = Module.ccall('rz_runtime_exception', 'number', [], []) >>> 0;
        if (pc !== previousPc || exception !== 0 || call === 0) {
            const srr0 = Module.ccall('rz_runtime_srr0', 'number', [], []) >>> 0;
            console.log('call=' + call + ' step=' + stepped + ' pc=0x' + pc.toString(16).padStart(8, '0') + ' exception=0x' + exception.toString(16).padStart(8, '0') + ' srr0=0x' + srr0.toString(16).padStart(8, '0'));
        }
        previousPc = pc;
    }
    console.log('final_diagnostics=mmio_reads:' + Module.ccall('rz_runtime_external_read_count', 'number', [], []) +
        ',mmio_writes:' + Module.ccall('rz_runtime_external_write_count', 'number', [], []) +
        ',host_calls:' + Module.ccall('rz_runtime_host_call_count', 'number', [], []) +
        ',peek_entry:' + Module.ccall('rz_runtime_peek', 'number', ['number'], [0x80004000]) );
}

Module.onRuntimeInitialized = validate;
