/****************************************************************************
** Meta object code from reading C++ file 'columnedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "columnedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'columnedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColumnEdit_t {
    QByteArrayData data[10];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColumnEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColumnEdit_t qt_meta_stringdata_ColumnEdit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ColumnEdit"
QT_MOC_LITERAL(1, 11, 20), // "slot_insertNumEnable"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "check"
QT_MOC_LITERAL(4, 39, 21), // "slot_insertTextEnable"
QT_MOC_LITERAL(5, 61, 14), // "slot_addPrefix"
QT_MOC_LITERAL(6, 76, 1), // "s"
QT_MOC_LITERAL(7, 78, 12), // "slot_bigChar"
QT_MOC_LITERAL(8, 91, 7), // "isCheck"
QT_MOC_LITERAL(9, 99, 7) // "slot_ok"

    },
    "ColumnEdit\0slot_insertNumEnable\0\0check\0"
    "slot_insertTextEnable\0slot_addPrefix\0"
    "s\0slot_bigChar\0isCheck\0slot_ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColumnEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       7,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void ColumnEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColumnEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_insertNumEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slot_insertTextEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slot_addPrefix((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slot_bigChar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slot_ok(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColumnEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ColumnEdit.data,
    qt_meta_data_ColumnEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColumnEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColumnEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColumnEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ColumnEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
