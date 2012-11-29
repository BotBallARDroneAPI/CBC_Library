/****************************************************************************
** Meta object code from reading C++ file 'Volume.h'
**
** Created: Mon Oct 8 15:54:14 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Volume.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Volume.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Volume[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    8,    7,    7, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Volume[] = {
    "Volume\0\0i\0on_ui_volume_valueChanged(int)\0"
};

void Volume::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Volume *_t = static_cast<Volume *>(_o);
        switch (_id) {
        case 0: _t->on_ui_volume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Volume::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Volume::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_Volume,
      qt_meta_data_Volume, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Volume::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Volume::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Volume::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Volume))
        return static_cast<void*>(const_cast< Volume*>(this));
    if (!strcmp(_clname, "Ui::Volume"))
        return static_cast< Ui::Volume*>(const_cast< Volume*>(this));
    return Page::qt_metacast(_clname);
}

int Volume::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
