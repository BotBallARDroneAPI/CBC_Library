/****************************************************************************
** Meta object code from reading C++ file 'Servos.h'
**
** Created: Mon Oct 8 15:53:56 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Servos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Servos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Servos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,    8,    7,    7, 0x0a,
      51,    7,    7,    7, 0x2a,
      82,    8,    7,    7, 0x0a,
     117,    7,    7,    7, 0x2a,
     148,    7,    7,    7, 0x0a,
     158,    7,    7,    7, 0x0a,
     165,    7,    7,    7, 0x0a,
     178,  172,    7,    7, 0x0a,
     212,    8,    7,    7, 0x0a,
     245,    7,    7,    7, 0x2a,
     274,    8,    7,    7, 0x0a,
     307,    7,    7,    7, 0x2a,
     336,    8,    7,    7, 0x0a,
     373,    7,    7,    7, 0x2a,
     406,    8,    7,    7, 0x0a,
     442,    7,    7,    7, 0x2a,
     474,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Servos[] = {
    "Servos\0\0checked\0on_ui_ServoDecButton_clicked(bool)\0"
    "on_ui_ServoDecButton_clicked()\0"
    "on_ui_ServoIncButton_clicked(bool)\0"
    "on_ui_ServoIncButton_clicked()\0allStop()\0"
    "show()\0hide()\0state\0"
    "on_ui_AutoCheck_stateChanged(int)\0"
    "on_ui_UpdateButton_clicked(bool)\0"
    "on_ui_UpdateButton_clicked()\0"
    "on_ui_CenterButton_clicked(bool)\0"
    "on_ui_CenterButton_clicked()\0"
    "on_ui_ServoRightButton_clicked(bool)\0"
    "on_ui_ServoRightButton_clicked()\0"
    "on_ui_ServoLeftButton_clicked(bool)\0"
    "on_ui_ServoLeftButton_clicked()\0"
    "on_ui_ServoPositionLine_selectionChanged()\0"
};

void Servos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Servos *_t = static_cast<Servos *>(_o);
        switch (_id) {
        case 0: _t->on_ui_ServoDecButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_ui_ServoDecButton_clicked(); break;
        case 2: _t->on_ui_ServoIncButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_ui_ServoIncButton_clicked(); break;
        case 4: _t->allStop(); break;
        case 5: _t->show(); break;
        case 6: _t->hide(); break;
        case 7: _t->on_ui_AutoCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_ui_UpdateButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_ui_UpdateButton_clicked(); break;
        case 10: _t->on_ui_CenterButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_ui_CenterButton_clicked(); break;
        case 12: _t->on_ui_ServoRightButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_ui_ServoRightButton_clicked(); break;
        case 14: _t->on_ui_ServoLeftButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_ui_ServoLeftButton_clicked(); break;
        case 16: _t->on_ui_ServoPositionLine_selectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Servos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Servos::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_Servos,
      qt_meta_data_Servos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Servos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Servos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Servos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Servos))
        return static_cast<void*>(const_cast< Servos*>(this));
    return Page::qt_metacast(_clname);
}

int Servos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
