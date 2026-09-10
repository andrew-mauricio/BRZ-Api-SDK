@echo off
setlocal EnableExtensions
set "EXAMPLE_ROOT=%~dp0.."
if not defined BRZ_SDK_ROOT set "BRZ_SDK_ROOT=%EXAMPLE_ROOT%"
if not defined BRZ_OUTPUT_DIR set "BRZ_OUTPUT_DIR=%EXAMPLE_ROOT%\build\plugins"
set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
for /f "usebackq tokens=*" %%i in (`"%VSWHERE%" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do set "VSROOT=%%i"
if not defined VSROOT exit /b 2
call "%VSROOT%\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b 2
if not exist "%BRZ_OUTPUT_DIR%\_tests" mkdir "%BRZ_OUTPUT_DIR%\_tests"
pushd "%BRZ_OUTPUT_DIR%\_tests"
cl /nologo /std:c++17 /EHsc /utf-8 /MT /Zs /I"%BRZ_SDK_ROOT%\include" "%EXAMPLE_ROOT%\tests\all-headers.cpp"
if errorlevel 1 (popd & exit /b 1)
cl /nologo /std:c++17 /EHsc /utf-8 /MT /O2 /I"%BRZ_SDK_ROOT%\include" "%EXAMPLE_ROOT%\tests\startup.cpp" /Fe:startup.exe
if errorlevel 1 (popd & exit /b 1)
startup.exe "%BRZ_OUTPUT_DIR%\BrzOla\BrzOla.dll" "%BRZ_OUTPUT_DIR%\_tests\config-temporaria"
if errorlevel 1 (popd & exit /b 1)
dumpbin /imports "%BRZ_OUTPUT_DIR%\BrzDinoInfo\BrzDinoInfo.dll" > dino-imports.txt
findstr /c:"winmm.dll" dino-imports.txt >nul
if errorlevel 1 (popd & exit /b 1)
echo PASSOU: BrzDinoInfo importa do motor winmm.dll.
popd
exit /b 0
