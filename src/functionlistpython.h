#pragma once
#include "functionlistview.h"
class FunctionListPython :
    public FunctionListBase
{
public:
    void parse(FunctionListView* pListView) override;
    void updateUI(FunctionListView* pListView) override;
};

