CPUS=4
SUFFIX=Nuknown


PROJECT_NAME=notepad--
PACKAGE_NAME=com.hmja.notepad

all:
	cmake -G"CodeBlocks - MinGW Makefiles" -Bbuild -DCMAKE_BUILD_TYPE=Release -DPACKAGE_SUFFIX="$(SUFFIX)" -DPLUGIN_EN=off -DCMAKE_CXX_COMPILER=D:/Qt/Tools/mingw810_64/bin/g++.exe -DCMAKE_C_COMPILER=D:/Qt/Tools/mingw810_64/bin/gcc.exe -DCMAKE_PREFIX_PATH=D:\Qt\5.15.2\mingw81_64 .
	cd build && make

debug:
	mkdir -p build
	cd build && cmake -DCMAKE_BUILD_TYPE=Debug ..
	cd build && make

release:
	cmake -G"CodeBlocks - MinGW Makefiles" -Bbuild -DCMAKE_BUILD_TYPE=Release -DPACKAGE_SUFFIX="$(SUFFIX)" -DPLUGIN_EN=off -DCMAKE_CXX_COMPILER=D:/Qt/Tools/mingw810_64/bin/g++.exe -DCMAKE_C_COMPILER=D:/Qt/Tools/mingw810_64/bin/gcc.exe -DIS_WIN=WIN32 -DCMAKE_PREFIX_PATH=D:\Qt\5.15.2\mingw81_64 .
	cd build && make
	win.bat release

release-plugin:
	cmake -G"CodeBlocks - MinGW Makefiles" -Bbuild -DCMAKE_BUILD_TYPE=Release -DPACKAGE_SUFFIX="$(SUFFIX)" -DPLUGIN_EN=on -DCMAKE_CXX_COMPILER=D:/Qt/Tools/mingw810_64/bin/g++.exe -DCMAKE_C_COMPILER=D:/Qt/Tools/mingw810_64/bin/gcc.exe  -DIS_WIN=WIN32 -DCMAKE_PREFIX_PATH=D:\Qt\5.15.2\mingw81_64 .
	cd build && make
	./win.bat release-plugin
