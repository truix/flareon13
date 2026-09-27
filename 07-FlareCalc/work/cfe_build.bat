@echo off
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
cd /d "C:\Users\jhaus\flareon13\07-FlareCalc\work"
cl /nologo /EHa /O2 /Fe:cfe_sim.exe cfe_sim.cpp
echo BUILD_EXIT=%ERRORLEVEL%
