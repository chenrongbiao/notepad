@echo off

set Qt5_DIR=D:\3rd\Qt\5.15.2\msvc2019_64\lib\cmake\Qt5
set Qt_BIN=D:\3rd\Qt\5.15.2\msvc2019_64\bin;

set PATH=%PATH%;%Qt_BIN%

pushd %1 & for %%i in (.) do set dir_name=%%~ni

call cmake-gui -S "./" -B "../%dir_name%_build"
