/****************************************************************************
** Meta object code from reading C++ file 'SensorPorts.h'
**
** Created: Mon Oct 8 15:53:55 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SensorPorts.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SensorPorts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SensorPorts[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      29,   12,   12,   12, 0x0a,
      36,   12,   12,   12, 0x0a,
      51,   43,   12,   12, 0x0a,
      87,   12,   12,   12, 0x2a,
     119,   43,   12,   12, 0x0a,
     155,   12,   12,   12, 0x2a,
     187,   43,   12,   12, 0x0a,
     223,   12,   12,   12, 0x2a,
     255,   43,   12,   12, 0x0a,
     291,   12,   12,   12, 0x2a,
     323,   43,   12,   12, 0x0a,
     359,   12,   12,   12, 0x2a,
     391,   43,   12,   12, 0x0a,
     427,   12,   12,   12, 0x2a,
     459,   43,   12,   12, 0x0a,
     495,   12,   12,   12, 0x2a,
     527,   43,   12,   12, 0x0a,
     563,   12,   12,   12, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_SensorPorts[] = {
    "SensorPorts\0\0updateSensors()\0show()\0"
    "hide()\0checked\0on_ui_floatingAnalog0_clicked(bool)\0"
    "on_ui_floatingAnalog0_clicked()\0"
    "on_ui_floatingAnalog1_clicked(bool)\0"
    "on_ui_floatingAnalog1_clicked()\0"
    "on_ui_floatingAnalog2_clicked(bool)\0"
    "on_ui_floatingAnalog2_clicked()\0"
    "on_ui_floatingAnalog3_clicked(bool)\0"
    "on_ui_floatingAnalog3_clicked()\0"
    "on_ui_floatingAnalog4_clicked(bool)\0"
    "on_ui_floatingAnalog4_clicked()\0"
    "on_ui_floatingAnalog5_clicked(bool)\0"
    "on_ui_floatingAnalog5_clicked()\0"
    "on_ui_floatingAnalog6_clicked(bool)\0"
    "on_ui_floatingAnalog6_clicked()\0"
    "on_ui_floatingAnalog7_clicked(bool)\0"
    "on_ui_floatingAnalog7_clicked()\0"
};

void SensorPorts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SensorPorts *_t = static_cast<SensorPorts *>(_o);
        switch (_id) {
        case 0: _t->updateSensors(); break;
        case 1: _t->show(); break;
        case 2: _t->hide(); break;
        case 3: _t->on_ui_floatingAnalog0_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_ui_floatingAnalog0_clicked(); break;
        case 5: _t->on_ui_floatingAnalog1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_ui_floatingAnalog1_clicked(); break;
        case 7: _t->on_ui_floatingAnalog2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_ui_floatingAnalog2_clicked(); break;
        case 9: _t->on_ui_floatingAnalog3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_ui_floatingAnalog3_clicked(); break;
        case 11: _t->on_ui_floatingAnalog4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_ui_floatingAnalog4_clicked(); break;
        case 13: _t->on_ui_floatingAnalog5_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_ui_floatingAnalog5_clicked(); break;
        case 15: _t->on_ui_floatingAnalog6_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_ui_floatingAnalog6_clicked(); break;
        case 17: _t->on_ui_floatingAnalog7_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_ui_floatingAnalog7_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SensorPorts::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SensorPorts::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_SensorPorts,
      qt_meta_data_SensorPorts, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SensorPorts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SensorPorts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SensorPorts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SensorPorts))
        return static_cast<void*>(const_cast< SensorPorts*>(this));
    return Page::qt_metacast(_clname);
}

int SensorPorts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
