#pragma once
#include <qstring.h>
#include <functionlistview.h>
#include "functionlistC.h"

class FunctionListCpp: public FunctionListC
{
public:
	FunctionListCpp();
	~FunctionListCpp();

	void parse(FunctionListView* pListView) override;
	void updateUI(FunctionListView* pListView) override;

private:
	int mFlag;
};

