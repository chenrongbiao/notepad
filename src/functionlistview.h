#pragma once

#include <QWidget>
#include "ui_functionlistview.h"

class QStandardItemModel;

class FunctionItem {
public:
	FunctionItem();
	FunctionItem(QString key, qint64 value);
	~FunctionItem();

	QString getKey();
	qint64 getValue();
	void setKey(QString key);
	void setValue(qint64 value);

private:
	QString key;
	qint64 value;
};

class FunctionListView : public QWidget
{
	Q_OBJECT

public:
	FunctionListView(QWidget *parent = nullptr);
	~FunctionListView();

	void setNotepadWin(QWidget* pNotepad);
	void showFunctionList();

private slots:
	void slot_funcListTreeViewDoubleClicked(const QModelIndex &index);

private:
	void findCFunction();
	void findCppFunction();
	void findPytonFunction();
	void findJavaFunction();
	void updateCUI();
	void updateCppUI();
	void updatePythonUI();
	void updateJavaUI();

private:
	Ui::FunctionListViewClass ui;

	QWidget* m_pNotepad;

	QList<FunctionItem> *m_staticFunctionNameList;
	QStandardItemModel* model;
};
