/****************************************************************************
** Meta object code from reading C++ file 'SerialServer.h'
**
** Created: Mon Oct 8 15:54:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Serial/SerialServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      27,   13,   13,   13, 0x05,
      50,   41,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   13,   13,   13, 0x08,
      93,   88,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SerialServer[] = {
    "SerialServer\0\0runProgram()\0stopProgram()\0"
    "filename\0downloadFinished(QString)\0"
    "clearText()\0text\0updateText(QString)\0"
};

void SerialServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialServer *_t = static_cast<SerialServer *>(_o);
        switch (_id) {
        case 0: _t->runProgram(); break;
        case 1: _t->stopProgram(); break;
        case 2: _t->downloadFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->clearText(); break;
        case 4: _t->updateText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialServer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SerialServer,
      qt_meta_data_SerialServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialServer))
        return static_cast<void*>(const_cast< SerialServer*>(this));
    return QThread::qt_metacast(_clname);
}

int SerialServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SerialServer::runProgram()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SerialServer::stopProgram()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SerialServer::downloadFinished(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
