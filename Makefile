UNAME := $(shell python3 getos.py)


ifeq ($(UNAME), linux)
all:linux
linux:
	shell make -f linux.mk package
else
all:win

win:
	make -f win.mk release
win_plugin:
	make -f win.mk release-plugin
endif
