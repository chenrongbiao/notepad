#pragma once
#include "functionlistview.h"

class FunctionListC :
    public FunctionListBase
{
public:
    void parse(FunctionListView* pListView) override;
    void updateUI(FunctionListView* pListView) override;

protected:
    QStringList mKeyWords = { "if", "for", "while", "switch", "case", "catch", "try"};
};

