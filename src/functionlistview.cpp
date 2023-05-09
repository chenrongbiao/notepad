#include "functionlistview.h"
#include <scintillaeditview.h>
#include "ccnotepad.h"
#include <QStandardItemModel>
#include <QStandardItemModel>
#include <QStyleFactory>
#include <QStyleFactory>
#include <QStyleFactory>
#include <QScrollBar>
#include <functionlistcpp.h>
#include <functionlistpython.h>
#include <functionlistjava.h>

const char* FuncListLeaf = ":/notepad/funcList_leaf.png";
const char* FuncListNode = ":/notepad/funcList_node.png";

FunctionItem::FunctionItem():
	m_className(""), m_functionName(""), m_functionLineNumber(0)
{

}

FunctionItem::FunctionItem(QString className, QString functionName, qint64 functionLineNumber)
{
	m_className = className;
	m_functionName = functionName;
	m_functionLineNumber = functionLineNumber;
}

FunctionItem::~FunctionItem()
{

}

QString FunctionItem::getClassName()
{
	return m_className;
}

QString FunctionItem::getFunctionName()
{
	return m_functionName;
}

qint64 FunctionItem::getFunctionLineNumber()
{
	return m_functionLineNumber;
}

void FunctionItem::setClassName(QString className)
{
	m_className = className;
}

void FunctionItem::setFunctionName(QString functionName)
{
	m_functionName = functionName;
}

void FunctionItem::setFunctionLineNumber(qint64 lineNumber)
{
	m_functionLineNumber = lineNumber;
}

FunctionListView::FunctionListView(QWidget *parent)
	: QWidget(parent), m_pNotepad(nullptr), mPrevItem(nullptr),
	mCurItem(nullptr), mFunctionList(nullptr)
{
	ui.setupUi(this);
	setContextMenuPolicy(Qt::CustomContextMenu);  //…Ë÷√√∂æŸ÷µ
	mParserMap = new QMap<FunctionListBase*, QString>();
	mParserMap->insert(new FunctionListCpp(), ".cpp");
	mParserMap->insert(new FunctionListCpp(), ".h");
	mParserMap->insert(new FunctionListC(), ".c");
	mParserMap->insert(new FunctionListPython(), ".py");
	mParserMap->insert(new FunctionListJava(), ".java");
	ui.functionTreeView->setStyle(QStyleFactory::create("windows"));
	mModel = new QStandardItemModel(this);
	ui.functionTreeView->setModel(mModel);
}

FunctionListView::~FunctionListView()
{
	delete mModel;
}


void FunctionListView::setNotepadWin(QWidget* pNotepad)
{
	m_pNotepad = pNotepad;
}

void FunctionListView::showFunctionList() {
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
	QString filePath = _pNotePad->currentTabFilePath();
	if (filePath == nullptr) return;
	mModel->clear();
	FunctionListBase* base = getParser(filePath);
	if (base != nullptr)
	{
		base->parse(this);
		mFunctionList = base->getParseResult();
		base->updateUI(this);
	}
#if 0
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
#endif
}

FunctionListBase* FunctionListView::getParser(QString filePath)
{
	if (mParserMap->count() > 0)
	{
		QString suffix1 = filePath.mid(filePath.lastIndexOf("."));
		QMap<FunctionListBase*, QString>::const_iterator maps = mParserMap->constBegin();
		while (maps != mParserMap->constEnd())
		{
			QString suffix = maps.value();
			if (suffix.endsWith(suffix1))
			{
				return maps.key();
			}
			++maps;
		}
	}
	return nullptr;
}

void FunctionListView::slot_funcListTreeViewDoubleClicked(const QModelIndex &index)
{
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
	ScintillaEditView* _pEditView = _pNotePad->getCurEditView();
	QStandardItem* item = mModel->itemFromIndex(index);
	int line = item->data().value<int>();
	if (line > 0)
	{
		_pEditView->execute(SCI_GOTOLINE, line);
		_pEditView->setFocus();
	}
}

void FunctionListView::findJavaFunction()
{
	FunctionListJava* java = new FunctionListJava();
	java->parse(this);
	mFunctionList = java->getParseResult();
	updateJavaUI();
}

