#include "functionlistjava.h"
#include <ccnotepad.h>
#include <scintillaeditview.h>

void FunctionListJava::parse(FunctionListView* pListView)
{
	mFunctionList->clear();
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(pListView->getNotePad());
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
			mFunctionList->append(FunctionItem("", text.trimmed(), i));
			continue;
		}
		rx.setPattern(pattern1);
		pos = rx.indexIn(text);
		if (pos >= 0)
		{
			mFunctionList->append(FunctionItem("", text.trimmed(), i));
			continue;
		}
		rx.setPattern(pattern2);
		pos = rx.indexIn(text);
		if (pos >= 0)
		{
			mFunctionList->append(FunctionItem("", text.trimmed(), i));
		}
	}
}

void FunctionListJava::updateUI(FunctionListView* pListView)
{
	pListView->updateJavaUI();
}