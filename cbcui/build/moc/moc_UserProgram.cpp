/****************************************************************************
** Meta object code from reading C++ file 'UserProgram.h'
**
** Created: Mon Oct 8 15:54:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/UserProgram.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserProgram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserProgram[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      23,   12,   12,   12, 0x05,
      38,   33,   12,   12, 0x05,
      61,   12,   12,   12, 0x05,
      82,   76,   12,   12, 0x05,
      99,   76,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   12,   12,   12, 0x0a,
     131,   12,   12,   12, 0x0a,
     139,   12,   12,   12, 0x0a,
     146,   12,   12,   12, 0x0a,
     180,  166,   12,   12, 0x0a,
     222,   12,   12,   12, 0x08,
     235,   12,   12,   12, 0x08,
     268,  248,   12,   12, 0x08,
     310,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserProgram[] = {
    "UserProgram\0\0started()\0stopped()\0text\0"
    "consoleOutput(QString)\0consoleRaise()\0"
    "state\0stateChange(int)\0loadedState(bool)\0"
    "toggleState()\0start()\0stop()\0"
    "updateProgramName()\0eCode,eStatus\0"
    "compileFinished(int,QProcess::ExitStatus)\0"
    "readStdout()\0readStderr()\0exitCode,exitStatus\0"
    "programFinished(int,QProcess::ExitStatus)\0"
    "programStarted()\0"
};

void UserProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserProgram *_t = static_cast<UserProgram *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->stopped(); break;
        case 2: _t->consoleOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->consoleRaise(); break;
        case 4: _t->stateChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->loadedState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleState(); break;
        case 7: _t->start(); break;
        case 8: _t->stop(); break;
        case 9: _t->updateProgramName(); break;
        case 10: _t->compileFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 11: _t->readStdout(); break;
        case 12: _t->readStderr(); break;
        case 13: _t->programFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 14: _t->programStarted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UserProgram::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserProgram::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserProgram,
      qt_meta_data_UserProgram, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserProgram::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserProgram))
        return static_cast<void*>(const_cast< UserProgram*>(this));
    return QObject::qt_metacast(_clname);
}

int UserProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void UserProgram::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UserProgram::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UserProgram::consoleOutput(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UserProgram::consoleRaise()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UserProgram::stateChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UserProgram::loadedState(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
