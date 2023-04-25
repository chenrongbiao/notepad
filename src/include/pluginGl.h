#pragma once
#include <QString>
#include <QMenu>

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

struct ndd_proc_data
{
	QString m_strPlugName;       // [必选]插件名称
	QString m_strFilePath;       // [留空]插件的全局路径, 由主程序传递下来的路径
	QString m_strComment;        // [可选]插件说明
	QString m_version;           // [可选]版本号码
	QString m_auther;            // [可选]作者名称
	int 	m_menuType;          // [可选]菜单类型(0：不使用二级菜单 1：创建二级菜单)
	QMenu* 	m_rootMenu;          // [依赖]当 m_menuType = 1，给出二级根菜单的地址(默认为 nullptr)

	ndd_proc_data(): m_rootMenu(nullptr), m_menuType(0)
	{

	}
};


typedef struct ndd_proc_data NDD_PROC_DATA;

typedef bool (*NDD_PROC_IDENTIFY_CALLBACK)(NDD_PROC_DATA* pProcData);
typedef void (*NDD_PROC_FOUND_CALLBACK)(NDD_PROC_DATA* pProcData, void* pUserData);


/***********在编译插件时提供的内容**************/

#ifdef  NOTEPAD_PLUGIN_MANAGER

#if defined(Q_OS_WIN)
#   if defined(NDD_EXPORTDLL)
#       define NDD_EXPORT __declspec(dllexport)
#   else
#       define NDD_EXPORT __declspec(dllimport)
#   endif
#endif

#include <Qsci/qsciscintilla.h>

#ifdef __cplusplus
	extern "C" {
#endif

	NDD_EXPORT bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData);
	NDD_EXPORT int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit, NDD_PROC_DATA* pProcData);

#ifdef __cplusplus
	}
#endif

#define NOTEPAD_PLUGIN_METADATA(name, version, author, comment, filepath)\
        pProcData->m_strPlugName = QString(name);       \
        pProcData->m_version     = QString(version);    \
        pProcData->m_strComment  = QString(comment);    \
        pProcData->m_auther      = QString(author);     \
        pProcData->m_strFilePath = QString(filepath);   \

#define NOTEPAD_PLUGIN_IMPLEMENT(imp_class)                 \
    imp_class *imp = new imp_class(pNotepad, getCurEdit()); \


/** 以 _ 为起始的完整性可扩展定制宏，并计划性废除 V 系列的不可扩展的固定宏 **/

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

/*************** Interface Implementation Assistant ***************/


// 早期计划的废除系列 - 至此我们无法享受到早期计划的宏方案
#ifdef  NOTEPAD_PLUGIN_EARLY_DECLARE

// V0 原始接口 - 早期设计
#define NOTEPAD_PLUGIN_METADATA_IDENTIFY_V0(name, version, author, comment, filepath) \
    NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {                                 \
    NOTEPAD_PLUGIN_METADATA(name, version, author, comment, filepath)   \
        return true;\
    }\

#define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_V0(imp_class, imp_show_window) \
    NOTEPAD_PLUGIN_METADATA_IMPLEMENT_ {\
        NOTEPAD_PLUGIN_IMPLEMENT(imp_class);   \
        if (imp_show_window) {\
            imp->show();\
        }\
        return 0;\
    }\

// v1 在原始接口的基础上，加入了二级菜单接口 - 早期设计
#define NOTEPAD_PLUGIN_METADATA_IDENTIFY_V1(name, version, author, comment, filepath) \
    NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {                  \
    NOTEPAD_PLUGIN_METADATA(name, version, author, comment, filepath)   \
	    pProcData->m_menuType = 1;\
        return true;\
    }\

#define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_V1(imp_class, imp_show_window) \
    NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {\
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

// V2 在原始接口与二级菜单接口两者之间进行取舍 - 早期设计
#define NOTEPAD_PLUGIN_METADATA_IDENTIFY_V2(name, version, author, comment, filepath, menu) \
    static bool useSecondaryMenu = menu;                                 \
    NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {                                  \
    NOTEPAD_PLUGIN_METADATA(name, version, author, comment, filepath)    \
        if (menu) {\
            pProcData->m_menuType = 1;\
        }\
        return true;\
    }\

#define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_V2(imp_class, imp_show_window) \
    NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {\
        USE_IMPLEMENT_VARIABLES\
        imp_class *imp = new imp_class(pNotepad, s_strFileName, s_getCurEdit, s_pProcData);\
        if (useSecondaryMenu) {\
            imp->setMenuActions(s_pProcData);\
        }\
        if (imp_show_window) {\
            imp->show();\
        }\
        return 0;\
    }\


// 时刻保持最新的宏接口 - 早期设计
/************ NOTEPAD_PLUGIN_METADATA_(IDENTIFY/IMPLEMENT) *************/
// #define NOTEPAD_PLUGIN_METADATA_IDENTIFY(name, version, author, comment, filepath) \
//     NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {\
//         NOTEPAD_PLUGIN_METADATA(name, version, author, comment, filepath)\
//         return true;\
//     }\

// #define NOTEPAD_PLUGIN_METADATA_IMPLEMENT(imp_class, imp_show_window) \
//     NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {\
//         USE_IMPLEMENT_VARIABLES\
//         imp_class *imp = new imp_class(pNotepad, getCurEdit());\
//         imp->setCurrentEditFunc(s_getCurEdit);      \
//         imp->setPluginFilePath(s_strFileName);      \
//         if (imp_show_window) {\
//             imp->show();\
//         }\
//         return 0;\
//     }\

#endif  //NOTEPAD_PLUGIN_EARLY_DECLARE

#endif  //NOTEPAD_PLUGIN_MANAGER
/***********在编译插件时提供的内容**************/
