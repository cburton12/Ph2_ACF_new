/****************************************************************************
** Meta object code from reading C++ file 'hybridtestworker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/hybridtestworker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hybridtestworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__HybridTestWorker[] = {

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
      30,   23,   22,   22, 0x05,
      49,   22,   22,   22, 0x05,
      65,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__HybridTestWorker[] = {
    "GUI::HybridTestWorker\0\0enable\0"
    "globalEnable(bool)\0workRequested()\0"
    "finished()\0doWork()\0"
};

void GUI::HybridTestWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HybridTestWorker *_t = static_cast<HybridTestWorker *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->workRequested(); break;
        case 2: _t->finished(); break;
        case 3: _t->doWork(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::HybridTestWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::HybridTestWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__HybridTestWorker,
      qt_meta_data_GUI__HybridTestWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::HybridTestWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::HybridTestWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::HybridTestWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__HybridTestWorker))
        return static_cast<void*>(const_cast< HybridTestWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::HybridTestWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GUI::HybridTestWorker::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::HybridTestWorker::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::HybridTestWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
