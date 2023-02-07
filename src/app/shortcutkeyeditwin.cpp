#include "shortcutkeyeditwin.h"

#include <QMessageBox> 

ShortcutKeyEditWin::ShortcutKeyEditWin(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.keySequenceEdit->setFocus();
}

ShortcutKeyEditWin::~ShortcutKeyEditWin()
{}

void ShortcutKeyEditWin::setCurKeyDesc(QString desc)
{
	ui.curKeylineEdit->setText(desc);
}

void ShortcutKeyEditWin::setTitle(QString title)
{
	this->setWindowTitle(title);
}

QKeySequence ShortcutKeyEditWin::getNewKeySeq()
{
	return m_newKeys;
}

//ȷ���޸ģ��ȼ��һ�¡�����ĸ���
void  ShortcutKeyEditWin::slot_ok()
{
	QKeySequence keys = ui.keySequenceEdit->keySequence();
	if (keys.isEmpty())
	{
		QMessageBox::warning(this, tr("Error"), tr("input right key !"));
		return;
	}

	m_newKeys = keys;
	done(1);
}