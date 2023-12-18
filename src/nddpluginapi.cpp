#include "nddpluginapi.h"
#include "ccnotepad.h"

NddPluginApi::NddPluginApi(QObject *parent)
	: QObject(parent)
{}

NddPluginApi::~NddPluginApi()
{}

void NddPluginApi::setMainNotePad(QWidget * pWidget)
{
	m_mainNotePad = pWidget;
}

//ע������ʵ�ʷ��ص���ScintillaEditView
QsciScintilla* NddPluginApi::getCurrentEidtHandle()
{
	CCNotePad* pNotepad = dynamic_cast<CCNotePad*>(m_mainNotePad);
	if (pNotepad != nullptr)
	{
		return pNotepad->getCurEditView();
	}
	return nullptr;
}
