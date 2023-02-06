/****************************************************************************
** Meta object code from reading C++ file 'findcmpwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "findcmpwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findcmpwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindCmpWin_t {
    QByteArrayData data[9];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindCmpWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindCmpWin_t qt_meta_stringdata_FindCmpWin = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FindCmpWin"
QT_MOC_LITERAL(1, 11, 26), // "sgin_searchDirectionChange"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "RC_DIRECTION"
QT_MOC_LITERAL(4, 52, 3), // "dir"
QT_MOC_LITERAL(5, 56, 13), // "slot_findNext"
QT_MOC_LITERAL(6, 70, 28), // "slot_findModeRegularBtChange"
QT_MOC_LITERAL(7, 99, 7), // "checked"
QT_MOC_LITERAL(8, 107, 17) // "slot_isSearchLeft"

    },
    "FindCmpWin\0sgin_searchDirectionChange\0"
    "\0RC_DIRECTION\0dir\0slot_findNext\0"
    "slot_findModeRegularBtChange\0checked\0"
    "slot_isSearchLeft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindCmpWin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       8,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void FindCmpWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindCmpWin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sgin_searchDirectionChange((*reinterpret_cast< RC_DIRECTION(*)>(_a[1]))); break;
        case 1: _t->slot_findNext(); break;
        case 2: _t->slot_findModeRegularBtChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slot_isSearchLeft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindCmpWin::*)(RC_DIRECTION );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindCmpWin::sgin_searchDirectionChange)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindCmpWin::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FindCmpWin.data,
    qt_meta_data_FindCmpWin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindCmpWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindCmpWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindCmpWin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FindCmpWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FindCmpWin::sgin_searchDirectionChange(RC_DIRECTION _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
