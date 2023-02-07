#include <qobject.h>
#include <qstring.h>
#include <pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "exprtk.hpp"

#define NDD_EXPORTDLL

#if defined(Q_OS_WIN)
#if defined(NDD_EXPORTDLL)
#define NDD_EXPORT __declspec(dllexport)
#else
#define NDD_EXPORT __declspec(dllimport)
#endif
#endif

#ifdef __cplusplus
	extern "C" {
#endif

	NDD_EXPORT bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData);
	NDD_EXPORT int NDD_PROC_MAIN(QWidget* parent, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit);


#ifdef __cplusplus
	}
#endif

bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData)
{
	if(pProcData == NULL)
	{
		return false;
	}
	pProcData->m_strPlugName = QObject::tr("Test Plug");
	pProcData->m_strComment = QObject::tr("char to lower.");

	pProcData->m_version = QString("v1.0");
	pProcData->m_auther = QString("zuowei.yin");
	return true;
}

//插件的入口点函数
int NDD_PROC_MAIN(QWidget* parent, const QString &strFileName, std::function<QsciScintilla*()>getCurEdit)
{
	typedef exprtk::expression<double> expression_t;
	typedef exprtk::parser<double>         parser_t;
   
	QsciScintilla* pEidt = getCurEdit();

	QString text = pEidt->text();

	//做一个简单的转大写的操作
	// text = text.toLower();


	expression_t expression;
	parser_t parser;
   
   //这里“text”参数是否符合要求，有待核对
	if (parser.compile(text,expression))
	{
		double result = expression.value(); 
		// 这里应该有一个值转字符串的操作，并把字符串赋值给text对象；
	}
	
   
	pEidt->setText(text);

	return 0;
}
