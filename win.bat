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
@REM copy .\notepad--.exe .\%1
@REM cd %1
windeployqt notepad--.exe --dir=%1
copy .\src\qscint\libqscint.a .\%1\plugin
copy .\src\plugin\*\*.dll .\%1\plugin
