/****************************************************************************
** Meta object code from reading C++ file 'numpad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "numpad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numpad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Numpad_t {
    QByteArrayData data[18];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Numpad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Numpad_t qt_meta_stringdata_Numpad = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Numpad"
QT_MOC_LITERAL(1, 7, 11), // "sendMessage"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "msg"
QT_MOC_LITERAL(4, 24, 16), // "on_enter_clicked"
QT_MOC_LITERAL(5, 41, 18), // "on_btn_num_clicked"
QT_MOC_LITERAL(6, 60, 3), // "num"
QT_MOC_LITERAL(7, 64, 15), // "on_btn1_clicked"
QT_MOC_LITERAL(8, 80, 15), // "on_btn2_clicked"
QT_MOC_LITERAL(9, 96, 15), // "on_btn3_clicked"
QT_MOC_LITERAL(10, 112, 15), // "on_btn4_clicked"
QT_MOC_LITERAL(11, 128, 15), // "on_btn5_clicked"
QT_MOC_LITERAL(12, 144, 15), // "on_btn6_clicked"
QT_MOC_LITERAL(13, 160, 15), // "on_btn7_clicked"
QT_MOC_LITERAL(14, 176, 15), // "on_btn8_clicked"
QT_MOC_LITERAL(15, 192, 15), // "on_btn9_clicked"
QT_MOC_LITERAL(16, 208, 15), // "on_btn0_clicked"
QT_MOC_LITERAL(17, 224, 16) // "on_clear_clicked"

    },
    "Numpad\0sendMessage\0\0msg\0on_enter_clicked\0"
    "on_btn_num_clicked\0num\0on_btn1_clicked\0"
    "on_btn2_clicked\0on_btn3_clicked\0"
    "on_btn4_clicked\0on_btn5_clicked\0"
    "on_btn6_clicked\0on_btn7_clicked\0"
    "on_btn8_clicked\0on_btn9_clicked\0"
    "on_btn0_clicked\0on_clear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Numpad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
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

       0        // eod
};

void Numpad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Numpad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_enter_clicked(); break;
        case 2: _t->on_btn_num_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_btn1_clicked(); break;
        case 4: _t->on_btn2_clicked(); break;
        case 5: _t->on_btn3_clicked(); break;
        case 6: _t->on_btn4_clicked(); break;
        case 7: _t->on_btn5_clicked(); break;
        case 8: _t->on_btn6_clicked(); break;
        case 9: _t->on_btn7_clicked(); break;
        case 10: _t->on_btn8_clicked(); break;
        case 11: _t->on_btn9_clicked(); break;
        case 12: _t->on_btn0_clicked(); break;
        case 13: _t->on_clear_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Numpad::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Numpad::sendMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Numpad::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Numpad.data,
    qt_meta_data_Numpad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Numpad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Numpad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Numpad.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Numpad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Numpad::sendMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
