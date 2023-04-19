#include "functionlistview.h"
#include <scintillaeditview.h>
#include "ccnotepad.h"
#include <QStandardItemModel>
#include <QStandardItemModel>
#include <QStyleFactory>
#include <QStyleFactory>
#include <QStyleFactory>

const char* FuncListLeaf = ":/notepad/funcList_leaf.png";
const char* FuncListNode = ":/notepad/funcList_node.png";

FunctionItem::FunctionItem():
	key(""), value(0)
{

}

FunctionItem::FunctionItem(QString key, qint64 value)
{
	this->key = key;
	this->value = value;
}

FunctionItem::~FunctionItem()
{

}

QString FunctionItem::getKey()
{
	return key;
}

qint64 FunctionItem::getValue()
{
	return value;
}

void FunctionItem::setKey(QString key)
{
	this->key = key;
}

void FunctionItem::setValue(qint64 value)
{
	this->value = value;
}

FunctionListView::FunctionListView(QWidget *parent)
	: QWidget(parent), m_pNotepad(nullptr)
{
	ui.setupUi(this);
	setContextMenuPolicy(Qt::CustomContextMenu);  //设置枚举值
	ui.functionTreeView->setStyle(QStyleFactory::create("windows"));
	m_staticFunctionNameList = new QList<FunctionItem>();
	model = new QStandardItemModel(this);
	ui.functionTreeView->setModel(model);
}

FunctionListView::~FunctionListView()
{
	delete m_staticFunctionNameList;
	delete model;
}


void FunctionListView::setNotepadWin(QWidget* pNotepad)
{
	m_pNotepad = pNotepad;
}

void FunctionListView::showFunctionList() {
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
	QString filePath = _pNotePad->currentTabFilePath();
	if (filePath == nullptr) return;
	m_staticFunctionNameList->clear();
	model->clear();
	if (filePath.endsWith(".c"))
	{
		findCFunction();
	}
	else if (filePath.endsWith(".cpp"))
	{
		findCppFunction();
	}
	else if (filePath.endsWith(".py"))
	{
		findPytonFunction();
	}
	else if (filePath.endsWith(".java"))
	{
		findJavaFunction();
	}
}

void FunctionListView::slot_funcListTreeViewDoubleClicked(const QModelIndex &index)
{
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
	ScintillaEditView* _pEditView = _pNotePad->getCurEditView();
	QStandardItem* item = model->itemFromIndex(index);
	int line = item->data().value<int>();
	_pEditView->execute(SCI_GOTOLINE, line);
	_pEditView->setFocus();
}

void FunctionListView::findJavaFunction()
{
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
	ScintillaEditView* _pEditView = _pNotePad->getCurEditView();
	int textLines = _pEditView->lines();
	QString pattern = "^\\s*\\w+\\s+\\w+\\s+\\w+\\s*\\{"; //格式 public class xxx {
	QString pattern1 = "^\\s*\\w+\\s+\\w+\\s+\\w+\\s+\\w+\\s*\\(";//格式： public static String encode(String keyString, String stringToEncode)
	QString pattern2 = "^\\s*\\w+\\s+\\w+\\s+\\w+\\s*\\(";//格式： public String encode(String keyString, String stringToEncode)
	QRegExp rx(pattern);

	for (int i = 0; i < textLines; i++)
	{
		QString text = _pEditView->text(i);
		rx.setPattern(pattern);
		int pos = rx.indexIn(text);
		if (pos >= 0)
		{
			m_staticFunctionNameList->append(FunctionItem(text.trimmed(), i));
			continue;
		}
		rx.setPattern(pattern1);
		pos = rx.indexIn(text);
		if (pos >= 0)
		{
			m_staticFunctionNameList->append(FunctionItem(text.trimmed(), i));
			continue;
		}
		rx.setPattern(pattern2);
		pos = rx.indexIn(text);
		if (pos >= 0)
		{
			m_staticFunctionNameList->append(FunctionItem(text.trimmed(), i));
		}
	}

	updateJavaUI();
}

void FunctionListView::findPytonFunction()
{
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
	ScintillaEditView* _pEditView = _pNotePad->getCurEditView();
	int textLines = _pEditView->lines();
	QString pattern = "^\\s*\\w+\\s+\\w+\\s*\\("; //格式 def xxx(
	QString pattern1 = "^\\s*\\class\\s+\\w+\\s*\\(";//格式： class xx(
	QRegExp rx(pattern);

	for (int i = 0; i < textLines; i++)
	{
		QString text = _pEditView->text(i);
		rx.setPattern(pattern1);
		int pos = rx.indexIn(text);
		if (pos >= 0)
		{
			m_staticFunctionNameList->append(FunctionItem(text.trimmed(), i));
		}
		else
		{
			rx.setPattern(pattern);
			pos = rx.indexIn(text);
			if (pos >= 0)
			{
				if (text.contains("def "))
				{
					m_staticFunctionNameList->append(FunctionItem(text.trimmed(), i));
				}
			}
		}
	}
	updatePythonUI();
}

