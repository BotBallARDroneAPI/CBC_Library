/****************************************************************************
** Meta object code from reading C++ file 'WifiDialog.h'
**
** Created: Mon Oct 8 15:54:18 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Wireless/WifiDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WifiDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WifiDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      30,   11,   11,   11, 0x0a,
      43,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WifiDialog[] = {
    "WifiDialog\0\0encodingChanged()\0"
    "acceptData()\0keyInput()\0"
};

void WifiDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WifiDialog *_t = static_cast<WifiDialog *>(_o);
        switch (_id) {
        case 0: _t->encodingChanged(); break;
        case 1: _t->acceptData(); break;
        case 2: _t->keyInput(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WifiDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WifiDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WifiDialog,
      qt_meta_data_WifiDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WifiDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WifiDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WifiDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WifiDialog))
        return static_cast<void*>(const_cast< WifiDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WifiDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE