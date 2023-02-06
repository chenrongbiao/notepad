/****************************************************************************
** Meta object code from reading C++ file 'ccnotepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "cceditor/ccnotepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccnotepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CCNotePad_t {
    QByteArrayData data[188];
    char stringdata0[3205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CCNotePad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CCNotePad_t qt_meta_stringdata_CCNotePad = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CCNotePad"
QT_MOC_LITERAL(1, 10, 19), // "signSendRegisterKey"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "key"
QT_MOC_LITERAL(4, 35, 18), // "signRegisterReplay"
QT_MOC_LITERAL(5, 54, 4), // "code"
QT_MOC_LITERAL(6, 59, 17), // "signLinkNetServer"
QT_MOC_LITERAL(7, 77, 18), // "slot_changeChinese"
QT_MOC_LITERAL(8, 96, 18), // "slot_changeEnglish"
QT_MOC_LITERAL(9, 115, 25), // "slot_actionNewFile_toggle"
QT_MOC_LITERAL(10, 141, 7), // "checked"
QT_MOC_LITERAL(11, 149, 26), // "slot_actionOpenFile_toggle"
QT_MOC_LITERAL(12, 176, 26), // "slot_actionSaveFile_toggle"
QT_MOC_LITERAL(13, 203, 28), // "slot_actionSaveAsFile_toggle"
QT_MOC_LITERAL(14, 232, 28), // "slot_actionRenameFile_toggle"
QT_MOC_LITERAL(15, 261, 16), // "slot_actionClose"
QT_MOC_LITERAL(16, 278, 25), // "slot_actionCloseNonCurDoc"
QT_MOC_LITERAL(17, 304, 23), // "slot_actionCloseLeftAll"
QT_MOC_LITERAL(18, 328, 24), // "slot_actionCloseRightAll"
QT_MOC_LITERAL(19, 353, 9), // "slot_quit"
QT_MOC_LITERAL(20, 363, 17), // "slot_closeAllFile"
QT_MOC_LITERAL(21, 381, 18), // "slot_batch_convert"
QT_MOC_LITERAL(22, 400, 17), // "slot_batch_rename"
QT_MOC_LITERAL(23, 418, 12), // "slot_options"
QT_MOC_LITERAL(24, 431, 11), // "slot_donate"
QT_MOC_LITERAL(25, 443, 16), // "slot_registerCmd"
QT_MOC_LITERAL(26, 460, 3), // "cmd"
QT_MOC_LITERAL(27, 464, 20), // "slot_viewStyleChange"
QT_MOC_LITERAL(28, 485, 3), // "tag"
QT_MOC_LITERAL(29, 489, 7), // "styleId"
QT_MOC_LITERAL(30, 497, 7), // "QColor&"
QT_MOC_LITERAL(31, 505, 7), // "fgColor"
QT_MOC_LITERAL(32, 513, 7), // "bkColor"
QT_MOC_LITERAL(33, 521, 6), // "QFont&"
QT_MOC_LITERAL(34, 528, 4), // "font"
QT_MOC_LITERAL(35, 533, 10), // "fontChange"
QT_MOC_LITERAL(36, 544, 20), // "slot_viewLexerChange"
QT_MOC_LITERAL(37, 565, 14), // "slot_findInDir"
QT_MOC_LITERAL(38, 580, 23), // "slot_showFileInExplorer"
QT_MOC_LITERAL(39, 604, 18), // "slot_wordHighlight"
QT_MOC_LITERAL(40, 623, 23), // "slot_clearWordHighlight"
QT_MOC_LITERAL(41, 647, 14), // "slot_clearMark"
QT_MOC_LITERAL(42, 662, 20), // "slot_zoomValueChange"
QT_MOC_LITERAL(43, 683, 25), // "slot_editViewMofidyChange"
QT_MOC_LITERAL(44, 709, 13), // "slot_tabClose"
QT_MOC_LITERAL(45, 723, 5), // "index"
QT_MOC_LITERAL(46, 729, 23), // "slot_LineNumIndexChange"
QT_MOC_LITERAL(47, 753, 4), // "line"
QT_MOC_LITERAL(48, 758, 16), // "slot_saveAllFile"
QT_MOC_LITERAL(49, 775, 17), // "slot_autoSaveFile"
QT_MOC_LITERAL(50, 793, 18), // "slot_timerAutoSave"
QT_MOC_LITERAL(51, 812, 22), // "slot_tabCurrentChanged"
QT_MOC_LITERAL(52, 835, 18), // "slot_copyAvailable"
QT_MOC_LITERAL(53, 854, 6), // "select"
QT_MOC_LITERAL(54, 861, 8), // "slot_cut"
QT_MOC_LITERAL(55, 870, 9), // "slot_copy"
QT_MOC_LITERAL(56, 880, 10), // "slot_paste"
QT_MOC_LITERAL(57, 891, 14), // "slot_selectAll"
QT_MOC_LITERAL(58, 906, 9), // "slot_undo"
QT_MOC_LITERAL(59, 916, 9), // "slot_redo"
QT_MOC_LITERAL(60, 926, 11), // "slot_zoomin"
QT_MOC_LITERAL(61, 938, 12), // "slot_zoomout"
QT_MOC_LITERAL(62, 951, 13), // "slot_wordwrap"
QT_MOC_LITERAL(63, 965, 13), // "slot_allWhite"
QT_MOC_LITERAL(64, 979, 16), // "slot_indentGuide"
QT_MOC_LITERAL(65, 996, 9), // "slot_find"
QT_MOC_LITERAL(66, 1006, 12), // "slot_replace"
QT_MOC_LITERAL(67, 1019, 18), // "slot_markHighlight"
QT_MOC_LITERAL(68, 1038, 26), // "slot_findResultPosChangeed"
QT_MOC_LITERAL(69, 1065, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(70, 1084, 4), // "area"
QT_MOC_LITERAL(71, 1089, 30), // "slot_findResultItemDoubleClick"
QT_MOC_LITERAL(72, 1120, 11), // "QModelIndex"
QT_MOC_LITERAL(73, 1132, 30), // "slot_showFindAllInCurDocResult"
QT_MOC_LITERAL(74, 1163, 12), // "FindRecords*"
QT_MOC_LITERAL(75, 1176, 6), // "record"
QT_MOC_LITERAL(76, 1183, 31), // "slot_showfindAllInOpenDocResult"
QT_MOC_LITERAL(77, 1215, 22), // "QVector<FindRecords*>*"
QT_MOC_LITERAL(78, 1238, 4), // "hits"
QT_MOC_LITERAL(79, 1243, 8), // "whatFind"
QT_MOC_LITERAL(80, 1252, 20), // "slot_clearFindResult"
QT_MOC_LITERAL(81, 1273, 22), // "slot_convertWinLineEnd"
QT_MOC_LITERAL(82, 1296, 23), // "slot_convertUnixLineEnd"
QT_MOC_LITERAL(83, 1320, 22), // "slot_convertMacLineEnd"
QT_MOC_LITERAL(84, 1343, 19), // "slot_openReceneFile"
QT_MOC_LITERAL(85, 1363, 13), // "slot_gotoline"
QT_MOC_LITERAL(86, 1377, 16), // "slot_show_spaces"
QT_MOC_LITERAL(87, 1394, 5), // "check"
QT_MOC_LITERAL(88, 1400, 18), // "slot_show_line_end"
QT_MOC_LITERAL(89, 1419, 18), // "slot_load_with_gbk"
QT_MOC_LITERAL(90, 1438, 19), // "slot_load_with_utf8"
QT_MOC_LITERAL(91, 1458, 23), // "slot_load_with_utf8_bom"
QT_MOC_LITERAL(92, 1482, 23), // "slot_load_with_utf16_be"
QT_MOC_LITERAL(93, 1506, 23), // "slot_load_with_utf16_le"
QT_MOC_LITERAL(94, 1530, 19), // "slot_load_with_big5"
QT_MOC_LITERAL(95, 1550, 15), // "slot_encode_gbk"
QT_MOC_LITERAL(96, 1566, 16), // "slot_encode_utf8"
QT_MOC_LITERAL(97, 1583, 20), // "slot_encode_utf8_bom"
QT_MOC_LITERAL(98, 1604, 20), // "slot_encode_utf16_be"
QT_MOC_LITERAL(99, 1625, 20), // "slot_encode_utf16_le"
QT_MOC_LITERAL(100, 1646, 16), // "slot_encode_big5"
QT_MOC_LITERAL(101, 1663, 17), // "slot_lexerActTrig"
QT_MOC_LITERAL(102, 1681, 8), // "QAction*"
QT_MOC_LITERAL(103, 1690, 6), // "action"
QT_MOC_LITERAL(104, 1697, 16), // "slot_compareFile"
QT_MOC_LITERAL(105, 1714, 15), // "slot_compareDir"
QT_MOC_LITERAL(106, 1730, 15), // "slot_binCompare"
QT_MOC_LITERAL(107, 1746, 18), // "slot_tabBarClicked"
QT_MOC_LITERAL(108, 1765, 19), // "slot_reOpenTextMode"
QT_MOC_LITERAL(109, 1785, 18), // "slot_reOpenHexMode"
QT_MOC_LITERAL(110, 1804, 19), // "slot_selectLeftFile"
QT_MOC_LITERAL(111, 1824, 20), // "slot_selectRightFile"
QT_MOC_LITERAL(112, 1845, 21), // "slot_openFileInNewWin"
QT_MOC_LITERAL(113, 1867, 10), // "slot_about"
QT_MOC_LITERAL(114, 1878, 13), // "slot_aboutNdd"
QT_MOC_LITERAL(115, 1892, 15), // "slot_fileChange"
QT_MOC_LITERAL(116, 1908, 8), // "filePath"
QT_MOC_LITERAL(117, 1917, 24), // "slot_tabBarDoubleClicked"
QT_MOC_LITERAL(118, 1942, 13), // "slot_register"
QT_MOC_LITERAL(119, 1956, 20), // "slot_slectionChanged"
QT_MOC_LITERAL(120, 1977, 15), // "slot_preHexPage"
QT_MOC_LITERAL(121, 1993, 16), // "slot_nextHexPage"
QT_MOC_LITERAL(122, 2010, 16), // "slot_gotoHexPage"
QT_MOC_LITERAL(123, 2027, 16), // "slot_hexGotoFile"
QT_MOC_LITERAL(124, 2044, 4), // "addr"
QT_MOC_LITERAL(125, 2049, 20), // "slot_tabFormatChange"
QT_MOC_LITERAL(126, 2070, 12), // "tabLenChange"
QT_MOC_LITERAL(127, 2083, 12), // "useTabChange"
QT_MOC_LITERAL(128, 2096, 21), // "slot_searchResultShow"
QT_MOC_LITERAL(129, 2118, 13), // "slot_saveFile"
QT_MOC_LITERAL(130, 2132, 8), // "fileName"
QT_MOC_LITERAL(131, 2141, 18), // "ScintillaEditView*"
QT_MOC_LITERAL(132, 2160, 5), // "pEdit"
QT_MOC_LITERAL(133, 2166, 19), // "slot_changeIconSize"
QT_MOC_LITERAL(134, 2186, 15), // "slot_langFormat"
QT_MOC_LITERAL(135, 2202, 20), // "slot_removeHeadBlank"
QT_MOC_LITERAL(136, 2223, 19), // "slot_removeEndBlank"
QT_MOC_LITERAL(137, 2243, 23), // "slot_removeHeadEndBlank"
QT_MOC_LITERAL(138, 2267, 20), // "slot_columnBlockEdit"
QT_MOC_LITERAL(139, 2288, 16), // "slot_defineLangs"
QT_MOC_LITERAL(140, 2305, 14), // "slot_uppercase"
QT_MOC_LITERAL(141, 2320, 14), // "slot_lowercase"
QT_MOC_LITERAL(142, 2335, 15), // "slot_properCase"
QT_MOC_LITERAL(143, 2351, 20), // "slot_properCaseBlend"
QT_MOC_LITERAL(144, 2372, 17), // "slot_sentenceCase"
QT_MOC_LITERAL(145, 2390, 22), // "slot_sentenceCaseBlend"
QT_MOC_LITERAL(146, 2413, 15), // "slot_invertCase"
QT_MOC_LITERAL(147, 2429, 15), // "slot_randomCase"
QT_MOC_LITERAL(148, 2445, 23), // "slot_removeEmptyLineCbc"
QT_MOC_LITERAL(149, 2469, 20), // "slot_removeEmptyLine"
QT_MOC_LITERAL(150, 2490, 16), // "slot_column_mode"
QT_MOC_LITERAL(151, 2507, 15), // "slot_tabToSpace"
QT_MOC_LITERAL(152, 2523, 18), // "slot_spaceToTabAll"
QT_MOC_LITERAL(153, 2542, 22), // "slot_spaceToTabLeading"
QT_MOC_LITERAL(154, 2565, 15), // "slot_dupCurLine"
QT_MOC_LITERAL(155, 2581, 18), // "slot_removeDupLine"
QT_MOC_LITERAL(156, 2600, 15), // "slot_splitLines"
QT_MOC_LITERAL(157, 2616, 14), // "slot_joinLines"
QT_MOC_LITERAL(158, 2631, 18), // "slot_moveUpCurLine"
QT_MOC_LITERAL(159, 2650, 20), // "slot_moveDownCurLine"
QT_MOC_LITERAL(160, 2671, 22), // "slot_insertBlankAbvCur"
QT_MOC_LITERAL(161, 2694, 22), // "slot_insertBlankBelCur"
QT_MOC_LITERAL(162, 2717, 21), // "slot_reverseLineOrder"
QT_MOC_LITERAL(163, 2739, 15), // "slot_sortLexAsc"
QT_MOC_LITERAL(164, 2755, 22), // "slot_sortLexAscIgnCase"
QT_MOC_LITERAL(165, 2778, 16), // "slot_sortLexDesc"
QT_MOC_LITERAL(166, 2795, 23), // "slot_sortLexDescIngCase"
QT_MOC_LITERAL(167, 2819, 13), // "slot_findNext"
QT_MOC_LITERAL(168, 2833, 13), // "slot_findPrev"
QT_MOC_LITERAL(169, 2847, 12), // "slot_escQuit"
QT_MOC_LITERAL(170, 2860, 14), // "slot_formatXml"
QT_MOC_LITERAL(171, 2875, 15), // "slot_formatJson"
QT_MOC_LITERAL(172, 2891, 25), // "slot_clearHistoryOpenList"
QT_MOC_LITERAL(173, 2917, 19), // "slot_bookMarkAction"
QT_MOC_LITERAL(174, 2937, 21), // "slot_loadBookMarkMenu"
QT_MOC_LITERAL(175, 2959, 19), // "slot_markColorGroup"
QT_MOC_LITERAL(176, 2979, 18), // "slot_loadMarkColor"
QT_MOC_LITERAL(177, 2998, 22), // "slot_saveSearchHistory"
QT_MOC_LITERAL(178, 3021, 17), // "slot_fileListView"
QT_MOC_LITERAL(179, 3039, 28), // "slot_fileListItemDoubleClick"
QT_MOC_LITERAL(180, 3068, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(181, 3085, 4), // "item"
QT_MOC_LITERAL(182, 3090, 16), // "slot_showToolBar"
QT_MOC_LITERAL(183, 3107, 24), // "slot_dynamicLoadToolMenu"
QT_MOC_LITERAL(184, 3132, 14), // "slot_batchFind"
QT_MOC_LITERAL(185, 3147, 16), // "slot_showWebAddr"
QT_MOC_LITERAL(186, 3164, 19), // "slot_langFileSuffix"
QT_MOC_LITERAL(187, 3184, 20) // "slot_shortcutManager"

    },
    "CCNotePad\0signSendRegisterKey\0\0key\0"
    "signRegisterReplay\0code\0signLinkNetServer\0"
    "slot_changeChinese\0slot_changeEnglish\0"
    "slot_actionNewFile_toggle\0checked\0"
    "slot_actionOpenFile_toggle\0"
    "slot_actionSaveFile_toggle\0"
    "slot_actionSaveAsFile_toggle\0"
    "slot_actionRenameFile_toggle\0"
    "slot_actionClose\0slot_actionCloseNonCurDoc\0"
    "slot_actionCloseLeftAll\0"
    "slot_actionCloseRightAll\0slot_quit\0"
    "slot_closeAllFile\0slot_batch_convert\0"
    "slot_batch_rename\0slot_options\0"
    "slot_donate\0slot_registerCmd\0cmd\0"
    "slot_viewStyleChange\0tag\0styleId\0"
    "QColor&\0fgColor\0bkColor\0QFont&\0font\0"
    "fontChange\0slot_viewLexerChange\0"
    "slot_findInDir\0slot_showFileInExplorer\0"
    "slot_wordHighlight\0slot_clearWordHighlight\0"
    "slot_clearMark\0slot_zoomValueChange\0"
    "slot_editViewMofidyChange\0slot_tabClose\0"
    "index\0slot_LineNumIndexChange\0line\0"
    "slot_saveAllFile\0slot_autoSaveFile\0"
    "slot_timerAutoSave\0slot_tabCurrentChanged\0"
    "slot_copyAvailable\0select\0slot_cut\0"
    "slot_copy\0slot_paste\0slot_selectAll\0"
    "slot_undo\0slot_redo\0slot_zoomin\0"
    "slot_zoomout\0slot_wordwrap\0slot_allWhite\0"
    "slot_indentGuide\0slot_find\0slot_replace\0"
    "slot_markHighlight\0slot_findResultPosChangeed\0"
    "Qt::DockWidgetArea\0area\0"
    "slot_findResultItemDoubleClick\0"
    "QModelIndex\0slot_showFindAllInCurDocResult\0"
    "FindRecords*\0record\0slot_showfindAllInOpenDocResult\0"
    "QVector<FindRecords*>*\0hits\0whatFind\0"
    "slot_clearFindResult\0slot_convertWinLineEnd\0"
    "slot_convertUnixLineEnd\0slot_convertMacLineEnd\0"
    "slot_openReceneFile\0slot_gotoline\0"
    "slot_show_spaces\0check\0slot_show_line_end\0"
    "slot_load_with_gbk\0slot_load_with_utf8\0"
    "slot_load_with_utf8_bom\0slot_load_with_utf16_be\0"
    "slot_load_with_utf16_le\0slot_load_with_big5\0"
    "slot_encode_gbk\0slot_encode_utf8\0"
    "slot_encode_utf8_bom\0slot_encode_utf16_be\0"
    "slot_encode_utf16_le\0slot_encode_big5\0"
    "slot_lexerActTrig\0QAction*\0action\0"
    "slot_compareFile\0slot_compareDir\0"
    "slot_binCompare\0slot_tabBarClicked\0"
    "slot_reOpenTextMode\0slot_reOpenHexMode\0"
    "slot_selectLeftFile\0slot_selectRightFile\0"
    "slot_openFileInNewWin\0slot_about\0"
    "slot_aboutNdd\0slot_fileChange\0filePath\0"
    "slot_tabBarDoubleClicked\0slot_register\0"
    "slot_slectionChanged\0slot_preHexPage\0"
    "slot_nextHexPage\0slot_gotoHexPage\0"
    "slot_hexGotoFile\0addr\0slot_tabFormatChange\0"
    "tabLenChange\0useTabChange\0"
    "slot_searchResultShow\0slot_saveFile\0"
    "fileName\0ScintillaEditView*\0pEdit\0"
    "slot_changeIconSize\0slot_langFormat\0"
    "slot_removeHeadBlank\0slot_removeEndBlank\0"
    "slot_removeHeadEndBlank\0slot_columnBlockEdit\0"
    "slot_defineLangs\0slot_uppercase\0"
    "slot_lowercase\0slot_properCase\0"
    "slot_properCaseBlend\0slot_sentenceCase\0"
    "slot_sentenceCaseBlend\0slot_invertCase\0"
    "slot_randomCase\0slot_removeEmptyLineCbc\0"
    "slot_removeEmptyLine\0slot_column_mode\0"
    "slot_tabToSpace\0slot_spaceToTabAll\0"
    "slot_spaceToTabLeading\0slot_dupCurLine\0"
    "slot_removeDupLine\0slot_splitLines\0"
    "slot_joinLines\0slot_moveUpCurLine\0"
    "slot_moveDownCurLine\0slot_insertBlankAbvCur\0"
    "slot_insertBlankBelCur\0slot_reverseLineOrder\0"
    "slot_sortLexAsc\0slot_sortLexAscIgnCase\0"
    "slot_sortLexDesc\0slot_sortLexDescIngCase\0"
    "slot_findNext\0slot_findPrev\0slot_escQuit\0"
    "slot_formatXml\0slot_formatJson\0"
    "slot_clearHistoryOpenList\0slot_bookMarkAction\0"
    "slot_loadBookMarkMenu\0slot_markColorGroup\0"
    "slot_loadMarkColor\0slot_saveSearchHistory\0"
    "slot_fileListView\0slot_fileListItemDoubleClick\0"
    "QListWidgetItem*\0item\0slot_showToolBar\0"
    "slot_dynamicLoadToolMenu\0slot_batchFind\0"
    "slot_showWebAddr\0slot_langFileSuffix\0"
    "slot_shortcutManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CCNotePad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     151,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  769,    2, 0x06 /* Public */,
       4,    1,  772,    2, 0x06 /* Public */,
       6,    0,  775,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  776,    2, 0x0a /* Public */,
       8,    0,  777,    2, 0x0a /* Public */,
       9,    1,  778,    2, 0x0a /* Public */,
      11,    1,  781,    2, 0x0a /* Public */,
      12,    1,  784,    2, 0x0a /* Public */,
      13,    1,  787,    2, 0x0a /* Public */,
      14,    1,  790,    2, 0x0a /* Public */,
      15,    1,  793,    2, 0x0a /* Public */,
      16,    0,  796,    2, 0x0a /* Public */,
      17,    0,  797,    2, 0x0a /* Public */,
      18,    0,  798,    2, 0x0a /* Public */,
      19,    1,  799,    2, 0x0a /* Public */,
      20,    1,  802,    2, 0x0a /* Public */,
      21,    0,  805,    2, 0x0a /* Public */,
      22,    0,  806,    2, 0x0a /* Public */,
      23,    0,  807,    2, 0x0a /* Public */,
      24,    0,  808,    2, 0x0a /* Public */,
      25,    2,  809,    2, 0x0a /* Public */,
      27,    6,  814,    2, 0x0a /* Public */,
      36,    1,  827,    2, 0x0a /* Public */,
      37,    0,  830,    2, 0x0a /* Public */,
      38,    0,  831,    2, 0x0a /* Public */,
      39,    0,  832,    2, 0x0a /* Public */,
      40,    0,  833,    2, 0x0a /* Public */,
      41,    0,  834,    2, 0x0a /* Public */,
      42,    0,  835,    2, 0x0a /* Public */,
      43,    0,  836,    2, 0x08 /* Private */,
      44,    1,  837,    2, 0x08 /* Private */,
      46,    2,  840,    2, 0x08 /* Private */,
      48,    0,  845,    2, 0x08 /* Private */,
      49,    1,  846,    2, 0x08 /* Private */,
      50,    0,  849,    2, 0x08 /* Private */,
      51,    1,  850,    2, 0x08 /* Private */,
      52,    1,  853,    2, 0x08 /* Private */,
      54,    0,  856,    2, 0x08 /* Private */,
      55,    0,  857,    2, 0x08 /* Private */,
      56,    0,  858,    2, 0x08 /* Private */,
      57,    0,  859,    2, 0x08 /* Private */,
      58,    0,  860,    2, 0x08 /* Private */,
      59,    0,  861,    2, 0x08 /* Private */,
      60,    0,  862,    2, 0x08 /* Private */,
      61,    0,  863,    2, 0x08 /* Private */,
      62,    1,  864,    2, 0x08 /* Private */,
      63,    1,  867,    2, 0x08 /* Private */,
      64,    1,  870,    2, 0x08 /* Private */,
      65,    0,  873,    2, 0x08 /* Private */,
      66,    0,  874,    2, 0x08 /* Private */,
      67,    0,  875,    2, 0x08 /* Private */,
      68,    1,  876,    2, 0x08 /* Private */,
      71,    1,  879,    2, 0x08 /* Private */,
      73,    1,  882,    2, 0x08 /* Private */,
      76,    3,  885,    2, 0x08 /* Private */,
      80,    0,  892,    2, 0x08 /* Private */,
      81,    1,  893,    2, 0x08 /* Private */,
      82,    1,  896,    2, 0x08 /* Private */,
      83,    1,  899,    2, 0x08 /* Private */,
      84,    0,  902,    2, 0x08 /* Private */,
      85,    0,  903,    2, 0x08 /* Private */,
      86,    1,  904,    2, 0x08 /* Private */,
      88,    1,  907,    2, 0x08 /* Private */,
      89,    0,  910,    2, 0x08 /* Private */,
      90,    0,  911,    2, 0x08 /* Private */,
      91,    0,  912,    2, 0x08 /* Private */,
      92,    0,  913,    2, 0x08 /* Private */,
      93,    0,  914,    2, 0x08 /* Private */,
      94,    0,  915,    2, 0x08 /* Private */,
      95,    0,  916,    2, 0x08 /* Private */,
      96,    0,  917,    2, 0x08 /* Private */,
      97,    0,  918,    2, 0x08 /* Private */,
      98,    0,  919,    2, 0x08 /* Private */,
      99,    0,  920,    2, 0x08 /* Private */,
     100,    0,  921,    2, 0x08 /* Private */,
     101,    1,  922,    2, 0x08 /* Private */,
     104,    0,  925,    2, 0x08 /* Private */,
     105,    0,  926,    2, 0x08 /* Private */,
     106,    0,  927,    2, 0x08 /* Private */,
     107,    1,  928,    2, 0x08 /* Private */,
     108,    0,  931,    2, 0x08 /* Private */,
     109,    0,  932,    2, 0x08 /* Private */,
     110,    0,  933,    2, 0x08 /* Private */,
     111,    0,  934,    2, 0x08 /* Private */,
     112,    0,  935,    2, 0x08 /* Private */,
     113,    0,  936,    2, 0x08 /* Private */,
     114,    0,  937,    2, 0x08 /* Private */,
     115,    1,  938,    2, 0x08 /* Private */,
     117,    1,  941,    2, 0x08 /* Private */,
     118,    0,  944,    2, 0x08 /* Private */,
     119,    0,  945,    2, 0x08 /* Private */,
     120,    0,  946,    2, 0x08 /* Private */,
     121,    0,  947,    2, 0x08 /* Private */,
     122,    0,  948,    2, 0x08 /* Private */,
     123,    1,  949,    2, 0x08 /* Private */,
     125,    2,  952,    2, 0x08 /* Private */,
     128,    0,  957,    2, 0x08 /* Private */,
     129,    2,  958,    2, 0x08 /* Private */,
     133,    1,  963,    2, 0x08 /* Private */,
     134,    0,  966,    2, 0x08 /* Private */,
     135,    0,  967,    2, 0x08 /* Private */,
     136,    0,  968,    2, 0x08 /* Private */,
     137,    0,  969,    2, 0x08 /* Private */,
     138,    0,  970,    2, 0x08 /* Private */,
     139,    0,  971,    2, 0x08 /* Private */,
     140,    0,  972,    2, 0x08 /* Private */,
     141,    0,  973,    2, 0x08 /* Private */,
     142,    0,  974,    2, 0x08 /* Private */,
     143,    0,  975,    2, 0x08 /* Private */,
     144,    0,  976,    2, 0x08 /* Private */,
     145,    0,  977,    2, 0x08 /* Private */,
     146,    0,  978,    2, 0x08 /* Private */,
     147,    0,  979,    2, 0x08 /* Private */,
     148,    0,  980,    2, 0x08 /* Private */,
     149,    0,  981,    2, 0x08 /* Private */,
     150,    0,  982,    2, 0x08 /* Private */,
     151,    0,  983,    2, 0x08 /* Private */,
     152,    0,  984,    2, 0x08 /* Private */,
     153,    0,  985,    2, 0x08 /* Private */,
     154,    0,  986,    2, 0x08 /* Private */,
     155,    0,  987,    2, 0x08 /* Private */,
     156,    0,  988,    2, 0x08 /* Private */,
     157,    0,  989,    2, 0x08 /* Private */,
     158,    0,  990,    2, 0x08 /* Private */,
     159,    0,  991,    2, 0x08 /* Private */,
     160,    0,  992,    2, 0x08 /* Private */,
     161,    0,  993,    2, 0x08 /* Private */,
     162,    0,  994,    2, 0x08 /* Private */,
     163,    0,  995,    2, 0x08 /* Private */,
     164,    0,  996,    2, 0x08 /* Private */,
     165,    0,  997,    2, 0x08 /* Private */,
     166,    0,  998,    2, 0x08 /* Private */,
     167,    0,  999,    2, 0x08 /* Private */,
     168,    0, 1000,    2, 0x08 /* Private */,
     169,    0, 1001,    2, 0x08 /* Private */,
     170,    0, 1002,    2, 0x08 /* Private */,
     171,    0, 1003,    2, 0x08 /* Private */,
     172,    0, 1004,    2, 0x08 /* Private */,
     173,    0, 1005,    2, 0x08 /* Private */,
     174,    0, 1006,    2, 0x08 /* Private */,
     175,    1, 1007,    2, 0x08 /* Private */,
     176,    0, 1010,    2, 0x08 /* Private */,
     177,    0, 1011,    2, 0x08 /* Private */,
     178,    1, 1012,    2, 0x08 /* Private */,
     179,    1, 1015,    2, 0x08 /* Private */,
     182,    1, 1018,    2, 0x08 /* Private */,
     183,    0, 1021,    2, 0x08 /* Private */,
     184,    0, 1022,    2, 0x08 /* Private */,
     185,    1, 1023,    2, 0x08 /* Private */,
     186,    0, 1026,    2, 0x08 /* Private */,
     187,    0, 1027,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 30, 0x80000000 | 30, 0x80000000 | 33, QMetaType::Bool,   28,   29,   31,   32,   34,   35,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   47,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 72,   45,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void, 0x80000000 | 77, QMetaType::Int, QMetaType::QString,   75,   78,   79,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 102,  103,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  116,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,  124,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,  126,  127,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 131,  130,  132,
    QMetaType::Void, 0x80000000 | 102,  103,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 102,  103,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, 0x80000000 | 180,  181,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CCNotePad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CCNotePad *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signSendRegisterKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signRegisterReplay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signLinkNetServer(); break;
        case 3: _t->slot_changeChinese(); break;
        case 4: _t->slot_changeEnglish(); break;
        case 5: _t->slot_actionNewFile_toggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slot_actionOpenFile_toggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slot_actionSaveFile_toggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slot_actionSaveAsFile_toggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slot_actionRenameFile_toggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->slot_actionClose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->slot_actionCloseNonCurDoc(); break;
        case 12: _t->slot_actionCloseLeftAll(); break;
        case 13: _t->slot_actionCloseRightAll(); break;
        case 14: _t->slot_quit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slot_closeAllFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->slot_batch_convert(); break;
        case 17: _t->slot_batch_rename(); break;
        case 18: _t->slot_options(); break;
        case 19: _t->slot_donate(); break;
        case 20: _t->slot_registerCmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->slot_viewStyleChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< QColor(*)>(_a[4])),(*reinterpret_cast< QFont(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 22: _t->slot_viewLexerChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->slot_findInDir(); break;
        case 24: _t->slot_showFileInExplorer(); break;
        case 25: _t->slot_wordHighlight(); break;
        case 26: _t->slot_clearWordHighlight(); break;
        case 27: _t->slot_clearMark(); break;
        case 28: _t->slot_zoomValueChange(); break;
        case 29: _t->slot_editViewMofidyChange(); break;
        case 30: _t->slot_tabClose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->slot_LineNumIndexChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->slot_saveAllFile(); break;
        case 33: _t->slot_autoSaveFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->slot_timerAutoSave(); break;
        case 35: _t->slot_tabCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->slot_copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->slot_cut(); break;
        case 38: _t->slot_copy(); break;
        case 39: _t->slot_paste(); break;
        case 40: _t->slot_selectAll(); break;
        case 41: _t->slot_undo(); break;
        case 42: _t->slot_redo(); break;
        case 43: _t->slot_zoomin(); break;
        case 44: _t->slot_zoomout(); break;
        case 45: _t->slot_wordwrap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->slot_allWhite((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->slot_indentGuide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->slot_find(); break;
        case 49: _t->slot_replace(); break;
        case 50: _t->slot_markHighlight(); break;
        case 51: _t->slot_findResultPosChangeed((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 52: _t->slot_findResultItemDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 53: _t->slot_showFindAllInCurDocResult((*reinterpret_cast< FindRecords*(*)>(_a[1]))); break;
        case 54: _t->slot_showfindAllInOpenDocResult((*reinterpret_cast< QVector<FindRecords*>*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 55: _t->slot_clearFindResult(); break;
        case 56: _t->slot_convertWinLineEnd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->slot_convertUnixLineEnd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->slot_convertMacLineEnd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->slot_openReceneFile(); break;
        case 60: _t->slot_gotoline(); break;
        case 61: _t->slot_show_spaces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->slot_show_line_end((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->slot_load_with_gbk(); break;
        case 64: _t->slot_load_with_utf8(); break;
        case 65: _t->slot_load_with_utf8_bom(); break;
        case 66: _t->slot_load_with_utf16_be(); break;
        case 67: _t->slot_load_with_utf16_le(); break;
        case 68: _t->slot_load_with_big5(); break;
        case 69: _t->slot_encode_gbk(); break;
        case 70: _t->slot_encode_utf8(); break;
        case 71: _t->slot_encode_utf8_bom(); break;
        case 72: _t->slot_encode_utf16_be(); break;
        case 73: _t->slot_encode_utf16_le(); break;
        case 74: _t->slot_encode_big5(); break;
        case 75: _t->slot_lexerActTrig((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 76: _t->slot_compareFile(); break;
        case 77: _t->slot_compareDir(); break;
        case 78: _t->slot_binCompare(); break;
        case 79: _t->slot_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 80: _t->slot_reOpenTextMode(); break;
        case 81: _t->slot_reOpenHexMode(); break;
        case 82: _t->slot_selectLeftFile(); break;
        case 83: _t->slot_selectRightFile(); break;
        case 84: _t->slot_openFileInNewWin(); break;
        case 85: _t->slot_about(); break;
        case 86: _t->slot_aboutNdd(); break;
        case 87: _t->slot_fileChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 88: _t->slot_tabBarDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->slot_register(); break;
        case 90: _t->slot_slectionChanged(); break;
        case 91: _t->slot_preHexPage(); break;
        case 92: _t->slot_nextHexPage(); break;
        case 93: _t->slot_gotoHexPage(); break;
        case 94: _t->slot_hexGotoFile((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 95: _t->slot_tabFormatChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 96: _t->slot_searchResultShow(); break;
        case 97: _t->slot_saveFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ScintillaEditView*(*)>(_a[2]))); break;
        case 98: _t->slot_changeIconSize((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 99: _t->slot_langFormat(); break;
        case 100: _t->slot_removeHeadBlank(); break;
        case 101: _t->slot_removeEndBlank(); break;
        case 102: _t->slot_removeHeadEndBlank(); break;
        case 103: _t->slot_columnBlockEdit(); break;
        case 104: _t->slot_defineLangs(); break;
        case 105: _t->slot_uppercase(); break;
        case 106: _t->slot_lowercase(); break;
        case 107: _t->slot_properCase(); break;
        case 108: _t->slot_properCaseBlend(); break;
        case 109: _t->slot_sentenceCase(); break;
        case 110: _t->slot_sentenceCaseBlend(); break;
        case 111: _t->slot_invertCase(); break;
        case 112: _t->slot_randomCase(); break;
        case 113: _t->slot_removeEmptyLineCbc(); break;
        case 114: _t->slot_removeEmptyLine(); break;
        case 115: _t->slot_column_mode(); break;
        case 116: _t->slot_tabToSpace(); break;
        case 117: _t->slot_spaceToTabAll(); break;
        case 118: _t->slot_spaceToTabLeading(); break;
        case 119: _t->slot_dupCurLine(); break;
        case 120: _t->slot_removeDupLine(); break;
        case 121: _t->slot_splitLines(); break;
        case 122: _t->slot_joinLines(); break;
        case 123: _t->slot_moveUpCurLine(); break;
        case 124: _t->slot_moveDownCurLine(); break;
        case 125: _t->slot_insertBlankAbvCur(); break;
        case 126: _t->slot_insertBlankBelCur(); break;
        case 127: _t->slot_reverseLineOrder(); break;
        case 128: _t->slot_sortLexAsc(); break;
        case 129: _t->slot_sortLexAscIgnCase(); break;
        case 130: _t->slot_sortLexDesc(); break;
        case 131: _t->slot_sortLexDescIngCase(); break;
        case 132: _t->slot_findNext(); break;
        case 133: _t->slot_findPrev(); break;
        case 134: _t->slot_escQuit(); break;
        case 135: _t->slot_formatXml(); break;
        case 136: _t->slot_formatJson(); break;
        case 137: _t->slot_clearHistoryOpenList(); break;
        case 138: _t->slot_bookMarkAction(); break;
        case 139: _t->slot_loadBookMarkMenu(); break;
        case 140: _t->slot_markColorGroup((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 141: _t->slot_loadMarkColor(); break;
        case 142: _t->slot_saveSearchHistory(); break;
        case 143: _t->slot_fileListView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 144: _t->slot_fileListItemDoubleClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 145: _t->slot_showToolBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 146: _t->slot_dynamicLoadToolMenu(); break;
        case 147: _t->slot_batchFind(); break;
        case 148: _t->slot_showWebAddr((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 149: _t->slot_langFileSuffix(); break;
        case 150: _t->slot_shortcutManager(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 97:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ScintillaEditView* >(); break;
            }
            break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 140:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CCNotePad::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CCNotePad::signSendRegisterKey)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CCNotePad::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CCNotePad::signRegisterReplay)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CCNotePad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CCNotePad::signLinkNetServer)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CCNotePad::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CCNotePad.data,
    qt_meta_data_CCNotePad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CCNotePad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CCNotePad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CCNotePad.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CCNotePad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 151)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 151;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 151)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 151;
    }
    return _id;
}

// SIGNAL 0
void CCNotePad::signSendRegisterKey(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CCNotePad::signRegisterReplay(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CCNotePad::signLinkNetServer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
