:: windows-msvc-ninja.bat

:: Windows MSVC - ͨ�� Windows ƽ̨ MSVC ��������
:: ���ļ����� GBK �������棬���� PowerShell ������

@echo off

:: Ԥ�̻�����
set builddir=build/windows-universal
set installdir=%builddir%/install

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
::                                                          ::
::      !!! ����: ָ�����ڹ���ʱ���õ� MSVC Qt ��λ��!!!         ::
set QT_MSVC_PREFIX_DIR=C:\Qt\Qt5.14.2\5.14.2\msvc2017_64
::                                                          ::
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::


:: ����ѡ��Ԥ����
set CMAKE_OPTIONS=
set CMAKE_OPTIONS=%CMAKE_OPTIONS% -G Ninja
set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DCMAKE_PREFIX_PATH=%QT_MSVC_PREFIX_DIR%
@REM set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DCMAKE_BUILD_TYPE=Debug
@REM set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DUSE_WINDOWS_UNIVERSAL=ON
@REM set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DWINDOWS_DEPLOY_QT=ON
@REM set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DWINDOWS_DEPLOY_QT5=ON
@REM set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DWINDOWS_DEPLOY_QT6=ON
@REM set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DUSE_QT6=ON

:: ������ʱ installdir ��ʾ��Ҫ��װ��·��
set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DCMAKE_INSTALL_PREFIX=%installdir%


:: --------------------------------------------------- ::
:: ���������ý��ղ���
if "%1" == "run" (
    :: �˴� \ �� / �෴
    build\windows-universal\windows-deployqt\Notepad--.app\bin\Notepad--.exe
    goto :finish
)
:: --------------------------------------------------- ::

@echo ---- �������� Notepad-- ��Ŀ ----

:: 1. ѯ�ʹ���������
@echo 1. ���� Debug(Ĭ��), 2. ���� Release
set /p chose="���������: "

if "%chose%" == "2" (
    set CMAKE_BUILD_TYPE=Relase
    set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DCMAKE_BUILD_TYPE=Relase
) else (
    set CMAKE_BUILD_TYPE=Debug
    set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DCMAKE_BUILD_TYPE=Debug
)

:: 2. ѯ�� QSci ����������
@echo ---- �Ƿ�ָ�� QScint ����Ϊ��̬��? Ĭ��(OFF) ----
set /p useshare=����(on):

if "%useshare%" == "on" (
    set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DNOTEPAD_BUILD_BY_SHARED=ON
)

:: 3. ѯ������ USE_WINDOWS_UNIVERSAL
@echo ---- �Ƿ����� USE_WINDOWS_UNIVERSAL? Ĭ��(ON) ----
set /p universal=����(n):

if not "%universal%" == "n" (
    set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DUSE_WINDOWS_UNIVERSAL=ON
)

:: 4. ѯ������ WINDOWS_DEPLOY_QT 
@echo ---- �Ƿ����� WINDOWS_DEPLOY_QT? Ĭ��(ON) ----
set /p deployqt=����(n):

if not "%deployqt%" == "n" (
    set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DWINDOWS_DEPLOY_QT=ON
)

:: 5. ѯ������ WINDOWS_DEPLOY_QT5 �� WINDOWS_DEPLOY_QT6 USE_QT6
@echo ---- �Ƿ����� WINDOWS_DEPLOY_QT5 �汾? Ĭ��(5,��ѡ6) ----
set /p deployqt5=����(6):

if not "%deployqt5%" == "6" (
    set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DWINDOWS_DEPLOY_QT5=ON
) else (
    set CMAKE_OPTIONS=%CMAKE_OPTIONS% -DWINDOWS_DEPLOY_QT6=ON -DUSE_QT6=ON
)

:: ------------------------------------------------------------------- ::
@echo ----------------------- ����ǰ����Ԥ�� ---------------------------
@echo "cmake -B%builddir% %CMAKE_OPTIONS% ."
@echo "cmake --build %builddir% --config %CMAKE_BUILD_TYPE%"
@echo "cmake --install %builddir% --prefix %installdir%"
@echo "cmake --build %builddir% --target windows-deployqt"
:: ------------------------------------------------------------------- ::


:: ����ǰ���� - Ѱ��Ӳ���е� msvc ��������
@echo ---- Ѱ��Ӳ���е� msvc �������� ----

set vcvars=
for %%d in (C: D: E: F: G: H:) do (
    if exist %%d (
        @echo ���ڲ���Ӳ�� %%d �е� VC ���û���...
        pushd %%d\
        for /r %%p in (*vcvars64.bat) do (
            @echo ���������ļ�: %%p
            set vcvars=%%p
            popd
            goto :set_vcvars
        )
        popd
    )
)

:set_vcvars
if "%vcvars%" == "" (
    @echo "could not found vcvars64.bat file"
    goto :finish
) else (
    @echo "config MSVC environment..."
    call "%vcvars%" amd64
)


:: ��ʽ����Ŀ�������á���������װ������
@echo ------------ ׼������ ------------
cmake -B%builddir% %CMAKE_OPTIONS% .
cmake --build %builddir% --config %CMAKE_BUILD_TYPE%
cmake --install %builddir% --prefix %installdir%
cmake --build %builddir% --target windows-deployqt
goto :finish


:: �������쳣�˳��Ķ�λ
:finish
pause

:: ������ģ����� cmd ������ �� Powershell ������
:: ������ģ�帴�Ƶ���Ŀ��Ŀ¼�������ƣ����� Windows ��˫������
:: �����ÿ