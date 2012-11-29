/****************************************************************************
** Meta object code from reading C++ file 'VisionTracking.h'
**
** Created: Mon Oct 8 15:54:00 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VisionTracking.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisionTracking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VisionTracking[] = {

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
      16,   15,   15,   15, 0x0a,
      23,   15,   15,   15, 0x0a,
      30,   15,   15,   15, 0x0a,
      49,   15,   15,   15, 0x0a,
      75,   15,   15,   15, 0x0a,
     101,   15,   15,   15, 0x0a,
     127,   15,   15,   15, 0x0a,
     153,   15,   15,   15, 0x0a,
     176,   15,   15,   15, 0x0a,
     201,   15,   15,   15, 0x0a,
     226,   15,   15,   15, 0x0a,
     253,   15,   15,   15, 0x0a,
     284,   15,   15,   15, 0x0a,
     306,   15,   15,   15, 0x0a,
     330,   15,   15,   15, 0x0a,
     354,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VisionTracking[] = {
    "VisionTracking\0\0show()\0hide()\0"
    "updateModelLabel()\0on_Model0Button_clicked()\0"
    "on_Model1Button_clicked()\0"
    "on_Model2Button_clicked()\0"
    "on_Model3Button_clicked()\0"
    "on_RawButton_clicked()\0on_MatchButton_clicked()\0"
    "on_TrackButton_clicked()\0"
    "on_TopLeftButton_clicked()\0"
    "on_BottomRightButton_clicked()\0"
    "on_UpButton_clicked()\0on_DownButton_clicked()\0"
    "on_LeftButton_clicked()\0"
    "on_RightButton_clicked()\0"
};

void VisionTracking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VisionTracking *_t = static_cast<VisionTracking *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->hide(); break;
        case 2: _t->updateModelLabel(); break;
        case 3: _t->on_Model0Button_clicked(); break;
        case 4: _t->on_Model1Button_clicked(); break;
        case 5: _t->on_Model2Button_clicked(); break;
        case 6: _t->on_Model3Button_clicked(); break;
        case 7: _t->on_RawButton_clicked(); break;
        case 8: _t->on_MatchButton_clicked(); break;
        case 9: _t->on_TrackButton_clicked(); break;
        case 10: _t->on_TopLeftButton_clicked(); break;
        case 11: _t->on_BottomRightButton_clicked(); break;
        case 12: _t->on_UpButton_clicked(); break;
        case 13: _t->on_DownButton_clicked(); break;
        case 14: _t->on_LeftButton_clicked(); break;
        case 15: _t->on_RightButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VisionTracking::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VisionTracking::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_VisionTracking,
      qt_meta_data_VisionTracking, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VisionTracking::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VisionTracking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VisionTracking::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VisionTracking))
        return static_cast<void*>(const_cast< VisionTracking*>(this));
    return Page::qt_metacast(_clname);
}

int VisionTracking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
