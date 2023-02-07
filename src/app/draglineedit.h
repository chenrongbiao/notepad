#pragma once

#include <QLineEdit>
#include <QLineEdit>
#include <QDropEvent>
#include <QMimeData>
#include <QDragEnterEvent>

class DragLineEdit : public QLineEdit
{
	Q_OBJECT

public:
	DragLineEdit(QWidget*parent);
	virtual ~DragLineEdit();


protected:
	///< �϶��ļ������� ����
	void dragEnterEvent(QDragEnterEvent* event) override;
	///< �϶��ļ��������ƶ��ļ� ����
	void dragMoveEvent(QDragMoveEvent* event) override;
	///< �϶��ļ��������ͷ��ļ�����
	void dropEvent(QDropEvent* event) override;
};
