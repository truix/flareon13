@echo off
set IDA="C:\Program Files\IDA Professional 9.3\idat.exe"
%IDA% -A -S"%~1 %~2" "%~3" -L%~4
echo IDA_EXIT=%ERRORLEVEL%
