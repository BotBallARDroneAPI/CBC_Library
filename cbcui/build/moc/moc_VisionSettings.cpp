/****************************************************************************
** Meta object code from reading C++ file 'VisionSettings.h'
**
** Created: Mon Oct 8 15:53:59 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VisionSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisionSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VisionSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      54,   15,   15,   15, 0x0a,
      92,   15,   15,   15, 0x0a,
      99,   15,   15,   15, 0x0a,
     112,  106,   15,   15, 0x0a,
     157,   15,   15,   15, 0x0a,
     203,  197,   15,   15, 0x0a,
     240,   15,   15,   15, 0x0a,
     281,  197,   15,   15, 0x0a,
     319,   15,   15,   15, 0x0a,
     358,  197,   15,   15, 0x0a,
     394,   15,   15,   15, 0x0a,
     436,  197,   15,   15, 0x0a,
     475,  106,   15,   15, 0x0a,
     520,   15,   15,   15, 0x0a,
     564,  197,   15,   15, 0x0a,
     605,   15,   15,   15, 0x0a,
     647,  197,   15,   15, 0x0a,
     686,   15,   15,   15, 0x0a,
     729,  197,   15,   15, 0x0a,
     769,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VisionSettings[] = {
    "VisionSettings\0\0on_ui_visionSettingRtButton_clicked()\0"
    "on_ui_visionSettingLfButton_clicked()\0"
    "show()\0hide()\0state\0"
    "on_ui_autoWhiteBalCheckBox_stateChanged(int)\0"
    "on_ui_redBalLineEdit_selectionChanged()\0"
    "value\0on_ui_redBalSlider_valueChanged(int)\0"
    "on_ui_blueBalLineEdit_selectionChanged()\0"
    "on_ui_blueBalSlider_valueChanged(int)\0"
    "on_ui_gammaLineEdit_selectionChanged()\0"
    "on_ui_gammaSlider_valueChanged(int)\0"
    "on_ui_exposureLineEdit_selectionChanged()\0"
    "on_ui_exposureSlider_valueChanged(int)\0"
    "on_ui_autoExposureCheckBox_stateChanged(int)\0"
    "on_ui_brightnessLineEdit_selectionChanged()\0"
    "on_ui_brightnessSlider_valueChanged(int)\0"
    "on_ui_contrastLineEdit_selectionChanged()\0"
    "on_ui_contrastSlider_valueChanged(int)\0"
    "on_ui_sharpnessLineEdit_selectionChanged()\0"
    "on_ui_sharpnessSlider_valueChanged(int)\0"
    "on_ui_defaultButton_clicked()\0"
};

void VisionSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VisionSettings *_t = static_cast<VisionSettings *>(_o);
        switch (_id) {
        case 0: _t->on_ui_visionSettingRtButton_clicked(); break;
        case 1: _t->on_ui_visionSettingLfButton_clicked(); break;
        case 2: _t->show(); break;
        case 3: _t->hide(); break;
        case 4: _t->on_ui_autoWhiteBalCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_ui_redBalLineEdit_selectionChanged(); break;
        case 6: _t->on_ui_redBalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_ui_blueBalLineEdit_selectionChanged(); break;
        case 8: _t->on_ui_blueBalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_ui_gammaLineEdit_selectionChanged(); break;
        case 10: _t->on_ui_gammaSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_ui_exposureLineEdit_selectionChanged(); break;
        case 12: _t->on_ui_exposureSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_ui_autoExposureCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_ui_brightnessLineEdit_selectionChanged(); break;
        case 15: _t->on_ui_brightnessSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_ui_contrastLineEdit_selectionChanged(); break;
        case 17: _t->on_ui_contrastSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_ui_sharpnessLineEdit_selectionChanged(); break;
        case 19: _t->on_ui_sharpnessSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_ui_defaultButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VisionSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VisionSettings::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_VisionSettings,
      qt_meta_data_VisionSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VisionSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VisionSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VisionSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VisionSettings))
        return static_cast<void*>(const_cast< VisionSettings*>(this));
    return Page::qt_metacast(_clname);
}

int VisionSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
