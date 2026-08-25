@echo off
set PATH=%PATH%;c:\windows\system32\Wbem
set > env_before.txt

if defined VSINSTALLDIR (
  CALL "%VSINSTALLDIR%VC\Auxiliary\Build\vcvarsall.bat" %1 > nul
) else if exist "c:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" (
  CALL "c:\Program Files\Microsoft Visual Studio\18\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" %1 > nul
) else if exist "c:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvarsall.bat" (
  CALL "c:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvarsall.bat" %1 > nul
) else (
  echo Could not locate Visual Studio vcvarsall.bat 1>&2
  exit /b 1
)

set > env_after.txt

