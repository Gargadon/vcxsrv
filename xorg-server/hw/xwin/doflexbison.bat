@echo off
setlocal

cd "%~dp0"

set "TOOLS_DIR=%~dp0..\..\..\tools\mhmake"
set "BISON_PKGDATADIR=%TOOLS_DIR%\data"
if not exist "%TOOLS_DIR%\win_bison.exe" (
    echo tools\mhmake\win_bison.exe was not found 1>&2
    exit /b 1
)
if not exist "%TOOLS_DIR%\win_flex.exe" (
    echo tools\mhmake\win_flex.exe was not found 1>&2
    exit /b 1
)
"%TOOLS_DIR%\win_bison.exe" -d -o%1/winprefsyacc.c winprefsyacc.y
if errorlevel 1 exit /b %errorlevel%
"%TOOLS_DIR%\win_flex.exe" -i -o%1/winprefslex.c winprefslex.l
if errorlevel 1 exit /b %errorlevel%

endlocal

