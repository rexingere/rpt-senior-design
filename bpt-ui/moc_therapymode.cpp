/****************************************************************************
** Meta object code from reading C++ file 'therapymode.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "therapymode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'therapymode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TherapyMode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   34,   34,   34, 0x08,
      35,   34,   34,   34, 0x08,
      57,   34,   34,   34, 0x08,
      82,   34,   34,   34, 0x08,
     104,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TherapyMode[] = {
    "TherapyMode\0on_btn_help_clicked()\0\0"
    "on_btn_stop_clicked()\0on_btn_therapy_clicked()\0"
    "on_btn_back_clicked()\0set_combo_values()\0"
};

void TherapyMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TherapyMode *_t = static_cast<TherapyMode *>(_o);
        switch (_id) {
        case 0: _t->on_btn_help_clicked(); break;
        case 1: _t->on_btn_stop_clicked(); break;
        case 2: _t->on_btn_therapy_clicked(); break;
        case 3: _t->on_btn_back_clicked(); break;
        case 4: _t->set_combo_values(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TherapyMode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TherapyMode::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TherapyMode,
      qt_meta_data_TherapyMode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TherapyMode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TherapyMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TherapyMode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TherapyMode))
        return static_cast<void*>(const_cast< TherapyMode*>(this));
    return QDialog::qt_metacast(_clname);
}

int TherapyMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
