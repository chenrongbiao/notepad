cd build
if exist %1 (
    @echo "%1 �ļ����Ѵ���"
) else (
    mkdir %1
)
copy .\notepad--.exe .\%1
cd %1
windeployqt notepad--.exe

@REM if exist plugin (
@REM     @echo "plugin �ļ����Ѵ���"
@REM     cd ..
@REM ) else (
@REM     mkdir plugin
@REM     cd ..
@REM )

@REM @echo off                                             ==>  @echo ���Ǵ�ӡ��Ϣ��û��ʵ������
@REM set target_path=build\src\plugin\helloworld\helloworld_autogen       ==>  ����ָ���ļ����ڵ��̻���Ŀ¼
@REM set copy_target_path=C:\Users\dulun\Desktop\copy      ==> ����ָ���ļ������洢��Ŀ¼���Ƚ������Ŀ¼
@REM set vcffile=*.vcf                                     ==> ����ָ���ļ������ͣ�������.vcfΪ��׺
@REM C:                                                    ==> ����ָ���ļ����ڵ��̣�������C�̣�һ��Ҫָ��
@REM cd %target_path%                                      ==> ����ָ���ļ���Ŀ¼����Сһ��ƥ��ķ�Χ������ʱ��
@REM for /f "delims=" %%s in ('dir /b/a-d/s "%target_path%"\"%vcffile%"') do (
@REM echo %%s
@REM copy /y "%%s" %copy_target_path%
@REM )                                                     ==> ���������ָ��Ŀ¼����ƥ��ָ���ļ�����������������ļ����֣������ļ�
@REM pause                                                 ==> ִ�к���ʾ���밴���������...