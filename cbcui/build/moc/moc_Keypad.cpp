/****************************************************************************
** Meta object code from reading C++ file 'Keypad.h'
**
** Created: Mon Oct 8 15:54:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Keyboard/Keypad.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Keypad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Keypad[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,    8,    7,    7, 0x0a,
      46,    7,    7,    7, 0x2a,
      72,    8,    7,    7, 0x0a,
     102,    7,    7,    7, 0x2a,
     128,    8,    7,    7, 0x0a,
     160,    7,    7,    7, 0x2a,
     188,    8,    7,    7, 0x0a,
     219,    7,    7,    7, 0x2a,
     246,    8,    7,    7, 0x0a,
     277,    7,    7,    7, 0x2a,
     304,    8,    7,    7, 0x0a,
     334,    7,    7,    7, 0x2a,
     360,    8,    7,    7, 0x0a,
     392,    7,    7,    7, 0x2a,
     420,    8,    7,    7, 0x0a,
     452,    7,    7,    7, 0x2a,
     480,    8,    7,    7, 0x0a,
     511,    7,    7,    7, 0x2a,
     538,    8,    7,    7, 0x0a,
     569,    7,    7,    7, 0x2a,
     596,    8,    7,    7, 0x0a,
     628,    7,    7,    7, 0x2a,
     656,    8,    7,    7, 0x0a,
     689,    7,    7,    7, 0x2a,
     718,    8,    7,    7, 0x0a,
     750,    7,    7,    7, 0x2a,
     778,    7,    7,    7, 0x0a,
     789,    7,  785,    7, 0x0a,
     808,    7,  800,    7, 0x0a,
     828,  820,    7,    7, 0x0a,
     850,  846,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Keypad[] = {
    "Keypad\0\0checked\0on_ui_oneButton_clicked(bool)\0"
    "on_ui_oneButton_clicked()\0"
    "on_ui_twoButton_clicked(bool)\0"
    "on_ui_twoButton_clicked()\0"
    "on_ui_threeButton_clicked(bool)\0"
    "on_ui_threeButton_clicked()\0"
    "on_ui_fourButton_clicked(bool)\0"
    "on_ui_fourButton_clicked()\0"
    "on_ui_fiveButton_clicked(bool)\0"
    "on_ui_fiveButton_clicked()\0"
    "on_ui_sixButton_clicked(bool)\0"
    "on_ui_sixButton_clicked()\0"
    "on_ui_sevenButton_clicked(bool)\0"
    "on_ui_sevenButton_clicked()\0"
    "on_ui_eightButton_clicked(bool)\0"
    "on_ui_eightButton_clicked()\0"
    "on_ui_nineButton_clicked(bool)\0"
    "on_ui_nineButton_clicked()\0"
    "on_ui_zeroButton_clicked(bool)\0"
    "on_ui_zeroButton_clicked()\0"
    "on_ui_enterButton_clicked(bool)\0"
    "on_ui_enterButton_clicked()\0"
    "on_ui_negateButton_clicked(bool)\0"
    "on_ui_negateButton_clicked()\0"
    "on_ui_clearButton_clicked(bool)\0"
    "on_ui_clearButton_clicked()\0show()\0"
    "int\0getValue()\0QString\0getString()\0"
    "min,max\0setRange(int,int)\0typ\0"
    "setType(int)\0"
};

void Keypad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Keypad *_t = static_cast<Keypad *>(_o);
        switch (_id) {
        case 0: _t->on_ui_oneButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_ui_oneButton_clicked(); break;
        case 2: _t->on_ui_twoButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_ui_twoButton_clicked(); break;
        case 4: _t->on_ui_threeButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_ui_threeButton_clicked(); break;
        case 6: _t->on_ui_fourButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_ui_fourButton_clicked(); break;
        case 8: _t->on_ui_fiveButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_ui_fiveButton_clicked(); break;
        case 10: _t->on_ui_sixButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_ui_sixButton_clicked(); break;
        case 12: _t->on_ui_sevenButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_ui_sevenButton_clicked(); break;
        case 14: _t->on_ui_eightButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_ui_eightButton_clicked(); break;
        case 16: _t->on_ui_nineButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_ui_nineButton_clicked(); break;
        case 18: _t->on_ui_zeroButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_ui_zeroButton_clicked(); break;
        case 20: _t->on_ui_enterButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->on_ui_enterButton_clicked(); break;
        case 22: _t->on_ui_negateButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_ui_negateButton_clicked(); break;
        case 24: _t->on_ui_clearButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_ui_clearButton_clicked(); break;
        case 26: _t->show(); break;
        case 27: { int _r = _t->getValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->getString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->setType((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Keypad::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Keypad::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Keypad,
      qt_meta_data_Keypad, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Keypad::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Keypad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Keypad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Keypad))
        return static_cast<void*>(const_cast< Keypad*>(this));
    return QDialog::qt_metacast(_clname);
}

int Keypad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