void FunctionListView::findCppFunction()
{
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
	ScintillaEditView* _pEditView = _pNotePad->getCurEditView();
	int textLines = _pEditView->lines();
	QString pattern = "^\\s{0,}\\w{1,}\\s+\\w{1,}\\s+\\w{1,}\\s{0,}\\("; //格式 static void xxx(
	QString pattern_end = "\\s{0,}\\;"; //格式： ;
	QString pattern1 = "^\\s{0,}\\w{1,}\\s+\\w{1,}\\s{0,}\\("; //格式 void xx(
	QString pattern2 = "\\else";
	QString pattern3 = "^\\s*\\w+\\s+\\w+\\::\\w+\\s*\\(";//格式 void class::function(
	QString pattern4 = "^\\s*\\w+\\::\\w+\\s*\\("; //格式: class::class(
	QString pattern5 = "^\\s*\\w+\\::\\~\\w+\\s*\\("; //格式: class::class(
	QRegExp rx(pattern);
	
	for (int i = 0; i < textLines; i++)
	{
		QString text = _pEditView->text(i);
		rx.setPattern(pattern3);
		int pos = rx.indexIn(text);
		if (pos >= 0)
		{
			m_staticFunctionNameList->append(FunctionItem(text, i));
			continue;
		}

		rx.setPattern(pattern4);
		pos = rx.indexIn(text);
		if (pos >= 0)
		{
			m_staticFunctionNameList->append(FunctionItem(text, i));
			continue;
		}

		rx.setPattern(pattern5);
		pos = rx.indexIn(text);
		if (pos >= 0)
		{
			m_staticFunctionNameList->append(FunctionItem(text, i));
			continue;
		}

		rx.setPattern(pattern);
		pos = rx.indexIn(text);
		if (pos >= 0)
		{
			rx.setPattern(pattern_end);
			pos = rx.lastIndexIn(text);
			if (pos < 0) {
				m_staticFunctionNameList->append(FunctionItem(text, i));
			}
		}
		else {
			rx.setPattern(pattern1);
			pos = rx.indexIn(text);
			if (pos >= 0)
			{
				rx.setPattern(pattern2);
				pos = rx.indexIn(text);
				if (pos < 0)
				{
					rx.setPattern(pattern_end);
					pos = rx.indexIn(text);
					if (pos < 0)
					{
						m_staticFunctionNameList->append(FunctionItem(text, i));
					}
				}
			}
		}
	}
	updateCppUI();
}

void FunctionListView::findCFunction() {
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
	ScintillaEditView* _pEditView = _pNotePad->getCurEditView();
	int textLines = _pEditView->lines();
	QString pattern = "^\\s{0,}\\w{1,}\\s+\\w{1,}\\s+\\w{1,}\\s{0,}\\("; //格式 static void xxx(
	QString pattern_end = "\\s{0,}\\;"; //格式： ;
	QString pattern1 = "^\\s{0,}\\w{1,}\\s+\\w{1,}\\s{0,}\\("; //格式 void xx(
	//QString pattern1 = "^\\s{0,}\\w{1,}\\s+\\w{1,}\\s{0,}";//\\s + \\[a - zA - Z]\\s{ 0, }\\("; //格式 void xx(
	QString pattern2 = "\\else";
	QRegExp rx(pattern);

	for (int i = 0; i < textLines; i++) 
	{
		QString text = _pEditView->text(i);
		rx.setPattern(pattern);
		int pos = rx.indexIn(text);
		if (pos >= 0)
		{
			rx.setPattern(pattern_end);
			pos = rx.lastIndexIn(text);
			if (pos < 0) {
				m_staticFunctionNameList->append(FunctionItem(text, i));
			}
		}
		else {
			rx.setPattern(pattern1);
			pos = rx.indexIn(text);
			if (pos >= 0)
			{
				rx.setPattern(pattern2);
				pos = rx.indexIn(text);
				if (pos < 0)
				{
					rx.setPattern(pattern_end);
					pos = rx.indexIn(text);
					if (pos < 0)
					{
						m_staticFunctionNameList->append(FunctionItem(text, i));
					}
				}
			}
		}
	}
	updateCUI();
}