void FunctionListView::findPytonFunction()
{
	FunctionListPython* python = new FunctionListPython();
	python->parse(this);
	mFunctionList = python->getParseResult();
	updatePythonUI();
}

void FunctionListView::findCppFunction()
{
	FunctionListCpp* cpp = new FunctionListCpp();
	cpp->parse(this);
	mFunctionList = cpp->getParseResult();
	updateCppUI();
}

void FunctionListView::findCFunction() {
	FunctionListC* c = new FunctionListC();
	c->parse(this);
	mFunctionList = c->getParseResult();
	updateCUI();
}

void FunctionListView::updateCUI()
{
	if (!mFunctionList->isEmpty())
	{
		CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
		QStandardItem* item = new QStandardItem(_pNotePad->currentTabLabel());
		item->setEditable(false);
		mModel->setItem(0, 0, item);
		for (int i = 0; i < mFunctionList->count(); i++)
		{
			FunctionItem functionItem = mFunctionList->at(i);
			QStandardItem* item = new QStandardItem(QIcon(FuncListLeaf), functionItem.getFunctionName());
			item->setData(functionItem.getFunctionLineNumber());
			item->setEditable(false);
			mModel->item(0, 0)->setChild(i, item);
		}
		ui.functionTreeView->expandAll();
	}
}

void FunctionListView::updateCppUI()
{
	if (!mFunctionList->isEmpty())
	{
		CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
		QStandardItem* item = new QStandardItem(_pNotePad->currentTabLabel());
		item->setEditable(false);
		mModel->setItem(0, 0, item);
		qint64 classIndex = 0;
		qint64 classFuncIndex = 0;
		QString className = "";
		QString createdClassNameItem = "";
	
		for (int i = 0; i < mFunctionList->count(); i++)
		{
			FunctionItem fItem = mFunctionList->at(i);
			className = fItem.getClassName();
			bool hasAdded = false;
			for (int j = 0; j < mModel->item(0, 0)->rowCount(); j++)
			{

				if (mModel->item(0, 0)->child(j)->data().value<int>() > 0 && className.isEmpty())
				{
					hasAdded = true;
					break;
				}
				else if (mModel->item(0, 0)->child(j)->text() == className)
				{
					hasAdded = true;
					break;
				}
			}
			if (hasAdded)
			{
				continue;
			}
			for (int j = 0; j < mFunctionList->count(); j++)
			{
				FunctionItem tFItem = mFunctionList->at(j);
				QString tClassName = tFItem.getClassName();
				if (className == tClassName)
				{
					if (className.trimmed().isEmpty())
					{
						item = new QStandardItem(QIcon(FuncListLeaf), tFItem.getFunctionName());
						item->setData(QVariant(tFItem.getFunctionLineNumber()));
						item->setEditable(false);
						mModel->item(0, 0)->setChild(classIndex++, item);
					}
					else
					{
						if (createdClassNameItem != className)
						{
							item = new QStandardItem(QIcon(FuncListNode), tFItem.getClassName());
							item->setEditable(false);
							item->setData(0);
							mModel->item(0, 0)->setChild(classIndex++, item);
							classFuncIndex = 0;
							createdClassNameItem = className;
						}
						if (tFItem.getFunctionName().isEmpty())
							continue;
						item = new QStandardItem(QIcon(FuncListLeaf), tFItem.getFunctionName());
						item->setData(QVariant(tFItem.getFunctionLineNumber()));
						item->setEditable(false);
						mModel->item(0, 0)->child(classIndex - 1, 0)->setChild(classFuncIndex++, item);
					}
				}
			}
		}
		ui.functionTreeView->expandAll();
	}
}

