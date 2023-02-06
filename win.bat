cd build
if exist %1 (
    @echo "%1 文件夹已存在"
) else (
    mkdir %1
)
cd %1
if exist plugin (
    @echo "plugin 文件夹已存在"
) else (
    mkdir plugin
)
cd ..
windeployqt notepad--.exe --dir=%1
@REM copy .\src\qscint\libqscint.a .\%1\plugin
@REM copy .\src\plugin\^*\^*.dll .\%1\plugin
