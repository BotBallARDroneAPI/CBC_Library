/****************************************************************************
** Meta object code from reading C++ file 'Wireless.h'
**
** Created: Mon Oct 8 15:54:15 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Wireless/Wireless.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Wireless.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Wireless[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      17,    9,    9,    9, 0x0a,
      24,    9,    9,    9, 0x0a,
      44,   35,    9,    9, 0x0a,
      61,    9,    9,    9, 0x2a,
      75,    9,    9,    9, 0x0a,
     105,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Wireless[] = {
    "Wireless\0\0show()\0hide()\0ssidScan()\0"
    "exitCode\0listRefresh(int)\0listRefresh()\0"
    "on_ui_connectButton_clicked()\0blinky()\0"
};

void Wireless::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Wireless *_t = static_cast<Wireless *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->hide(); break;
        case 2: _t->ssidScan(); break;
        case 3: _t->listRefresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->listRefresh(); break;
        case 5: _t->on_ui_connectButton_clicked(); break;
        case 6: _t->blinky(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Wireless::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Wireless::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_Wireless,
      qt_meta_data_Wireless, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Wireless::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Wireless::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Wireless::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Wireless))
        return static_cast<void*>(const_cast< Wireless*>(this));
    return Page::qt_metacast(_clname);
}

int Wireless::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
