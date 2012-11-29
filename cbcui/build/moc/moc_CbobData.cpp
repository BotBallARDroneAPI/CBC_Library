/****************************************************************************
** Meta object code from reading C++ file 'CbobData.h'
**
** Created: Mon Oct 8 15:54:04 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/CbobData.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CbobData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CbobData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      26,   20,    9,    9, 0x05,
      44,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,    9,    9,    9, 0x0a,
      67,    9,    9,    9, 0x0a,
      79,    9,    9,    9, 0x0a,
      95,    9,    9,    9, 0x0a,
     105,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CbobData[] = {
    "CbobData\0\0refresh()\0volts\0lowBattery(float)\0"
    "eStop()\0resetPullups()\0motorsOff()\0"
    "disableServos()\0allStop()\0updateSensors()\0"
};

void CbobData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CbobData *_t = static_cast<CbobData *>(_o);
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->lowBattery((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->eStop(); break;
        case 3: _t->resetPullups(); break;
        case 4: _t->motorsOff(); break;
        case 5: _t->disableServos(); break;
        case 6: _t->allStop(); break;
        case 7: _t->updateSensors(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CbobData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CbobData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CbobData,
      qt_meta_data_CbobData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CbobData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CbobData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CbobData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CbobData))
        return static_cast<void*>(const_cast< CbobData*>(this));
    return QObject::qt_metacast(_clname);
}

int CbobData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CbobData::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CbobData::lowBattery(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CbobData::eStop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
