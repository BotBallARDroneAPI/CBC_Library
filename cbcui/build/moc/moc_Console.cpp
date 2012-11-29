/****************************************************************************
** Meta object code from reading C++ file 'Console.h'
**
** Created: Mon Oct 8 15:53:50 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Console.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Console.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Console[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      29,   24,    8,    8, 0x0a,
      49,    8,    8,    8, 0x0a,
      74,    8,    8,    8, 0x0a,
     101,    8,    8,    8, 0x0a,
     128,    8,    8,    8, 0x0a,
     156,    8,    8,    8, 0x0a,
     180,    8,    8,    8, 0x0a,
     204,    8,    8,    8, 0x0a,
     230,    8,    8,    8, 0x0a,
     258,    8,    8,    8, 0x0a,
     286,    8,    8,    8, 0x0a,
     315,    8,    8,    8, 0x0a,
     340,    8,    8,    8, 0x0a,
     365,    8,    8,    8, 0x0a,
     381,  372,    8,    8, 0x0a,
     404,    8,    8,    8, 0x0a,
     420,    8,    8,    8, 0x0a,
     442,  433,    8,    8, 0x0a,
     479,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Console[] = {
    "Console\0\0invertColors()\0text\0"
    "updateText(QString)\0on_ui_upButton_pressed()\0"
    "on_ui_downButton_pressed()\0"
    "on_ui_leftButton_pressed()\0"
    "on_ui_rightButton_pressed()\0"
    "on_ui_aButton_pressed()\0on_ui_bButton_pressed()\0"
    "on_ui_upButton_released()\0"
    "on_ui_downButton_released()\0"
    "on_ui_leftButton_released()\0"
    "on_ui_rightButton_released()\0"
    "on_ui_aButton_released()\0"
    "on_ui_bButton_released()\0bell()\0"
    "filename\0playSoundFile(QString)\0"
    "stopSoundFile()\0playChange()\0newState\0"
    "recordChange(QProcess::ProcessState)\0"
    "manageSound()\0"
};

void Console::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Console *_t = static_cast<Console *>(_o);
        switch (_id) {
        case 0: _t->invertColors(); break;
        case 1: _t->updateText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_ui_upButton_pressed(); break;
        case 3: _t->on_ui_downButton_pressed(); break;
        case 4: _t->on_ui_leftButton_pressed(); break;
        case 5: _t->on_ui_rightButton_pressed(); break;
        case 6: _t->on_ui_aButton_pressed(); break;
        case 7: _t->on_ui_bButton_pressed(); break;
        case 8: _t->on_ui_upButton_released(); break;
        case 9: _t->on_ui_downButton_released(); break;
        case 10: _t->on_ui_leftButton_released(); break;
        case 11: _t->on_ui_rightButton_released(); break;
        case 12: _t->on_ui_aButton_released(); break;
        case 13: _t->on_ui_bButton_released(); break;
        case 14: _t->bell(); break;
        case 15: _t->playSoundFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->stopSoundFile(); break;
        case 17: _t->playChange(); break;
        case 18: _t->recordChange((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 19: _t->manageSound(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Console::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Console::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_Console,
      qt_meta_data_Console, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Console::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Console::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Console::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Console))
        return static_cast<void*>(const_cast< Console*>(this));
    return Page::qt_metacast(_clname);
}

int Console::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
