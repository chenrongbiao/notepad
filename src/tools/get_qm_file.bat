@echo off

SETLOCAL ENABLEDELAYEDEXPANSION 

set qt_lrelease=%Qt_Bin%\lrelease.exe

cd ../
set qm_dir=%cd%\app\translations

cd ../
set ts_dir=%cd%\languages

cd %ts_dir%

for %%i in (*.ts) do (
  set str=%%i
  set file_name=!str:.ts=.qm!
  %qt_lrelease% -verbose %%i -qm %qm_dir%\!file_name!
)

pause