void FunctionListView::updatePythonUI()
{
	if (!mFunctionList->isEmpty())
	{
		CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
		QStandardItem* item = new QStandardItem(_pNotePad->currentTabLabel());
		item->setEditable(false);
		mModel->setItem(0, 0, item);
		qint64 classIndex = 0;
		qint64 classFuncIndex = 0;
		for (int i = 0; i < mFunctionList->count(); i++)
		{
			FunctionItem functionItem = mFunctionList->at(i);
			if (functionItem.getFunctionName().contains("class"))
			{
				item = new QStandardItem(QIcon(FuncListNode), functionItem.getFunctionName());
				item->setData(functionItem.getFunctionLineNumber());
				item->setEditable(false);
				mModel->item(0, 0)->setChild(classIndex++, item);
				classFuncIndex = 0;
			}
			else {
				item = new QStandardItem(QIcon(FuncListLeaf), FunctionListBase::getFunctionNameFromText(functionItem.getFunctionName()));
				item->setData(QVariant(functionItem.getFunctionLineNumber()));
				item->setEditable(false);
				if (functionItem.getFunctionName().contains("def ") && functionItem.getFunctionName().contains("(self") && classIndex > 0)
				{
					mModel->item(0, 0)->child(classIndex - 1, 0)->setChild(classFuncIndex++, item);
				}
				else if (functionItem.getFunctionName().contains("def "))
				{
					mModel->item(0, 0)->setChild(classIndex++, item);
				}
			}
		}
		ui.functionTreeView->expandAll();
	}
}

void FunctionListView::updateJavaUI()
{
	if (!mFunctionList->isEmpty())
	{
		CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(m_pNotepad);
		QStandardItem* item = new QStandardItem(_pNotePad->currentTabLabel());
		item->setEditable(false);
		mModel->setItem(0, 0, item);
		qint64 classIndex = 0;
		qint64 classFuncIndex = 0;
		for (int i = 0; i < mFunctionList->count(); i++)
		{
			FunctionItem functionItem = mFunctionList->at(i);
			if (functionItem.getFunctionName().contains("class"))
			{
				item = new QStandardItem(QIcon(FuncListNode), FunctionListJava::getClassNameFromText(functionItem.getFunctionName()));
				item->setData(functionItem.getFunctionLineNumber());
				item->setEditable(false);
				mModel->item(0, 0)->setChild(classIndex++, item);
				classFuncIndex = 0;
			}
			else {
				if (functionItem.getFunctionName().contains("throw ")) continue;
				item = new QStandardItem(QIcon(FuncListLeaf), FunctionListBase::getFunctionNameFromText(functionItem.getFunctionName()));
				item->setData(QVariant(functionItem.getFunctionLineNumber()));
				item->setEditable(false);
				if (classIndex > 0)
				{
					mModel->item(0, 0)->child(classIndex - 1, 0)->setChild(classFuncIndex++, item);
				}
				else
				{
					mModel->item(0, 0)->setChild(classFuncIndex++, item);
				}
			}
		}
		ui.functionTreeView->expandAll();
	}
}

void FunctionListView::cursorChanged(int line)
{
	if (mModel->rowCount() <= 0 || mFunctionList->count() <= 0)
	{
		return;
	}

	if (mFunctionList != nullptr && mFunctionList->count() > 0)
	{
		FunctionItem fItem;
		for (int i = 0; i < mFunctionList->count(); i++)
		{
			fItem = mFunctionList->at(i);
			int funcLine = fItem.getFunctionLineNumber();
			if (funcLine < line)
			{
				continue;
			}
			else if (funcLine > line)
			{
				if (i > 0)
				{
					fItem = mFunctionList->at(i - 1);
				}
				break;
			}
			else
			{
				break;
			}
		}
		QStandardItem* rootItem = mModel->item(0);
		int itemCount = rootItem->rowCount();
		for (int i = 0;i < itemCount; i++)
		{
			QStandardItem* item = rootItem->child(i);
			QString l = item->text();
			if (item->hasChildren())
			{
				int subItemCount = item->rowCount();
				for (int j = 0; j < subItemCount; j++)
				{
					QStandardItem* tItem = item->child(j);
					int tLines = tItem->data().value<int>();
					if (tLines == fItem.getFunctionLineNumber())
					{
						ui.functionTreeView->setCurrentIndex(tItem->index());
					}
				}
			}
			else
			{
				int tLines = item->data().value<int>();
				if (tLines == fItem.getFunctionLineNumber())
				{
					ui.functionTreeView->setCurrentIndex(item->index());
				}
			}
		}
	}
}

QWidget* FunctionListView::getNotePad()
{
	return m_pNotepad;
}