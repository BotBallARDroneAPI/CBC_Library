/****************************************************************************
** Meta object code from reading C++ file 'Compiler.h'
**
** Created: Mon Oct 8 15:54:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Compiler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Compiler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Compiler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      30,    9,    9,    9, 0x0a,
      60,   51,    9,    9, 0x0a,
      81,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Compiler[] = {
    "Compiler\0\0readStandardError()\0"
    "readStandardOutput()\0filename\0"
    "compileFile(QString)\0compileFromUSB()\0"
};

void Compiler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Compiler *_t = static_cast<Compiler *>(_o);
        switch (_id) {
        case 0: _t->readStandardError(); break;
        case 1: _t->readStandardOutput(); break;
        case 2: _t->compileFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->compileFromUSB(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Compiler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Compiler::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_Compiler,
      qt_meta_data_Compiler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Compiler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Compiler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Compiler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Compiler))
        return static_cast<void*>(const_cast< Compiler*>(this));
    return Page::qt_metacast(_clname);
}

int Compiler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Page::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
