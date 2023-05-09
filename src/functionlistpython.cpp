#include "functionlistpython.h"
#include <ccnotepad.h>
#include <scintillaeditview.h>

void FunctionListPython::parse(FunctionListView* pListView)
{
	mFunctionList->clear();
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(pListView->getNotePad());
	ScintillaEditView* _pEditView = _pNotePad->getCurEditView();
	int textLines = _pEditView->lines();
	QString pattern = "^\\s*\\w+\\s+\\w+\\s*\\("; //格式 def xxx(
	QString pattern1 = "^\\s*\\class\\s+\\w+";//格式： class xx
	QRegExp rx(pattern);

	for (int i = 0; i < textLines; i++)
	{
		QString text = _pEditView->text(i);
		rx.setPattern(pattern1);
		int pos = rx.indexIn(text);
		if (pos >= 0)
		{
			mFunctionList->append(FunctionItem("", text.trimmed(), i));
		}
		else
		{
			rx.setPattern(pattern);
			pos = rx.indexIn(text);
			if (pos >= 0)
			{
				if (text.contains("def "))
				{
					mFunctionList->append(FunctionItem("", text.trimmed(), i));
				}
			}
		}
	}
}

void FunctionListPython::updateUI(FunctionListView* pListView)
{
	pListView->updatePythonUI();
}