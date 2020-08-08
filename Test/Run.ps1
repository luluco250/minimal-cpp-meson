& .\Build.ps1

if (!$?) {
	throw "Build failed, can't run project"
}

$execPath = '..\Build\demo.exe'

exit (Start-Process $execPath -NoNewWindow -Wait -PassThru).ExitCode
