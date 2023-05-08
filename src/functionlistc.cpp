#include "functionlistC.h"
#include <ccnotepad.h>
#include <scintillaeditview.h>

void FunctionListC::parse(FunctionListView* pListView)
{
	mFunctionList->clear();
	CCNotePad* _pNotePad = dynamic_cast<CCNotePad*>(pListView->getNotePad());
	ScintillaEditView* _pEditView = _pNotePad->getCurEditView();
	int textLines = _pEditView->lines();
	int pos = 0;
	for (int i = 0; i < textLines; i++)
	{
		QString text = _pEditView->text(i).trimmed();
		if (text.contains("{"))
		{
			if (text.length() > 2 && text.contains(")"))
			{
				QStringList txtList = text.split(")");
				if (txtList.count() != 2) {
					continue;
				}

				{
					if (txtList[1].trimmed() != "{")
					{
						continue;
					}
					QStringList txtList1 = txtList[0].split("(");
					if (txtList1.count() == 1)
					{
						continue;
					}
					QStringList tKeyWordList = txtList1[0].trimmed().split(" ");
					bool isKeyword = false;
					for (int j = 0; j < mKeyWords.count(); j++)
					{
						for (int tj = 0; tj < tKeyWordList.count(); tj++)
						{
							if (mKeyWords[j] == tKeyWordList[tj].trimmed())
							{
								isKeyword = true;
								break;
							}
						}
					}
					if (isKeyword)
					{
						continue;
					}
					
					mFunctionList->append(FunctionItem("", getFunctionNameFromText(text), i));
				}
			}
			else if (i > 0 && text.count() == 1)
			{
				int ti = i;
				do {
					text = _pEditView->text(--ti).trimmed();
					if (text.contains(";") || text.contains("}") || text.startsWith("#") || text.startsWith("//"))
					{
						break;
					}
					if (text.contains(")"))
					{
						QStringList txtList = text.split(")");
						if (txtList.count() != 2 && txtList[1].trimmed().count() != 0)
						{
							continue;
						}

						QStringList txtList1 = txtList[0].split("(");
						if (txtList1.count() == 1)
						{
							continue;
						}
						QStringList tKeyWordList = txtList1[0].trimmed().split(" ");
						bool isKeyword = false;
						for (int j = 0; j < mKeyWords.count(); j++)
						{
							for (int tj = 0; tj < tKeyWordList.count(); tj++)
							{
								if (mKeyWords[j] == tKeyWordList[tj].trimmed())
								{
									isKeyword = true;
									break;
								}
							}
						}
						if (isKeyword)
						{
							continue;
						}
						mFunctionList->append(FunctionItem("", getFunctionNameFromText(text), ti));
						break;
					}
				} while (ti > 0);

			}
		}
	}
}

void FunctionListC::updateUI(FunctionListView* pListView)
{
	pListView->updateCUI();
}