
QT_CXX_COMPILER:=D:/Qt/Tools/mingw810_64/bin/g++.exe
QT_C_COMPILER:=D:/Qt/Tools/mingw810_64/bin/gcc.exe
Qt_PREFIX_PATH:=D:/Qt/5.15.2/mingw81_64

all:all_noplugin all_plugin

all_noplugin:release package

all_plugin:release_plugin package

debug:
	cmake -G"CodeBlocks - MinGW Makefiles" -Bbuild -DCMAKE_BUILD_TYPE=Debug -DPLUGIN_EN=off -DCMAKE_CXX_COMPILER=${QT_CXX_COMPILER} -DCMAKE_C_COMPILER=${QT_C_COMPILER} -DCMAKE_PREFIX_PATH=${Qt_PREFIX_PATH} .
	cd build && make -j4

release:
	cmake -G"CodeBlocks - MinGW Makefiles" -Bbuild -DCMAKE_BUILD_TYPE=Release -DPLUGIN_EN=off -DCMAKE_CXX_COMPILER=${QT_CXX_COMPILER} -DCMAKE_C_COMPILER=${QT_C_COMPILER} -DCMAKE_PREFIX_PATH=${Qt_PREFIX_PATH} .
	cd build && make -j4

release_plugin:
	cmake -G"CodeBlocks - MinGW Makefiles" -Bbuild -DCMAKE_BUILD_TYPE=Release -DPLUGIN_EN=on -DCMAKE_CXX_COMPILER=${QT_CXX_COMPILER} -DCMAKE_C_COMPILER=${QT_C_COMPILER} -DCMAKE_PREFIX_PATH=${Qt_PREFIX_PATH} .
	cd build && make  -j4

package:
	win.bat bin
	cd build && make package

