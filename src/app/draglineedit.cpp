#include "draglineedit.h"

DragLineEdit::DragLineEdit(QWidget *parent)
	: QLineEdit(parent)
{
	setAcceptDrops(true);
}

DragLineEdit::~DragLineEdit()
{
}

void DragLineEdit::dragEnterEvent(QDragEnterEvent* event)
{
	if (event->mimeData()->hasFormat("text/uri-list")) //ֻ�ܴ��ı��ļ�
	{
		event->accept(); //������������ڲ������ϷŶ���
	}
	else
	{
		event->ignore();
	}
}

void DragLineEdit::dragMoveEvent(QDragMoveEvent* )
{
}

void DragLineEdit::dropEvent(QDropEvent* e)
{
	QList<QUrl> urls = e->mimeData()->urls();
	if (urls.isEmpty())
		return;

	QString fileName = urls.first().toLocalFile();

	if (fileName.isEmpty())
	{
		return;
	}

	if (!QFile::exists(fileName))
	{
		return;
	}

	this->setText(fileName);

	e->accept();

	emit this->returnPressed();
}
