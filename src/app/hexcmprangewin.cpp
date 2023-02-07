#include "hexcmprangewin.h"

#include <QLineEdit>
#include <QMessageBox>

HexCmpRangeWin::HexCmpRangeWin(QWidget *parent)
	: QDialog(parent), m_isCancel(true)
{
	ui.setupUi(this);

	connect(ui.leftStartPos, &QLineEdit::textChanged, this, &HexCmpRangeWin::slot_asyncStartPos);
	connect(ui.leftCmpLens, &QLineEdit::textChanged, this, &HexCmpRangeWin::slot_asyncLenPos);

}

HexCmpRangeWin::~HexCmpRangeWin()
{
}

void HexCmpRangeWin::slot_ok()
{
	m_isCancel = false;
	close();
}

//ͨ����ߵ�ֵͬ���ұߡ��ұ߲�ͬ����ߣ������û�����
void HexCmpRangeWin::slot_asyncStartPos(const QString& text)
{
	ui.rightStartPos->setText(text);
}

void HexCmpRangeWin::slot_asyncLenPos(const QString& text)
{
	ui.rightCmpLens->setText(text);
}


//���ȡ�����򲻷����κ���Ч��Χֵ;����ֵҲ��
const int MAX_CMP_LENS = 1024 * 1024 * 10;

void HexCmpRangeWin::getRange(bool & isCancel, qint64 & leftStartPos, int & leftCmpLen, qint64 & rightStartPos, int & rightCmpLen)
{
	isCancel = m_isCancel;

	if (isCancel)
	{
		return;
	}

	bool ok = false;
	bool ok1 = false;
	bool ok2 = false;
	bool ok3 = false;

	leftStartPos = ui.leftStartPos->text().toULongLong(&ok);
	leftCmpLen = ui.leftCmpLens->text().toInt(&ok1);

	rightStartPos = ui.rightStartPos->text().toULongLong(&ok2);
	rightCmpLen = ui.rightCmpLens->text().toInt(&ok3);

	if (!ok || !ok1 || !ok2 || !ok3)
	{
		isCancel = true;
		leftStartPos = -1;
		rightStartPos = -1;
		leftCmpLen = 0;
		rightCmpLen = 0;

		QMessageBox::warning(this, tr("Error"), tr("StartPos or cmpare lens value error."));

		return;
	}
	if (leftCmpLen > MAX_CMP_LENS)
	{
		leftCmpLen = MAX_CMP_LENS;
	}
	if (rightCmpLen > MAX_CMP_LENS)
	{
		rightCmpLen = MAX_CMP_LENS;
	}

}
