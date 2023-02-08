/****************************************************************************
** Meta object code from reading C++ file 'findresultwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "findresultwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findresultwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindResultWin_t {
    QByteArrayData data[18];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindResultWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindResultWin_t qt_meta_stringdata_FindResultWin = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FindResultWin"
QT_MOC_LITERAL(1, 14, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 45, 5), // "index"
QT_MOC_LITERAL(5, 51, 7), // "showMsg"
QT_MOC_LITERAL(6, 59, 8), // "QString&"
QT_MOC_LITERAL(7, 68, 3), // "msg"
QT_MOC_LITERAL(8, 72, 18), // "slot_clearContents"
QT_MOC_LITERAL(9, 91, 14), // "slot_selectAll"
QT_MOC_LITERAL(10, 106, 17), // "slot_copyContents"
QT_MOC_LITERAL(11, 124, 21), // "slot_copyItemContents"
QT_MOC_LITERAL(12, 146, 18), // "slot_selectSection"
QT_MOC_LITERAL(13, 165, 21), // "slot_treeView_pressed"
QT_MOC_LITERAL(14, 187, 9), // "modeIndex"
QT_MOC_LITERAL(15, 197, 15), // "slot_fontZoomIn"
QT_MOC_LITERAL(16, 213, 16), // "slot_fontZoomOut"
QT_MOC_LITERAL(17, 230, 21) // "slot_clearAllContents"

    },
    "FindResultWin\0itemDoubleClicked\0\0"
    "QModelIndex\0index\0showMsg\0QString&\0"
    "msg\0slot_clearContents\0slot_selectAll\0"
    "slot_copyContents\0slot_copyItemContents\0"
    "slot_selectSection\0slot_treeView_pressed\0"
    "modeIndex\0slot_fontZoomIn\0slot_fontZoomOut\0"
    "slot_clearAllContents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindResultWin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    1,   80,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    0,   84,    2, 0x08 /* Private */,
      17,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FindResultWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindResultWin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->showMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slot_clearContents(); break;
        case 3: _t->slot_selectAll(); break;
        case 4: _t->slot_copyContents(); break;
        case 5: _t->slot_copyItemContents(); break;
        case 6: _t->slot_selectSection(); break;
        case 7: _t->slot_treeView_pressed((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 8: _t->slot_fontZoomIn(); break;
        case 9: _t->slot_fontZoomOut(); break;
        case 10: _t->slot_clearAllContents(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindResultWin::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindResultWin::itemDoubleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FindResultWin::*)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindResultWin::showMsg)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindResultWin::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FindResultWin.data,
    qt_meta_data_FindResultWin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindResultWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindResultWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindResultWin.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FindResultWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FindResultWin::itemDoubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FindResultWin::showMsg(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
