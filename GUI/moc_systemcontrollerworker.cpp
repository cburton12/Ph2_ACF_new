/****************************************************************************
** Meta object code from reading C++ file 'systemcontrollerworker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/systemcontrollerworker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemcontrollerworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__SystemControllerWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      45,   28,   28,   28, 0x05,
      72,   28,   28,   28, 0x05,
      95,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   28,   28,   28, 0x0a,
     134,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__SystemControllerWorker[] = {
    "GUI::SystemControllerWorker\0\0"
    "workRequested()\0workConfigureHwRequested()\0"
    "finishedInitialiseHw()\0finishedConfigureHw()\0"
    "onInitialiseHw()\0onConfigureHw()\0"
};

void GUI::SystemControllerWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemControllerWorker *_t = static_cast<SystemControllerWorker *>(_o);
        switch (_id) {
        case 0: _t->workRequested(); break;
        case 1: _t->workConfigureHwRequested(); break;
        case 2: _t->finishedInitialiseHw(); break;
        case 3: _t->finishedConfigureHw(); break;
        case 4: _t->onInitialiseHw(); break;
        case 5: _t->onConfigureHw(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GUI::SystemControllerWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::SystemControllerWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__SystemControllerWorker,
      qt_meta_data_GUI__SystemControllerWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::SystemControllerWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::SystemControllerWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::SystemControllerWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__SystemControllerWorker))
        return static_cast<void*>(const_cast< SystemControllerWorker*>(this));
    if (!strcmp(_clname, "Tool"))
        return static_cast< Tool*>(const_cast< SystemControllerWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::SystemControllerWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void GUI::SystemControllerWorker::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GUI::SystemControllerWorker::workConfigureHwRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::SystemControllerWorker::finishedInitialiseHw()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::SystemControllerWorker::finishedConfigureHw()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
