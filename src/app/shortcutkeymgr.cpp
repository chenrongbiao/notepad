#include "shortcutkeymgr.h"
#include "shortcutkeyeditwin.h"
#include "ccnotepad.h"

#include <QTableWidgetItem>
#include <QSettings>
#include <Qsci/qscicommandset.h>
#include <Qsci/qsciscintilla.h>
#include <QDebug>

QMap<QString, int>* ShortcutKeyMgr::s_shortcutKeysMap = nullptr;

//QMap<QString, int> * qScintShortcutKeyValueMap = nullptr;

struct ShortcutKeySt {
	QString iniTag;//������Ini�ļ��е�����
	QString name;//��ʾ�ڱ���е�����
	//QString keyDesc;//qkeysequence������
	QKeySequence key;

	bool canModify;//�ܷ��޸�

	ShortcutKeySt() = default;
	ShortcutKeySt(QString name_, QString iniTag_, bool canMofidy=true) :name(name_), iniTag(iniTag_), canModify(canMofidy)
	{

	}
	ShortcutKeySt(QString name_, QString iniTag_, QString keySeq, bool canMofidy = true) :name(name_), iniTag(iniTag_), canModify(canMofidy)
	{
		key = QKeySequence(keySeq);
	}

};

QVector<ShortcutKeySt> shortCutTable;


ShortcutKeyMgr::ShortcutKeyMgr(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initShortcutKeysMap();
	initNddShortcutTable();
	m_pNoteEdit = parent;
	initQscintShortcutTable();

	connect(ui.tableWidget, &QTableWidget::itemDoubleClicked, this, &ShortcutKeyMgr::slot_edit);

	ui.tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);
	ui.qscintTableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	ui.qscintTableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
	ui.qscintTableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);
}

ShortcutKeyMgr::~ShortcutKeyMgr()
{}

void ShortcutKeyMgr::initShortcutKeysMap()
{
	if (s_shortcutKeysMap == nullptr)
	{
		s_shortcutKeysMap = new QMap<QString, int>();

		shortCutTable << ShortcutKeySt(tr("New File"), New_File, QString("Ctrl+T")) \
			<< ShortcutKeySt(tr("Open File"), Open_File, QString("Ctrl+O")) \
			<< ShortcutKeySt(tr("Save File"), Save_File, QString("Ctrl+S"), false) \
			<< ShortcutKeySt(tr("Save All File"), Save_All_File) \
			<< ShortcutKeySt(tr("Close"), Close, QString("Ctrl+W")) \
			<< ShortcutKeySt(tr("Close All"), Close_All, QString("Ctrl+Shift+W")) \
			<< ShortcutKeySt(tr("Cut"), Cut, QString("Ctrl+X"),false) \
			<< ShortcutKeySt(tr("Copy"), Copy, QString("Ctrl+C"), false) \
			<< ShortcutKeySt(tr("Paste"), Paste, QString("Ctrl+V"), false) \
			<< ShortcutKeySt(tr("Undo"), Undo, QString("Ctrl+Z"), false) \
			<< ShortcutKeySt(tr("Redo"), Redo, QString("Ctrl+Y"), false) \
			<< ShortcutKeySt(tr("Find"), Find, QString("Ctrl+F"),false) \
			<< ShortcutKeySt(tr("Replace"), Replace, QString("Ctrl+H")) \
			<< ShortcutKeySt(tr("Dir Find"), DirFind, QString("Ctrl+Shift+D")) \
			<< ShortcutKeySt(tr("Mark"), Mark) \
			<< ShortcutKeySt(tr("word highlight(F8)"), Word_highlight, QString("F8"))\
			<< ShortcutKeySt(tr("clear all highlight(F7)"), Clear_all_highlight, QString("F7")) \
			<< ShortcutKeySt(tr("Zoom In"), Zoom_In) \
			<< ShortcutKeySt(tr("Zoom Out"), Zoom_Out) \
			<< ShortcutKeySt(tr("Word Wrap"), Word_Wrap) \
			<< ShortcutKeySt(tr("Show Blank"), Show_Blank) \
			<< ShortcutKeySt(tr("Indent Guide"), Indent_Guide) \
			<< ShortcutKeySt(tr("Pre Hex Page"), Pre_Page) \
			<< ShortcutKeySt(tr("Next Hex Page"), Next_Page)\
			<< ShortcutKeySt(tr("Goto Hex Page"), Goto_Page, QString("Ctrl+G")) \
			<< ShortcutKeySt(tr("File Compare"), File_Compare) \
			<< ShortcutKeySt(tr("Dir Compare"), Dir_Compare) \
			<< ShortcutKeySt(tr("Bin Compare"), Bin_Compare) \
			<< ShortcutKeySt(tr("transform encoding"), Trans_code) \
			<< ShortcutKeySt(tr("batch rename file"), Batch_rename) \
			<< ShortcutKeySt(tr("Format Xml"), Format_Xml) \
			<< ShortcutKeySt(tr("Format Json"), Format_Json);

	
		for (int i = 0; i < shortCutTable.size(); ++i)
		{
			s_shortcutKeysMap->insert(shortCutTable.at(i).iniTag, i);
		}

		//���ļ��ж�ȡ�û��޸Ĺ������ñ�
		loadUserDefSet();
	}
}

