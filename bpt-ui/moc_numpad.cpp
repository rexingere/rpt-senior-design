/****************************************************************************
** Meta object code from reading C++ file 'numpad.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "numpad.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numpad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Numpad[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   28,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x08,
      52,   80,   32,   32, 0x08,
      84,   32,   32,   32, 0x08,
     102,   32,   32,   32, 0x08,
     120,   32,   32,   32, 0x08,
     138,   32,   32,   32, 0x08,
     156,   32,   32,   32, 0x08,
     174,   32,   32,   32, 0x08,
     192,   32,   32,   32, 0x08,
     210,   32,   32,   32, 0x08,
     228,   32,   32,   32, 0x08,
     246,   32,   32,   32, 0x08,
     264,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Numpad[] = {
    "Numpad\0sendMessage(QString)\0msg\0\0"
    "on_enter_clicked()\0on_btn_num_clicked(QString)\0"
    "num\0on_btn1_clicked()\0on_btn2_clicked()\0"
    "on_btn3_clicked()\0on_btn4_clicked()\0"
    "on_btn5_clicked()\0on_btn6_clicked()\0"
    "on_btn7_clicked()\0on_btn8_clicked()\0"
    "on_btn9_clicked()\0on_btn0_clicked()\0"
    "on_clear_clicked()\0"
};

void Numpad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Numpad *_t = static_cast<Numpad *>(_o);
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
    }
}

const QMetaObjectExtraData Numpad::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Numpad::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Numpad,
      qt_meta_data_Numpad, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Numpad::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Numpad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Numpad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Numpad))
        return static_cast<void*>(const_cast< Numpad*>(this));
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
    }
    return _id;
}

// SIGNAL 0
void Numpad::sendMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
