@echo off
setlocal
set "CYGWIN_BIN=%CYGWIN_ROOT%\bin"
if not exist "%CYGWIN_BIN%\bash.exe" set "CYGWIN_BIN=C:\cygwin64\bin"
if not exist "%CYGWIN_BIN%\bash.exe" set "CYGWIN_BIN=C:\cygwin\bin"
if not exist "%CYGWIN_BIN%\bash.exe" (
    echo Cygwin bash.exe was not found 1>&2
    exit /b 1
)
for /f "delims=" %%I in ('%CYGWIN_BIN%\cygpath.exe -u "%~dp0"') do set "DIX_DIR=%%I"
if not defined DIX_DIR (
    echo Cygwin path conversion failed 1>&2
    exit /b 1
)
"%CYGWIN_BIN%\bash.exe" -lc "cd '%DIX_DIR%' && sed 's/\r$//' generate-atoms | bash -s -- %1 %2"
if errorlevel 1 exit /b %errorlevel%
endlocal
