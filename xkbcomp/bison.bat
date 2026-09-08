@echo off
setlocal

cd "%~dp0"

set BISON_PKGDATADIR=
set "BISON_EXE=%~dp0..\tools\mhmake\win_bison.exe"
if not exist "%BISON_EXE%" (
    for /f "delims=" %%I in ('where win_bison.exe 2^>nul') do if not defined BISON_FOUND set "BISON_EXE=%%I"& set "BISON_FOUND=1"
)
if not exist "%BISON_EXE%" (
    echo win_bison.exe was not found 1>&2
    exit /b 1
)

"%BISON_EXE%" %1 %2 %3
if errorlevel 1 exit /b %errorlevel%

endlocal

