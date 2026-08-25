@echo off
setlocal
for /f "delims=" %%P in ('C:\cygwin64\bin\cygpath.exe -u "%3"') do C:\cygwin64\bin\bash.exe -lc "sed 's/\r$//' '%%P' | gperf -m 100"
endlocal
