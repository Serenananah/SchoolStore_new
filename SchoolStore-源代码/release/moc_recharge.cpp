/****************************************************************************
** Meta object code from reading C++ file 'recharge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../recharge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recharge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Recharge_t {
    QByteArrayData data[9];
    char stringdata[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Recharge_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Recharge_t qt_meta_stringdata_Recharge = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 25),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 24),
QT_MOC_LITERAL(4, 61, 26),
QT_MOC_LITERAL(5, 88, 28),
QT_MOC_LITERAL(6, 117, 29),
QT_MOC_LITERAL(7, 147, 27),
QT_MOC_LITERAL(8, 175, 28)
    },
    "Recharge\0on_pushButton_zfb_clicked\0\0"
    "on_pushButton_wx_clicked\0"
    "on_pushButton_back_clicked\0"
    "on_pushButton_zfb_10_clicked\0"
    "on_pushButton_zfb_all_clicked\0"
    "on_pushButton_wx_10_clicked\0"
    "on_pushButton_wx_all_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Recharge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Recharge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Recharge *_t = static_cast<Recharge *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_zfb_clicked(); break;
        case 1: _t->on_pushButton_wx_clicked(); break;
        case 2: _t->on_pushButton_back_clicked(); break;
        case 3: _t->on_pushButton_zfb_10_clicked(); break;
        case 4: _t->on_pushButton_zfb_all_clicked(); break;
        case 5: _t->on_pushButton_wx_10_clicked(); break;
        case 6: _t->on_pushButton_wx_all_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Recharge::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Recharge.data,
      qt_meta_data_Recharge,  qt_static_metacall, 0, 0}
};


const QMetaObject *Recharge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Recharge::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Recharge.stringdata))
        return static_cast<void*>(const_cast< Recharge*>(this));
    return QDialog::qt_metacast(_clname);
}

int Recharge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
