
# 基于 Git Bash 环境编写
# 设置编译链信息是为了避免环境存在多个Qt环境时编译异常

# 填入Qt的Mingw相关工具安装路径 （不使用MINGW时可不填）
# 填入Mingw Qt G++程序完整路径
Qt_MINGW_CXX_COMPILER:=D:/Qt/Tools/mingw810_64/bin/g++.exe
# 填入Mingw Qt GCC程序完整路径
Qt_MINGW_C_COMPILER:=D:/Qt/Tools/mingw810_64/bin/gcc.exe
# 填入Mingw Qt库查找路径
Qt_MINGW_PREFIX_PATH:=D:/Qt/5.15.2/mingw81_64
# 指定生成的Makefiles格式
Qt_MINGW_G:=CodeBlocks - MinGW Makefiles

# 填入Qt的msvc相关工具安装路径 （不使用MSVC时可不填）
# 填入Msvc Qt库查找路径
Qt_MSVC_PREFIX_PATH:=d:/CompilationTools/Qt/5.15.2/msvc2019_64


all:msvc


mingw:
	cmake -G"${Qt_MINGW_G}" -Bbuild -DCMAKE_BUILD_TYPE=Release -DPLUGIN_EN=on -DCMAKE_PREFIX_PATH=${Qt_MINGW_PREFIX_PATH} -DCMAKE_CXX_COMPILER=${Qt_MINGW_CXX_COMPILER} -DCMAKE_C_COMPILER=${Qt_MINGW_C_COMPILER} .
	cmake --build ./build --config=Release  -j$$(nproc) --target package .



msvc:
	cmake -Bbuild -DCMAKE_BUILD_TYPE=Release -DPLUGIN_EN=on -DCMAKE_PREFIX_PATH=${Qt_MSVC_PREFIX_PATH} .
	cmake --build ./build --config=Release -j$$(nproc) --target package .


