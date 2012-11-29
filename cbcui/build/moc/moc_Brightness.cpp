/****************************************************************************
** Meta object code from reading C++ file 'Brightness.h'
**
** Created: Mon Oct 8 15:54:12 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Brightness.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Brightness.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Brightness[] = {

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
      14,   12,   11,   11, 0x09,
      54,   12,   11,   11, 0x09,
      97,   89,   11,   11, 0x09,
     129,   11,   11,   11, 0x29,
     157,   11,   11,   11, 0x09,
     178,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Brightness[] = {
    "Brightness\0\0i\0on_ui_dimCombo_currentIndexChanged(int)\0"
    "on_ui_brightness_valueChanged(int)\0"
    "checked\0on_ui_dimCheckBox_clicked(bool)\0"
    "on_ui_dimCheckBox_clicked()\0"
    "mouseUpdateChecker()\0dim()\0"
};

void Brightness::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Brightness *_t = static_cast<Brightness *>(_o);
        switch (_id) {
        case 0: _t->on_ui_dimCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_ui_brightness_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_ui_dimCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_ui_dimCheckBox_clicked(); break;
        case 4: _t->mouseUpdateChecker(); break;
        case 5: _t->dim(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Brightness::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Brightness::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_Brightness,
      qt_meta_data_Brightness, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Brightness::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Brightness::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Brightness::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Brightness))
        return static_cast<void*>(const_cast< Brightness*>(this));
    if (!strcmp(_clname, "Ui::Brightness"))
        return static_cast< Ui::Brightness*>(const_cast< Brightness*>(this));
    return Page::qt_metacast(_clname);
}

int Brightness::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
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
