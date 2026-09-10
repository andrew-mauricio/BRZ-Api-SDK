@echo off
setlocal EnableExtensions
set "EXAMPLE_ROOT=%~dp0.."
if not defined BRZ_SDK_ROOT set "BRZ_SDK_ROOT=%EXAMPLE_ROOT%"
if not defined BRZ_LIB_DIR set "BRZ_LIB_DIR=%BRZ_SDK_ROOT%\lib"
if not defined BRZ_OUTPUT_DIR set "BRZ_OUTPUT_DIR=%EXAMPLE_ROOT%\build\plugins"
if not exist "%BRZ_SDK_ROOT%\include\Brz\BrzPluginApi.h" exit /b 2
if not exist "%BRZ_LIB_DIR%\winmm.lib" exit /b 2
set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
if not exist "%VSWHERE%" (
  echo Instale o Visual Studio com Desenvolvimento para desktop com C++.
  exit /b 2
)
for /f "usebackq tokens=*" %%i in (`"%VSWHERE%" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do set "VSROOT=%%i"
if not defined VSROOT exit /b 2
call "%VSROOT%\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b 2
for %%P in (BrzOla BrzDinoInfo) do (
  call :build %%P
  if errorlevel 1 exit /b 1
)
echo Exemplos compilados em "%BRZ_OUTPUT_DIR%".
exit /b 0
:build
if not exist "%BRZ_OUTPUT_DIR%\%1" mkdir "%BRZ_OUTPUT_DIR%\%1"
pushd "%BRZ_OUTPUT_DIR%\%1"
cl /nologo /std:c++17 /EHsc /utf-8 /MT /O2 /Zi /LD /I"%BRZ_SDK_ROOT%\include" "%EXAMPLE_ROOT%\examples\%1\%1.cpp" /link /LIBPATH:"%BRZ_LIB_DIR%" winmm.lib /OUT:"%1.dll" /PDB:"%1.pdb" /DEBUG /INCREMENTAL:NO
if errorlevel 1 (popd & exit /b 1)
copy /y "%EXAMPLE_ROOT%\examples\%1\config.json" . >nul
copy /y "%EXAMPLE_ROOT%\examples\%1\PluginInfo.json" . >nul
popd
exit /b 0
