/****************************************************************************
** Meta object code from reading C++ file 'SerialPage.h'
**
** Created: Mon Oct 8 15:54:21 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Serial/SerialPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      36,   13,   13,   13, 0x05,
      56,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   73,   13,   13, 0x0a,
     103,   98,   13,   13, 0x0a,
     123,  120,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SerialThread[] = {
    "SerialThread\0\0portList(QStringList)\0"
    "newData(QByteArray)\0baudSetting(int)\0"
    "index\0setActivePort(int)\0baud\0"
    "setBaudRate(int)\0ba\0sendCommand(QByteArray)\0"
};

void SerialThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialThread *_t = static_cast<SerialThread *>(_o);
        switch (_id) {
        case 0: _t->portList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->newData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->baudSetting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setActivePort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sendCommand((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SerialThread,
      qt_meta_data_SerialThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialThread))
        return static_cast<void*>(const_cast< SerialThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SerialThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SerialThread::portList(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialThread::newData(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SerialThread::baudSetting(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_SerialPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      29,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   11,   11,   11, 0x0a,
      60,   11,   11,   11, 0x0a,
      70,   67,   11,   11, 0x0a,
     103,   98,   11,   11, 0x0a,
     122,  119,   11,   11, 0x0a,
     154,  148,   11,   11, 0x0a,
     171,   11,   11,   11, 0x0a,
     212,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SerialPage[] = {
    "SerialPage\0\0newBaudRate(int)\0"
    "sendCommand(QByteArray)\0show()\0hide()\0"
    "pl\0updatePortList(QStringList)\0baud\0"
    "updateBaud(int)\0ba\0consoleUpdate(QByteArray)\0"
    "index\0setBaudRate(int)\0"
    "on_ui_commandLineEdit_selectionChanged()\0"
    "on_ui_sendButton_clicked()\0"
};

void SerialPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialPage *_t = static_cast<SerialPage *>(_o);
        switch (_id) {
        case 0: _t->newBaudRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendCommand((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->show(); break;
        case 3: _t->hide(); break;
        case 4: _t->updatePortList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->updateBaud((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->consoleUpdate((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_ui_commandLineEdit_selectionChanged(); break;
        case 9: _t->on_ui_sendButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialPage::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_SerialPage,
      qt_meta_data_SerialPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPage))
        return static_cast<void*>(const_cast< SerialPage*>(this));
    return Page::qt_metacast(_clname);
}

int SerialPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SerialPage::newBaudRate(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialPage::sendCommand(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