//����ȵ���initShortcutKeysMap()
QKeySequence ShortcutKeyMgr::getUserDefShortcutKey(QString iniTag)
{
	if (s_shortcutKeysMap->contains(iniTag))
	{
		return shortCutTable.at(s_shortcutKeysMap->value(iniTag)).key;
	}
	return QKeySequence();
}

//���û�ini�����м��ؿ�ݼ�����
void ShortcutKeyMgr::loadUserDefSet()
{
	QString userDefFile = QString("notepad/shortcuttab");
	QSettings qs(QSettings::IniFormat, QSettings::UserScope, userDefFile);
	qs.setIniCodec("UTF-8");

	QStringList keys = qs.allKeys();

	QString keySeqStr;

	for (int i = 0; i < keys.size(); ++i)
	{
		const QString & initTag = keys.at(i);

		keySeqStr = qs.value(initTag).toString();

		if (s_shortcutKeysMap->contains(initTag))
		{
			int index = s_shortcutKeysMap->value(initTag);
			shortCutTable[index].key = QKeySequence(keySeqStr);
		}
	}
}

//�޸������ļ��еĿ�ݼ����塣inittag ini��key, keySeqStr ini��value���ڴ�Ҳ�޸���
bool ShortcutKeyMgr::ModifyShortCutKey(QString initTag, QString keySeqStr)
{
	QString userDefFile = QString("notepad/shortcuttab");
	QSettings qs(QSettings::IniFormat, QSettings::UserScope, userDefFile);
	qs.setIniCodec("UTF-8");

	if (s_shortcutKeysMap->contains(initTag))
	{
		int index = s_shortcutKeysMap->value(initTag);
		if (!shortCutTable[index].canModify)
		{
			return false;
		}

		shortCutTable[index].key = QKeySequence(keySeqStr);
		qs.setValue(initTag, keySeqStr);
		qs.sync();
		return true;
	}
	return false;
}

void ShortcutKeyMgr::initNddShortcutTable()
{
	for (int i = 0; i < shortCutTable.size(); ++i)
	{
		ui.tableWidget->insertRow(i);

		QTableWidgetItem* item = new QTableWidgetItem(shortCutTable.at(i).name);
		item->setFlags(item->flags() & ~Qt::ItemIsEditable);
		ui.tableWidget->setItem(i, 0, item);

		qDebug() << shortCutTable.at(i).key.toString();
		QTableWidgetItem* item1 = new QTableWidgetItem(shortCutTable.at(i).key.toString());
		ui.tableWidget->setItem(i, 1, item1);

		if (!shortCutTable.at(i).canModify)
		{
			QTableWidgetItem* item2 = new QTableWidgetItem(tr("Can't Modify"));
			ui.tableWidget->setItem(i, 2, item2);
		}
		else
		{
			QTableWidgetItem* item2 = new QTableWidgetItem(tr("Double Click To Modify"));
			ui.tableWidget->setItem(i, 2, item2);
		}
		
	}
}

