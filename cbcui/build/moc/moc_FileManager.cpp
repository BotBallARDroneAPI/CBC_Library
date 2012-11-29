/****************************************************************************
** Meta object code from reading C++ file 'FileManager.h'
**
** Created: Mon Oct 8 15:53:52 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FileManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CopyDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CopyDialog[] = {
    "CopyDialog\0\0copyData()\0"
};

void CopyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CopyDialog *_t = static_cast<CopyDialog *>(_o);
        switch (_id) {
        case 0: _t->copyData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CopyDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CopyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CopyDialog,
      qt_meta_data_CopyDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CopyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CopyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CopyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CopyDialog))
        return static_cast<void*>(const_cast< CopyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CopyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_FileManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x0a,
      63,   13,   12,   12, 0x0a,
     107,   12,   12,   12, 0x0a,
     134,   12,   12,   12, 0x0a,
     162,   12,   12,   12, 0x0a,
     191,   12,   12,   12, 0x0a,
     219,   12,   12,   12, 0x0a,
     246,   12,   12,   12, 0x0a,
     273,   12,   12,   12, 0x0a,
     302,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FileManager[] = {
    "FileManager\0\0index\0"
    "on_ui_directoryBrowser_clicked(QModelIndex)\0"
    "on_ui_directoryBrowser_entered(QModelIndex)\0"
    "on_ui_homeButton_clicked()\0"
    "on_ui_mountButton_clicked()\0"
    "on_ui_actionButton_clicked()\0"
    "on_ui_stageButton_clicked()\0"
    "on_ui_stopButton_clicked()\0"
    "on_ui_copyButton_clicked()\0"
    "on_ui_deleteButton_clicked()\0updateGUI()\0"
};

void FileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileManager *_t = static_cast<FileManager *>(_o);
        switch (_id) {
        case 0: _t->on_ui_directoryBrowser_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_ui_directoryBrowser_entered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_ui_homeButton_clicked(); break;
        case 3: _t->on_ui_mountButton_clicked(); break;
        case 4: _t->on_ui_actionButton_clicked(); break;
        case 5: _t->on_ui_stageButton_clicked(); break;
        case 6: _t->on_ui_stopButton_clicked(); break;
        case 7: _t->on_ui_copyButton_clicked(); break;
        case 8: _t->on_ui_deleteButton_clicked(); break;
        case 9: _t->updateGUI(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileManager::staticMetaObject = {
    { &Page::staticMetaObject, qt_meta_stringdata_FileManager,
      qt_meta_data_FileManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileManager))
        return static_cast<void*>(const_cast< FileManager*>(this));
    return Page::qt_metacast(_clname);
}

int FileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
