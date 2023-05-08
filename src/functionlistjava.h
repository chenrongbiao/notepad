#pragma once
#include "functionlistview.h"
class FunctionListJava :
    public FunctionListBase
{
public:
    void parse(FunctionListView* pListView) override;
    void updateUI(FunctionListView* pListView) override;
    static QString getClassNameFromText(QString txt)
    {
        QString functionName = "";
        if (txt.contains("class"))
        {
            QString text = "";
            if (txt.contains("{"))
            {
                text = txt.mid(0, txt.lastIndexOf("{")).trimmed();
            }
            QStringList textList = text.split(" ");
            functionName = textList[textList.count() - 1];
        }
        return functionName;
    }
};

