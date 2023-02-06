UNAME:=WIN32
UNAME:=$(shell uname)


ifeq ($(UNAME), Linux)
all:linux
linux:
	make -f linux.mk package
else
all:win_all_plugin

win_all:
	make -f win.mk all

win_all_plugin:
	make -f win.mk all_plugin

win_all_noplugin:
	make -f win.mk all_plugin

win:
	make -f win.mk release

win_plugin:
	make -f win.mk release_plugin

win_package:
	make -f win.mk package

endif
