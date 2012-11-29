/****************************************************************************
** Meta object code from reading C++ file 'MotorTuning.h'
**
** Created: Mon Oct 8 15:54:10 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MotorTuning.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotorTuning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MotorTuning[] = {

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
      21,   13,   12,   12, 0x0a,
      56,   12,   12,   12, 0x2a,
      87,   13,   12,   12, 0x0a,
     122,   12,   12,   12, 0x2a,
     153,   12,   12,   12, 0x0a,
     170,   12,   12,   12, 0x0a,
     190,   12,   12,   12, 0x0a,
     200,   12,   12,   12, 0x0a,
     207,   12,   12,   12, 0x0a,
     220,  214,   12,   12, 0x0a,
     259,  253,   12,   12, 0x0a,
     294,  253,   12,   12, 0x0a,
     328,   12,   12,   12, 0x0a,
     369,   12,   12,   12, 0x0a,
     413,  214,   12,   12, 0x0a,
     444,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MotorTuning[] = {
    "MotorTuning\0\0checked\0"
    "on_ui_MotorDecButton_clicked(bool)\0"
    "on_ui_MotorDecButton_clicked()\0"
    "on_ui_MotorIncButton_clicked(bool)\0"
    "on_ui_MotorIncButton_clicked()\0"
    "updateCounters()\0resetMotorCounter()\0"
    "allStop()\0show()\0hide()\0state\0"
    "on_ui_NegCheck_stateChanged(int)\0value\0"
    "on_ui_MultSlider_valueChanged(int)\0"
    "on_ui_DivSlider_valueChanged(int)\0"
    "on_ui_TargetSpeedLine_selectionChanged()\0"
    "on_ui_TargetPositionLine_selectionChanged()\0"
    "on_ui_PlayButton_toggled(bool)\0"
    "GUIupdate()\0"
};

void MotorTuning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MotorTuning *_t = static_cast<MotorTuning *>(_o);
        switch (_id) {
        case 0: _t->on_ui_MotorDecButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_ui_MotorDecButton_clicked(); break;
        case 2: _t->on_ui_MotorIncButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_ui_MotorIncButton_clicked(); break;
        case 4: _t->updateCounters(); break;
        case 5: _t->resetMotorCounter(); break;
        case 6: _t->allStop(); break;
        case 7: _t->show(); break;
        case 8: _t->hide(); break;
        case 9: _t->on_ui_NegCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_ui_MultSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_ui_DivSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_ui_TargetSpeedLine_selectionChanged(); break;
        case 13: _t->on_ui_TargetPositionLine_selectionChanged(); break;
        case 14: _t->on_ui_PlayButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->GUIupdate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MotorTuning::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MotorTuning::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_MotorTuning,
      qt_meta_data_MotorTuning, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MotorTuning::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MotorTuning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MotorTuning::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MotorTuning))
        return static_cast<void*>(const_cast< MotorTuning*>(this));
    return Page::qt_metacast(_clname);
}

int MotorTuning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
