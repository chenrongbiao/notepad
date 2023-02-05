cd build
if exist %1 (
    @echo "%1 文件夹已存在"
) else (
    mkdir %1
)
copy .\notepad--.exe .\%1
cd %1
windeployqt notepad--.exe

@REM if exist plugin (
@REM     @echo "plugin 文件夹已存在"
@REM     cd ..
@REM ) else (
@REM     mkdir plugin
@REM     cd ..
@REM )

@REM @echo off                                             ==>  @echo 就是打印信息，没有实际作用
@REM set target_path=build\src\plugin\helloworld\helloworld_autogen       ==>  设置指定文件所在的盘或者目录
@REM set copy_target_path=C:\Users\dulun\Desktop\copy      ==> 设置指定文件拷贝存储的目录，先建立这个目录
@REM set vcffile=*.vcf                                     ==> 设置指定文件的类型，这里是.vcf为后缀
@REM C:                                                    ==> 进入指定文件所在的盘，这里是C盘，一定要指定
@REM cd %target_path%                                      ==> 进入指定文件的目录，缩小一下匹配的范围，减少时间
@REM for /f "delims=" %%s in ('dir /b/a-d/s "%target_path%"\"%vcffile%"') do (
@REM echo %%s
@REM copy /y "%%s" %copy_target_path%
@REM )                                                     ==> 这里就是在指定目录下面匹配指定文件，遍历操作，输出文件名字，拷贝文件
@REM pause                                                 ==> 执行后显示：请按任意键继续...