//��ʼ��qscint�ڲ��Ŀ�ݼ���Ŀǰ�ⲿ�ֲ����޸ġ�
void ShortcutKeyMgr::initQscintShortcutTable()
{
	QsciScintilla* pNote = new QsciScintilla(nullptr);
	QsciCommandSet* cmdSet = pNote->standardCommands();

	QList<QsciCommand*>& cmdList = cmdSet->commands();

	int rowNum = 0;
	for (int i = 0; i < cmdList.size(); ++i)
	{
		if (cmdList.at(i)->key() == 0)
		{
			continue;
		}
		ui.qscintTableWidget->insertRow(rowNum);

		QTableWidgetItem* item = new QTableWidgetItem(cmdList.at(i)->description());
		item->setFlags(item->flags() & ~Qt::ItemIsEditable);
		ui.qscintTableWidget->setItem(rowNum, 0, item);

		QTableWidgetItem* item1 = new QTableWidgetItem(QKeySequence(cmdList.at(i)->key()).toString());
		ui.qscintTableWidget->setItem(rowNum, 1, item1);

		QTableWidgetItem* item2 = new QTableWidgetItem(tr("Can't Modify"));
		ui.qscintTableWidget->setItem(rowNum, 2, item2);

		++rowNum;
		
	}
	delete pNote;
}

//type 0 ndd 1 qscint
int ShortcutKeyMgr::isKeySeqExist(int row, QString keySeq, int &type)
{
	int c = ui.tableWidget->rowCount();
	for (int i = 0; i < c; ++i)
	{
		if (i == row)
		{
			continue;
		}

		if (ui.tableWidget->item(i, 1)->text() == keySeq)
		{
			type = 0;
			return i;
		}
	}

	c = ui.qscintTableWidget->rowCount();

	for (int i = 0; i < c; ++i)
	{
		if (ui.qscintTableWidget->item(i, 1)->text() == keySeq)
		{
			type = 1;
			return i;
		}
	}
	return -1;
}
//˫���޸Ĳۺ���
void ShortcutKeyMgr::slot_edit(QTableWidgetItem* item)
{
	int row = item->row();
	
	if (!shortCutTable.at(row).canModify)
	{
		ui.plainTextEdit->setPlainText(tr("row %1 shortcut key '%2' can't modify !").arg(row + 1).arg(shortCutTable.at(row).key.toString()));
		return;
	}

	ShortcutKeyEditWin* pWin = new ShortcutKeyEditWin(this);
	pWin->setTitle(shortCutTable.at(row).name);
	pWin->setCurKeyDesc(shortCutTable.at(row).key.toString());
	if (1 == pWin->exec())
	{
		QKeySequence newKeySeq = pWin->getNewKeySeq();

		QTableWidgetItem* item = ui.tableWidget->item(row, 1);
		if (item != nullptr)
		{
			//����Ƿ��ͻ�������ͻ�������á���Ԥ��
			int conflictType = 0;
			int existId = isKeySeqExist(row, newKeySeq.toString(), conflictType);
			if (-1 == existId)
			{
				if (ModifyShortCutKey(shortCutTable.at(row).iniTag, newKeySeq.toString()))
				{
					CCNotePad* pNotePad = dynamic_cast<CCNotePad*>(m_pNoteEdit);
					if (pNotePad != nullptr)
					{
						pNotePad->setUserDefShortcutKey(row);
					}
					item->setText(newKeySeq.toString());
					ui.plainTextEdit->setPlainText(tr("modify row %1 to '%2' shortcut key success!").arg(row + 1).arg(newKeySeq.toString()));
				}
				else
				{
					ui.plainTextEdit->setPlainText(tr("error:modify row %1 to '%2' shortcut key failed !").arg(row + 1).arg(newKeySeq.toString()));
				}
			}
			else
			{
				if (conflictType == 0)
				{
					ui.plainTextEdit->setPlainText(tr("conflict error! '%1' Already exist at row %2").arg(newKeySeq.toString()).arg(existId + 1));
				}
				else
				{
					ui.plainTextEdit->setPlainText(tr("conflict error! '%1' Already exist at qscint row %2").arg(newKeySeq.toString()).arg(existId + 1));
				}
			}
		}
	}
	else
	{
		ui.plainTextEdit->setPlainText(tr("modify canceled !"));
	}
}