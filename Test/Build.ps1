$sourceDir = '..'
$buildDir = '..\Build'

if (!(Test-Path $buildDir)) {
	Write-Host 'Meson build directory not found, creating it...'

	$proc = Start-Process `
		'meson.exe' `
		-ArgumentList 'setup',$buildDir,$sourceDir `
		-NoNewWindow `
		-Wait `
		-PassThru

	if ($proc.ExitCode -ne 0) {
		throw 'Failed to setup Meson build directory'
	}
}

Write-Host 'Compiling project...'

$proc = Start-Process `
	'meson.exe' `
	-ArgumentList 'compile','-C',$buildDir `
	-NoNewWindow `
	-Wait `
	-PassThru

if ($proc.ExitCode -ne 0) {
	throw 'Failed to compile project'
}
