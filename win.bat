cd build
if exist %1 (
    @echo "%1 �ļ����Ѵ���"
) else (
    mkdir %1
)
cd %1
if exist plugin (
    @echo "plugin �ļ����Ѵ���"
) else (
    mkdir plugin
)
cd ..
windeployqt notepad--.exe --dir=%1
@REM copy .\src\qscint\libqscint.a .\%1\plugin
@REM copy .\src\plugin\^*\^*.dll .\%1\plugin
