# notepad--

[中文 ](README.md) | [English](README_EN.md)

## 项目简介

Notepad-- 是使用C++编写的文本编辑器Notepad--,可以支持Win/Linux/Mac平台。

我们的目标是要进行文本编辑类软件的国产可替代，重点在国产Uos/Linux系统、Mac 系统上发展。

一个支持windows/linux/mac的文本编辑器，目标是要国产替换同类软件，来自中国。

对比其它竞品Notepad类软件而言，我们的优势是可以跨平台，支持linux mac操作系统。

 **鉴于某些Notepad竞品作者的不当言论，Notepad--的意义在于：减少一点错误言论，减少一点自以为是。** 

 **Notepad--的目标，致力于国产软件的可替代，专心做软件。**

您可以在这个项目提交bug或反馈问题。

最新版本下载地址：https://gitee.com/cxasm/notepad--/releases/latest

NDD 具备插件编写功能，希望广大的CPP/QT开发者加入我们，插件功能均可以留上您的大名和捐赠渠道，希望
开发者参与插件功能开发。

做国人自己的免费编辑器，离不开您的支持，请通过微信捐赠我们。

![输入图片说明](6688.png)

## ndd 108 工具箱插件
许多开发者，因为无法走通主程序和核心编辑器的编译，也不了解插件的流程，导致无法编写插件。 为降低插件开发门槛，ndd推出一个108工具箱，即“一个插件，带108种小功能”。 大家只需要扩展这个插件，帮忙添砖加瓦，扩展小功能即可。

开发者再也不需要编译ndd主程序，不需要编译核心编辑器，不需要自己从头写一个ndd插件。

只需要下载ndd108的源码目录，打开pro工程，扩展现有ndd108插件功能即可。 

目前已经提交了如下三个小功能：

1. unicode utf8编码解码
1. 全角半角字符处理
1. 文件切割与合并

计划该插件，准备扩展出几十个大功能，108个子功能。

希望用qt/cpp的人士，把自己平时开发的小功能，手头需要用的零散工具，只要是文字和文件处理相关的，都一起扩展到ndd108中来。

详细请参考插件项目 https://gitee.com/cxasm/ndd-plugin 

## 编译
见build目录下文档 linux开源编译及下载说明.txt


## 联络方式

QQ群：372613546 959439826(已满） 用户群，做NDD的问题反馈、功能建议等。

QQ群 616606091 开发群，建议懂CPP/QT、愿意参与NDD项目代码贡献的开发人士加入。

## 效果预览

 **windows效果图：** 

![输入图片说明](png/11.png.png)

![输入图片说明](png/6.png)

 **MacOS 效果图：** 

![Mac系统运行图](png/%E6%88%AA%E5%B1%8F2023-02-26%2011.41.20.png)

![Mac系统文件对比图](png/%E6%88%AA%E5%B1%8F2023-02-26%2011.45.48.png)

 **Redhat7.x 效果图：** 

![输入图片说明](png/10.png.png)

 **麒麟openkylin 0.9 x64 效果图：** 
![输入图片说明](png/openkylin.png)