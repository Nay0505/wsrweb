from http.server import ThreadingHTTPServer, SimpleHTTPRequestHandler
import json
from pathlib import Path
from urllib.parse import urlparse

WEB_ROOT = Path(__file__).resolve().parent
WORKSPACE_ROOT = WEB_ROOT.parent
DATA_ROOT = WORKSPACE_ROOT / "extracted" / "DATA"

class Handler(SimpleHTTPRequestHandler):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, directory=str(WORKSPACE_ROOT), **kwargs)

    def translate_path(self, path):
        parsed = urlparse(path)
        request_path = parsed.path
        if request_path == "/" or request_path == "/index.html":
            request_path = "/web-runtime/index.html"
        elif request_path.startswith("/__assets__/"):
            request_path = request_path[len("/__assets__"):]
            request_path = "/web-runtime" + request_path
        elif not request_path.startswith("/web-runtime/") and not request_path.startswith("/extracted/"):
            request_path = "/web-runtime" + request_path
        return super().translate_path(request_path)

    def do_GET(self):
        if urlparse(self.path).path == "/__manifest__/extracted/DATA":
            files = []
            for path in DATA_ROOT.rglob("*"):
                if path.is_file() and path.name not in ("setup.bat", "setup.txt"):
                    files.append(path.relative_to(WORKSPACE_ROOT).as_posix())
            body = json.dumps(files).encode("utf-8")
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.send_header("Content-Length", str(len(body)))
            self.end_headers()
            self.wfile.write(body)
            return
        super().do_GET()

    def end_headers(self):
        self.send_header("Cross-Origin-Opener-Policy", "same-origin")
        self.send_header("Cross-Origin-Embedder-Policy", "require-corp")
        super().end_headers()

    def guess_type(self, path):
        if path.endswith(".wasm"):
            return "application/wasm"
        if path.endswith(".data"):
            return "application/octet-stream"
        return super().guess_type(path)

print("Serving http://localhost:8081")
ThreadingHTTPServer(("127.0.0.1", 8081), Handler).serve_forever()
