@echo off

set qt_lupdate=%Qt_Bin%\lupdate.exe
set qt_qmake=%Qt_Bin%\qmake.exe

cd ../
set base_dir=%cd%

cd ../
set ts_dir=%cd%\languages\

cd %base_dir%

echo %cd%

call:translate app

pause 
exit

rem Func define
:translate
   cd %1
   for /f "tokens=2" %%i in ('find /i "(target_name" CMakeLists.txt') do set name=%%i
   set folder=%name:~0,-1%
   %qt_qmake% -project -o %folder%.pro
   echo TRANSLATIONS += %ts_dir%/%folder%_zh_CN.ts >> %folder%.pro
   %qt_lupdate% -verbose %folder%.pro -ts %ts_dir%/%folder%_zh_CN.ts
   del %folder%.pro
   cd %base_dir%
goto:eof
