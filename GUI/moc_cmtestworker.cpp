/****************************************************************************
** Meta object code from reading C++ file 'cmtestworker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/cmtestworker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmtestworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__CmTestWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   19,   18,   18, 0x05,
      45,   18,   18,   18, 0x05,
      61,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__CmTestWorker[] = {
    "GUI::CmTestWorker\0\0enable\0globalEnable(bool)\0"
    "workRequested()\0finished()\0doWork()\0"
};

void GUI::CmTestWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CmTestWorker *_t = static_cast<CmTestWorker *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->workRequested(); break;
        case 2: _t->finished(); break;
        case 3: _t->doWork(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::CmTestWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::CmTestWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__CmTestWorker,
      qt_meta_data_GUI__CmTestWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::CmTestWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::CmTestWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::CmTestWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__CmTestWorker))
        return static_cast<void*>(const_cast< CmTestWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::CmTestWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void GUI::CmTestWorker::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::CmTestWorker::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::CmTestWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
