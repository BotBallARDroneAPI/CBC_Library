/****************************************************************************
** Meta object code from reading C++ file 'MotorTest.h'
**
** Created: Mon Oct 8 15:54:11 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MotorTest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotorTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MotorTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   11,   10,   10, 0x0a,
      54,   10,   10,   10, 0x2a,
      85,   11,   10,   10, 0x0a,
     120,   10,   10,   10, 0x2a,
     151,   10,   10,   10, 0x0a,
     168,   10,   10,   10, 0x0a,
     188,   10,   10,   10, 0x0a,
     200,   10,   10,   10, 0x0a,
     210,   10,   10,   10, 0x0a,
     217,   10,   10,   10, 0x0a,
     224,   10,   10,   10, 0x0a,
     270,   10,   10,   10, 0x0a,
     320,  314,   10,   10, 0x0a,
     351,   10,   10,   10, 0x0a,
     378,   10,   10,   10, 0x0a,
     408,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MotorTest[] = {
    "MotorTest\0\0checked\0"
    "on_ui_MotorDecButton_clicked(bool)\0"
    "on_ui_MotorDecButton_clicked()\0"
    "on_ui_MotorIncButton_clicked(bool)\0"
    "on_ui_MotorIncButton_clicked()\0"
    "updateCounters()\0resetMotorCounter()\0"
    "updateGUI()\0allStop()\0show()\0hide()\0"
    "on_ui_TargetSpeedPowerLine_selectionChanged()\0"
    "on_ui_TargetPositionLine_selectionChanged()\0"
    "state\0on_ui_PlayButton_toggled(bool)\0"
    "on_ui_PowerRadio_clicked()\0"
    "on_ui_VelocityRadio_clicked()\0"
    "on_ui_PositionRadio_clicked()\0"
};

void MotorTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MotorTest *_t = static_cast<MotorTest *>(_o);
        switch (_id) {
        case 0: _t->on_ui_MotorDecButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_ui_MotorDecButton_clicked(); break;
        case 2: _t->on_ui_MotorIncButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_ui_MotorIncButton_clicked(); break;
        case 4: _t->updateCounters(); break;
        case 5: _t->resetMotorCounter(); break;
        case 6: _t->updateGUI(); break;
        case 7: _t->allStop(); break;
        case 8: _t->show(); break;
        case 9: _t->hide(); break;
        case 10: _t->on_ui_TargetSpeedPowerLine_selectionChanged(); break;
        case 11: _t->on_ui_TargetPositionLine_selectionChanged(); break;
        case 12: _t->on_ui_PlayButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_ui_PowerRadio_clicked(); break;
        case 14: _t->on_ui_VelocityRadio_clicked(); break;
        case 15: _t->on_ui_PositionRadio_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MotorTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MotorTest::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_MotorTest,
      qt_meta_data_MotorTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MotorTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MotorTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MotorTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MotorTest))
        return static_cast<void*>(const_cast< MotorTest*>(this));
    return Page::qt_metacast(_clname);
}

int MotorTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