void FunctionListView::updateCUI()
{
	if (!m_staticFunctionNameList->isEmpty())
	{
		CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
		QStandardItem* item = new QStandardItem(_pNotePad->currentTabLabel());
		item->setEditable(false);
		model->setItem(0, 0, item);
		for (int i = 0; i < m_staticFunctionNameList->count(); i++)
		{
			FunctionItem functionItem = m_staticFunctionNameList->at(i);
			QStandardItem* item = new QStandardItem(QIcon(FuncListLeaf), functionItem.getKey());
			item->setData(functionItem.getValue());
			item->setEditable(false);
			model->item(0, 0)->setChild(i, item);
		}
		ui.functionTreeView->expandAll();
	}
}

void FunctionListView::updateCppUI()
{
	if (!m_staticFunctionNameList->isEmpty())
	{
		CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
		QStandardItem* item = new QStandardItem(_pNotePad->currentTabLabel());
		item->setEditable(false);
		model->setItem(0, 0, item);
		QString pattern = "^\\s*\\w+\\::\\w+\\s*\\("; //格式: class::class(
		QRegExp rx(pattern);
		qint64 classIndex = 0;
		qint64 classFuncIndex = 0;
		QString className = "";
		for (int i = 0; i < m_staticFunctionNameList->count(); i++)
		{
			FunctionItem functionItem = m_staticFunctionNameList->at(i);
			int pos = rx.indexIn(functionItem.getKey());
			if (pos >= 0)
			{
				item = new QStandardItem(QIcon(FuncListNode), functionItem.getKey());
				item->setData(functionItem.getValue());
				item->setEditable(false);
				model->item(0, 0)->setChild(classIndex++, item);
				classFuncIndex = 0;
				className = functionItem.getKey().split("::").at(0);
			}
			else {
				item = new QStandardItem(QIcon(FuncListLeaf), functionItem.getKey());
				item->setData(QVariant(functionItem.getValue()));
				item->setEditable(false);
				if (functionItem.getKey().contains(className + "::"))
				{
					QString tText = functionItem.getKey().replace(className + "::", "");
					item->setText(tText);
					model->item(0, 0)->child(classIndex - 1, 0)->setChild(classFuncIndex++, item);
				}
				else
				{
					model->item(0, 0)->setChild(classIndex++, item);
				}
			}
		}
		ui.functionTreeView->expandAll();
	}
}

void FunctionListView::updatePythonUI()
{
	if (!m_staticFunctionNameList->isEmpty())
	{
		CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
		QStandardItem* item = new QStandardItem(_pNotePad->currentTabLabel());
		item->setEditable(false);
		model->setItem(0, 0, item);
		qint64 classIndex = 0;
		qint64 classFuncIndex = 0;
		for (int i = 0; i < m_staticFunctionNameList->count(); i++)
		{
			FunctionItem functionItem = m_staticFunctionNameList->at(i);
			if (functionItem.getKey().contains("class"))
			{
				item = new QStandardItem(QIcon(FuncListNode), functionItem.getKey());
				item->setData(functionItem.getValue());
				item->setEditable(false);
				model->item(0, 0)->setChild(classIndex++, item);
				classFuncIndex = 0;
			}
			else {
				item = new QStandardItem(QIcon(FuncListLeaf), functionItem.getKey());
				item->setData(QVariant(functionItem.getValue()));
				item->setEditable(false);
				if (functionItem.getKey().contains("def ") && functionItem.getKey().contains("(self"))
				{
					model->item(0, 0)->child(classIndex - 1, 0)->setChild(classFuncIndex++, item);
				}
				else if (functionItem.getKey().contains("def "))
				{
					model->item(0, 0)->setChild(classIndex++, item);
				}
			}
		}
		ui.functionTreeView->expandAll();
	}
}

void FunctionListView::updateJavaUI()
{
	if (!m_staticFunctionNameList->isEmpty())
	{
		CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
		QStandardItem* item = new QStandardItem(_pNotePad->currentTabLabel());
		item->setEditable(false);
		model->setItem(0, 0, item);
		qint64 classIndex = 0;
		qint64 classFuncIndex = 0;
		for (int i = 0; i < m_staticFunctionNameList->count(); i++)
		{
			FunctionItem functionItem = m_staticFunctionNameList->at(i);
			if (functionItem.getKey().contains("class"))
			{
				item = new QStandardItem(QIcon(FuncListNode), functionItem.getKey());
				item->setData(functionItem.getValue());
				item->setEditable(false);
				model->item(0, 0)->setChild(classIndex++, item);
				classFuncIndex = 0;
			}
			else {
				if (functionItem.getKey().contains("throw ")) continue;
				item = new QStandardItem(QIcon(FuncListLeaf), functionItem.getKey());
				item->setData(QVariant(functionItem.getValue()));
				item->setEditable(false);
				model->item(0, 0)->child(classIndex - 1, 0)->setChild(classFuncIndex++, item);
			}
		}
		ui.functionTreeView->expandAll();
	}
}