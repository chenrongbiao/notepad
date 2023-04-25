#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"



/*********************** 在 cmake-dev 以前 ***********************/

#define NDD_EXPORTDLL

#if defined(Q_OS_WIN)
	#if defined(NDD_EXPORTDLL)
		#define NDD_EXPORT __declspec(dllexport)
	#else
		#define NDD_EXPORT __declspec(dllimport)
	#endif
#else
	#define NDD_EXPORT __attribute__((visibility("default")))
#endif

#ifdef __cplusplus
	extern "C" {
#endif

	NDD_EXPORT bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData);
	NDD_EXPORT int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit, NDD_PROC_DATA* procData);


#ifdef __cplusplus
	}
#endif

static NDD_PROC_DATA s_procData;
static QWidget* s_pMainNotepad = nullptr;
std::function<QsciScintilla* ()> s_getCurEdit;

bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData)
{
	if(pProcData == NULL)
	{
		return false;
	}
	pProcData->m_strPlugName = QObject::tr("Hello World Plug");
	pProcData->m_strComment = QObject::tr("char to Upper.");

	pProcData->m_version = QString("v1.0");
	pProcData->m_auther = QString("zuowei.yin");

	pProcData->m_menuType = 0;

	return true;
}

//则点击菜单栏按钮时，会自动调用到该插件的入口点函数。
//pNotepad:就是CCNotepad的主界面指针
//strFileName:当前插件DLL的全路径，如果不关心，则可以不使用
//getCurEdit:从NDD主程序传递过来的仿函数，通过该函数获取当前编辑框操作对象QsciScintilla
//pProcData:如果pProcData->m_menuType = 0 ,则该指针为空；如果pProcData->m_menuType = 1，则该指针有值。目前需要关心s_procData.m_rootMenu
//开发者可以在该菜单下面，自行创建二级菜单
int NDD_PROC_MAIN(QWidget* pNotepad, const QString &strFileName, std::function<QsciScintilla*()>getCurEdit, NDD_PROC_DATA* pProcData)
{
	QsciScintilla* pEdit = getCurEdit();
	if (pEdit == nullptr)
	{
		return -1;
	}

	//务必拷贝一份pProcData，在外面会释放。
	if (pProcData != nullptr)
	{
		s_procData = *pProcData;
	}

	s_pMainNotepad = pNotepad;
	s_getCurEdit = getCurEdit;

	//如果pProcData->m_menuType = 1;是自己要创建二级菜单的场景。则通过s_procData.m_rootMenu 获取该插件的菜单根节点。
	//插件开发者自行在s_procData.m_rootMenu下添加新的二级菜单项目


	//做一个简单的转大写的操作
	QtTestClass* p = new QtTestClass(pNotepad,pEdit);
	//主窗口关闭时，子窗口也关闭。避免空指针操作
	p->setWindowFlag(Qt::Window);
	p->show();

	return 0;
}

/*********************** 在 cmake-dev 以来 ***********************/

bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData) {
    // NOTEPAD_PLUGIN_METADATA
        // (name, version, author, comment, filepath)
        // 使用插件宏模板来完成基本的插件内容处理
    NOTEPAD_PLUGIN_METADATA("插件名称", "0.1", "author", "说明", "");

    // 插件已成功实现
    return true;
}


int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit) {
    // NOTEPAD_PLUGIN_IMPLEMENT
       // (imp_class)
       // 使用插件宏模板来完成基本的插件内容处理
    NOTEPAD_PLUGIN_IMPLEMENT(NddPluginImplement);
    // 这个插件是一个窗口需要显示
    imp->show();

    // 让插件处在中间位置
    imp->move(pNotepad->geometry().center() - imp->rect().center());

    // 插件已成功实现
    return 0;
}

/*********************** 在 cmake-plugins-dev 以来 ***********************/

#define NOTEPAD_PLUGIN_METADATA_IDETIFY(name, version, author, comment, filepath) \
    bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData) {                  \
    NOTEPAD_PLUGIN_METADATA(name, version, author, comment, filepath)   \
        return true;\
    }\

#define NOTEPAD_PLUGIN_METADATA_IMPLEMENT(imp_class, imp_show_window) \
    int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit) {\
        NOTEPAD_PLUGIN_IMPLEMENT(imp_class);   \
        if (imp_show_window) {\
            imp->show();\
        }\
        return 0;\
    }\

// (name, version, author, comment, filepath)
NOTEPAD_PLUGIN_METADATA_IDENTIFY("插件名称", "0.1", "author", "说明", "")

