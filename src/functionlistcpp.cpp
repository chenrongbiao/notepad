#include "functionlistcpp.h"
#include <ccnotepad.h>

FunctionListCpp::FunctionListCpp():
	mFlag(0)
{
}

FunctionListCpp::~FunctionListCpp()
{
}

void FunctionListCpp::parse(FunctionListView* pListView)
{
	mFunctionList->clear();
	CCNotePad* _pNotepad = dynamic_cast<CCNotePad*>(pListView->getNotePad());
	ScintillaEditView* _pEditView = _pNotepad->getCurEditView();
	int lines = _pEditView->lines();
	QString className = "";
	for (int i = 110; i < lines; i++)
	{
		QString text = _pEditView->text(i).trimmed();
		QString funcNameText = "";
		if (text.contains("{"))
		{
			int ti = i;
			do {
				funcNameText.insert(0, text);
				text = _pEditView->text(--ti).trimmed();
				if (text.endsWith("};"))
				{
					className = "";
					mFlag = 0;
					break;
				}
				if (text.contains(";") || text.contains("//")
					|| text.endsWith("*/") || text.endsWith("}")
					|| text.startsWith("#") || text.endsWith("{")
					|| text.endsWith("public:") || text.isEmpty()
					|| text.endsWith("private:") || text.endsWith("protected:")/* || (text.endsWith(":") && !text.endsWith("::"))*/)
				{
					break;
				}
			} while (true);
			funcNameText = funcNameText.mid(0, funcNameText.indexOf("{"));
			if (funcNameText.contains(";")
				|| funcNameText.contains("+")
				/* || funcNameText.contains("-")*/)
			{
				continue;
			}
			if (funcNameText.contains(":"))
			{
				bool isKeywords = false;
				QStringList funcNameTextList = funcNameText.split(":");
				for (int ti = 0; ti < funcNameTextList.count(); ti++)
				{
					QStringList funcNameTextList1 = funcNameTextList[ti].split(" ");
					for (int tii = 0; tii < funcNameTextList1.count(); tii++)
					{
						for (int tj = 0; tj < mKeyWords.count(); tj++)
						{
							if (funcNameTextList1[tii].trimmed() == mKeyWords[tj])
							{
								isKeywords = true;
								break;
							}
						}
						if (isKeywords) break;
					}
					if (isKeywords) break;
				}
				if (isKeywords) continue;
			}
			if (funcNameText.trimmed().contains("(") && funcNameText.trimmed().contains(")")
				|| (funcNameText.trimmed().contains("class"))
				|| funcNameText.trimmed().contains("struct"))// && funcNameText.trimmed().contains(":")))
			{
				QStringList funcNameTextList = funcNameText.split(" ");
				bool isKeywords = false;
				for (int j = 0; j < funcNameTextList.count(); j++)
				{
					for (int tj = 0; tj < mKeyWords.count(); tj++)
					{
						if (funcNameTextList[j].trimmed() == mKeyWords[tj])
						{
							isKeywords = true;
						}
					}
				}
				if (isKeywords) continue;
				if (funcNameText.trimmed().contains("class")
					|| funcNameText.trimmed().contains("struct")/* && funcNameText.trimmed().contains(":")*/)
				{
					QStringList txtList = funcNameText.trimmed().split(":");
					if (txtList[0].trimmed().contains("class")
						|| txtList[0].trimmed().contains("struct"))
					{
						QStringList txtList1 = txtList[0].split(" ");
						className = txtList1[1];
						mFlag = 1;
					}
					mFunctionList->append(FunctionItem(className, "", ti + 2));
				}
				else
				{
					funcNameText = funcNameText.mid(0, funcNameText.indexOf("("));
					if (funcNameText.count("::") > 1)
					{
						QStringList funcNameTextList = funcNameText.split(" ");
						funcNameText = funcNameTextList[funcNameTextList.count() - 1].trimmed();
					}
					else
					{
						int of_ti = funcNameText.lastIndexOf(":");
						int of_tii = funcNameText.indexOf("::");
						if (of_ti > 0 && of_tii > 0 && (of_ti - of_tii > 2))
						{
							//¹¹Ôìº¯Êý
						}
						else
						{
							QStringList funcNameTextList = funcNameText.split(" ");
							funcNameText = funcNameTextList[funcNameTextList.count() - 1].trimmed();
						}
					}

					if (funcNameText.trimmed().contains("::"))
					{
						
						QStringList txtList = funcNameText.split("::");
						QStringList txtList1 = txtList[txtList.count() - 2].split(" ");
						className = txtList1[txtList1.count() - 1].replace("*", "");
						QString functionName = txtList[1].mid(0, txtList[1].indexOf("("));
						mFunctionList->append(FunctionItem(className, functionName, ti + 1));
						mFlag = 2;
					}
					else
					{
						QString functionName = funcNameText.mid(0, funcNameText.indexOf("(")).trimmed();
						int t = functionName.lastIndexOf("*");
						if (t < 0)
						{
							t = functionName.lastIndexOf(" ");
						}
						functionName = functionName.mid(t + 1);
						mFunctionList->append(FunctionItem((mFlag == 2 ? "" : className), functionName, ti + 1));
					}
				}
			}
		}
	}
}
void FunctionListCpp::updateUI(FunctionListView* pListView)
{
	pListView->updateCppUI();
}