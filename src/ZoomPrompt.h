#pragma once
#include <qwidget.h>

/*
* 缩放提示小部件，设计为单例
* 不影响原有的代码结构，直接为NDD添加此功能
*/
class QTimer;
class ZoomPrompt : public QWidget
{
	ZoomPrompt();
	static ZoomPrompt* s_zoomPrompt;
public:
	static ZoomPrompt* instance();

	void show(const int ratio, QWidget* parent = nullptr);

protected:
	void paintEvent(QPaintEvent* event) override;

private:
	int m_currentRatio{ 100 };		//当前的比例
	QTimer *m_sleepTimer{ nullptr };//休眠计时器
	int16_t m_opacity{ 255 };
};