// (imp_class, imp_show_window)
NOTEPAD_PLUGIN_METADATA_IMPLEMENT(NddPluginImplement, true);


/*********************** 在 可支持二级菜单显示 以来 ***********************/

// v1 支持 Menu 的接口
#define NOTEPAD_PLUGIN_METADATA_IDENTIFY_V1(name, version, author, comment, filepath) \
    bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData) {                  \
    NOTEPAD_PLUGIN_METADATA(name, version, author, comment, filepath)   \
	    pProcData->m_menuType = 1;\
        return true;\
    }\

#define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_V1(imp_class, imp_show_window) \
    static QWidget *s_pNotepad;\
    static NDD_PROC_DATA s_pProcData;\
    static std::function<QsciScintilla* ()> s_getCurEdit;\
    int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit, NDD_PROC_DATA* pProcData) {\
        if(pNotepad != nullptr) {                   \
            s_pNotepad = pNotepad;                  \
        } else return -1;                           \
                                                    \
        if(pProcData != nullptr) {                  \
            s_pProcData = *pProcData;               \
        } else return -1;                           \
                                                    \
        if(getCurEdit != nullptr) {                 \
            s_getCurEdit = getCurEdit;              \
        } else return -1;                           \
                                                    \
        NOTEPAD_PLUGIN_IMPLEMENT(imp_class);        \
        imp->setCurrentEditFunc(s_getCurEdit);      \
        imp->setMenuActions(s_pProcData.m_rootMenu);\
        if (imp_show_window) {\
            imp->show();\
        }\
        return 0;\
    }\

// (name, version, author, comment, filepath, menu)
#define NOTEPAD_PLUGIN_METADATA_IDENTIFY_V1(name, version, author, comment, filepath, menu)

// (imp_class, imp_show_window)
#define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_V1(NddPluginImplement, true)


/** 记录以 _ 为起始的完整性可扩展定制宏，并计划性废除 V 系列的不可扩展的固定宏  **/


/** 明确的逻辑宏，在不同接口之间进行抽离出具有可扩展的宏设计 
 * 1. 使用 IDENTIFY_ 与 MPLEMENT_  来实现一级菜单触发的插件，单一生命周期
 * 2. 使用 IDENTIFY_ 与 MPLEMENT_1 来实现一级菜单触发的插件，可持续使用的变量
 * 3. 使用 IDENTIFY_1 与 MPLEMENT_1 来实现二级菜单触发的插件，完整的可持续使用的变量，
 * 4. 在 MPLEMENT_1 中使用 USE_IMPLEMENT_VARIABLES 初始化可持续使用的变量
 */

// _ 版本化，基础插件实现的
#define NOTEPAD_PLUGIN_METADATA_IDENTIFY_                   \
    static bool useSecondaryMenu = false;                   \
    bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData)

// _ 版本化，基础插件实现的
#define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_                  \
    int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit, NDD_PROC_DATA* pProcData)

// _1 版本化，完整性的内容设计，支持二级菜单计划的宏
#define NOTEPAD_PLUGIN_METADATA_IDENTIFY_1                  \
    static bool useSecondaryMenu = true;                    \
    bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData)

// _1 版本化，完整性的内容设计，支持二级菜单计划的宏
#define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1                 \
    static QWidget*                         s_pNotepad;     \
    static QString                          s_strFileName;  \
    static std::function<QsciScintilla* ()> s_getCurEdit;   \
    static NDD_PROC_DATA                    s_pProcData;    \
    NOTEPAD_PLUGIN_METADATA_IMPLEMENT_

#define USE_IDENTIFY_VARIABLES                              \
    pProcData->m_menuType = useSecondaryMenu;               \

#define USE_IMPLEMENT_VARIABLES                             \
    s_pNotepad    = pNotepad;                               \
    s_strFileName = strFileName;                            \
    s_getCurEdit  = getCurEdit;                             \
    if (useSecondaryMenu) {                                 \
        if (pProcData == nullptr) {                         \
            return -1;                                      \
        }                                                   \
        s_pProcData = *pProcData;                           \
    }                                                       \


#ifdef  NOTEPAD_PLUGIN_DECLARE_PLUGIN_CONFIG
#   define NOTEPAD_PLUGIN_CONFIG <plugin-config.h>
#   include NOTEPAD_PLUGIN_CONFIG
#endif  //NOTEPAD_PLUGIN_DECLARE_PLUGIN_CONFIG


/*********************** 在未来补充 ***********************/