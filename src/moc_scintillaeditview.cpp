/****************************************************************************
** Meta object code from reading C++ file 'scintillaeditview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "scintillaeditview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scintillaeditview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScintillaEditView_t {
    QByteArrayData data[16];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScintillaEditView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScintillaEditView_t qt_meta_stringdata_ScintillaEditView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ScintillaEditView"
QT_MOC_LITERAL(1, 18, 9), // "delayWork"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "updateLineNumberWidth"
QT_MOC_LITERAL(4, 51, 28), // "lineNumberMarginDynamicWidth"
QT_MOC_LITERAL(5, 80, 19), // "slot_linePosChanged"
QT_MOC_LITERAL(6, 100, 4), // "line"
QT_MOC_LITERAL(7, 105, 3), // "pos"
QT_MOC_LITERAL(8, 109, 14), // "slot_delayWork"
QT_MOC_LITERAL(9, 124, 23), // "slot_scrollYValueChange"
QT_MOC_LITERAL(10, 148, 5), // "value"
QT_MOC_LITERAL(11, 154, 19), // "slot_clearHightWord"
QT_MOC_LITERAL(12, 174, 20), // "slot_bookMarkClicked"
QT_MOC_LITERAL(13, 195, 6), // "margin"
QT_MOC_LITERAL(14, 202, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(15, 224, 5) // "state"

    },
    "ScintillaEditView\0delayWork\0\0"
    "updateLineNumberWidth\0"
    "lineNumberMarginDynamicWidth\0"
    "slot_linePosChanged\0line\0pos\0"
    "slot_delayWork\0slot_scrollYValueChange\0"
    "value\0slot_clearHightWord\0"
    "slot_bookMarkClicked\0margin\0"
    "Qt::KeyboardModifiers\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScintillaEditView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       3,    0,   58,    2, 0x2a /* Public | MethodCloned */,
       5,    2,   59,    2, 0x0a /* Public */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    3,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 14,   13,    6,   15,

       0        // eod
};

void ScintillaEditView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScintillaEditView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->delayWork(); break;
        case 1: _t->updateLineNumberWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateLineNumberWidth(); break;
        case 3: _t->slot_linePosChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->slot_delayWork(); break;
        case 5: _t->slot_scrollYValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_clearHightWord(); break;
        case 7: _t->slot_bookMarkClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScintillaEditView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScintillaEditView::delayWork)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScintillaEditView::staticMetaObject = { {
    QMetaObject::SuperData::link<QsciScintilla::staticMetaObject>(),
    qt_meta_stringdata_ScintillaEditView.data,
    qt_meta_data_ScintillaEditView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScintillaEditView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScintillaEditView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScintillaEditView.stringdata0))
        return static_cast<void*>(this);
    return QsciScintilla::qt_metacast(_clname);
}

int ScintillaEditView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciScintilla::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ScintillaEditView::delayWork()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
