#include "ZoomPrompt.h"
#include <iostream>
#include <mutex>
#include <QPainter>
#include <QTimer>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <qdebug.h>

ZoomPrompt* ZoomPrompt::s_zoomPrompt = nullptr;
ZoomPrompt::ZoomPrompt()
{
	m_sleepTimer = new QTimer(this);

	this->resize(150, 50);
	this->setWindowFlags(Qt::FramelessWindowHint);

	//定时器的作用是休眠，降低 Alpha 通道值
	connect(m_sleepTimer, &QTimer::timeout, this, [=]
	{
		if (m_opacity <= 0)
		{
			//窗口该关闭了
			this->close();
			m_sleepTimer->stop();
		}
		else
		{
			m_opacity -= 10;
			update();
		}
	});
}

ZoomPrompt* ZoomPrompt::instance()
{
	//安全的单例
	static std::once_flag flag;
	std::call_once(flag, [&]()
	{
		s_zoomPrompt = new ZoomPrompt;
	});

	return s_zoomPrompt;
}

/*
* 置顶、居中显示
*/
void ZoomPrompt::show(const int ratio, QWidget* parent)
{
	m_currentRatio = ratio;
	m_opacity = 255;

	this->move((parent->width() - this->width()) / 2, (parent->height() - this->height()) / 2);

	this->setParent(parent);
	this->QWidget::show();
	this->raise();

	//重新启动休眠计时
	m_sleepTimer->start(100);
}

void ZoomPrompt::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);
	painter.setPen(Qt::NoPen);
	painter.setFont({ "黑体", 16 });
	painter.setBrush(QColor(0, 0, 0, m_opacity));
	painter.drawRoundedRect(this->rect(), 15, 15);
	painter.setPen(Qt::white);
	painter.drawText(this->rect(), Qt::AlignCenter, QString("Zoom: %1%").arg(m_currentRatio));
}
