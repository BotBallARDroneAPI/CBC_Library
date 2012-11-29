/****************************************************************************
** Meta object code from reading C++ file 'Settings.h'
**
** Created: Mon Oct 8 15:54:03 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Settings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      30,    9,    9,    9, 0x0a,
      49,    9,    9,    9, 0x0a,
      65,    9,    9,    9, 0x0a,
      76,    9,    9,    9, 0x0a,
     103,   95,    9,    9, 0x0a,
     138,    9,    9,    9, 0x2a,
     169,    9,    9,    9, 0x0a,
     183,    9,    9,    9, 0x0a,
     196,    9,    9,    9, 0x0a,
     212,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Settings[] = {
    "Settings\0\0recalibrateMotors()\0"
    "recalibrateAccel()\0recalibrateTS()\0"
    "resetPID()\0setCameraDefault()\0checked\0"
    "on_ui_consoleShowBox_clicked(bool)\0"
    "on_ui_consoleShowBox_clicked()\0"
    "storePidCal()\0loadPidCal()\0storeAccelCal()\0"
    "loadAccelCal()\0"
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->recalibrateMotors(); break;
        case 1: _t->recalibrateAccel(); break;
        case 2: _t->recalibrateTS(); break;
        case 3: _t->resetPID(); break;
        case 4: _t->setCameraDefault(); break;
        case 5: _t->on_ui_consoleShowBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_ui_consoleShowBox_clicked(); break;
        case 7: _t->storePidCal(); break;
        case 8: _t->loadPidCal(); break;
        case 9: _t->storeAccelCal(); break;
        case 10: _t->loadAccelCal(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Settings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Settings::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_Settings,
      qt_meta_data_Settings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Settings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Settings))
        return static_cast<void*>(const_cast< Settings*>(this));
    return Page::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
