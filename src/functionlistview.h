#pragma once

#include <QWidget>
#include "ui_functionlistview.h"

class QStandardItemModel;
class QStandardItem;
class FunctionItem;
class FunctionListView;

class FunctionListBase {
public:
	FunctionListBase()
	{
		mFunctionList = new QList<FunctionItem>();
	}
	~FunctionListBase()
	{
		if (mFunctionList)
		{
			delete mFunctionList;
			mFunctionList = nullptr;
		}
	}
	virtual void parse(FunctionListView* pListView) {}
	virtual void updateUI(FunctionListView* pListView) {}
	QList<FunctionItem>* getParseResult()
	{
		return mFunctionList;
	}

	static QString getFunctionNameFromText(QString txt)
	{
		if (txt.contains("("))
		{
			QString txt1 = txt.mid(0, txt.lastIndexOf("("));
			QStringList txtList = txt1.split(" ");
			QString functionName = txtList[txtList.count() - 1].trimmed();
			return functionName.replace("*", "");
		}
		return "";
	}

protected:
	QList<FunctionItem>* mFunctionList;
};

class FunctionItem {
public:
	FunctionItem();
	FunctionItem(QString className, QString functionName, qint64 lineNumber);
	~FunctionItem();

	QString getClassName();
	QString getFunctionName();
	qint64 getFunctionLineNumber();

	void setClassName(QString className);
	void setFunctionName(QString functionName);
	void setFunctionLineNumber(qint64 linenNumber);

private:
	QString m_className;
	QString m_functionName;
	qint64  m_functionLineNumber;
};

class FunctionListView : public QWidget
{
	Q_OBJECT

public:
	FunctionListView(QWidget *parent = nullptr);
	~FunctionListView();

	void setNotepadWin(QWidget* pNotepad);
	void showFunctionList();
	void cursorChanged(int line);
	void updateCUI();
	void updateCppUI();
	void updatePythonUI();
	void updateJavaUI();
	QWidget* getNotePad();

private slots:
	void slot_funcListTreeViewDoubleClicked(const QModelIndex &index);

private:
	FunctionListBase* getParser(QString filePath);
	void findCFunction();
	void findCppFunction();
	void findPytonFunction();
	void findJavaFunction();

private:
	Ui::FunctionListViewClass ui;
	QWidget* m_pNotepad;
	QList<FunctionItem>* mFunctionList;
	QStandardItemModel* mModel;
	QStandardItem* mPrevItem;
	QStandardItem* mCurItem;
	QMap<FunctionListBase*, QString>* mParserMap;
};
