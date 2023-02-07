#include "ndstyleditemdelegate.h"
#include <QTextDocument>
#include <QApplication>
#include <QAbstractTextDocumentLayout>
#include <QPainter>
#include <QTextEdit>

NdStyledItemDelegate::NdStyledItemDelegate(QObject *parent)
	: QStyledItemDelegate(parent), m_defaultFontSize(14)
{
}

NdStyledItemDelegate::~NdStyledItemDelegate()
{
}


void NdStyledItemDelegate::setFontSize(int size)
{
	m_defaultFontSize = size;
	
}

//����ʹ����֧�ָ��ı���ʽ������
void NdStyledItemDelegate::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	QStyleOptionViewItem viewOption(option);
	initStyleOption(&viewOption, index);
	if (option.state.testFlag(QStyle::State_HasFocus))
		viewOption.state = viewOption.state ^ QStyle::State_HasFocus;

	// ... ʡ��
	// ������ʾ�ı�Ϊ�գ�ʹ��Ĭ����ʽ
	QStyle *pStyle = viewOption.widget ? viewOption.widget->style() : QApplication::style();

	QTextDocument doc;

	//�ⲿ�޸��������С���ڲ����и��ı����޸Ļ��ơ�
	if (m_defaultFontSize != 14)
	{
		viewOption.text.replace("font-size:14px",QString("font-size:%1px").arg(m_defaultFontSize));
	}

	doc.setHtml(viewOption.text);

	viewOption.text.clear();

	pStyle->drawControl(QStyle::CE_ItemViewItem, &viewOption, painter, viewOption.widget);

	QAbstractTextDocumentLayout::PaintContext paintContext;

	QRect textRect = pStyle->subElementRect(QStyle::SE_ItemViewItemText, &viewOption);
	painter->save();
	// ����任�������Ͻ�����Ϊԭ��
	painter->translate(textRect.topLeft());
	// ����HTML��������
	painter->setClipRect(textRect.translated(-textRect.topLeft()));

	doc.documentLayout()->draw(painter, paintContext);

	painter->restore();
}
