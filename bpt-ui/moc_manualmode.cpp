/****************************************************************************
** Meta object code from reading C++ file 'manualmode.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "manualmode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manualmode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ManualMode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   41,   41,   41, 0x08,
      42,   41,   41,   41, 0x08,
      64,   41,   41,   41, 0x08,
      87,   41,   41,   41, 0x08,
     109,   41,   41,   41, 0x08,
     131,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ManualMode[] = {
    "ManualMode\0on_btn_therapy_mode_clicked()\0"
    "\0on_btn_help_clicked()\0on_btn_reset_clicked()\0"
    "on_btn_test_clicked()\0on_btn_back_clicked()\0"
    "set_combo_values()\0"
};

void ManualMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ManualMode *_t = static_cast<ManualMode *>(_o);
        switch (_id) {
        case 0: _t->on_btn_therapy_mode_clicked(); break;
        case 1: _t->on_btn_help_clicked(); break;
        case 2: _t->on_btn_reset_clicked(); break;
        case 3: _t->on_btn_test_clicked(); break;
        case 4: _t->on_btn_back_clicked(); break;
        case 5: _t->set_combo_values(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ManualMode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ManualMode::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ManualMode,
      qt_meta_data_ManualMode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ManualMode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ManualMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ManualMode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ManualMode))
        return static_cast<void*>(const_cast< ManualMode*>(this));
    return QDialog::qt_metacast(_clname);
}

int ManualMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
