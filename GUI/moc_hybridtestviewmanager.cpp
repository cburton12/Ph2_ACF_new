/****************************************************************************
** Meta object code from reading C++ file 'hybridtestviewmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewMgr/hybridtestviewmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hybridtestviewmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__HybridTestViewManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   28,   27,   27, 0x05,
      58,   28,   27,   27, 0x05,
      84,   27,   27,   27, 0x05,
     104,   27,   27,   27, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GUI__HybridTestViewManager[] = {
    "GUI::HybridTestViewManager\0\0enable\0"
    "sendGlobalEnable(bool)\0receiveGlobalEnable(bool)\0"
    "startedHybridTest()\0finishedHybridTest()\0"
};

void GUI::HybridTestViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HybridTestViewManager *_t = static_cast<HybridTestViewManager *>(_o);
        switch (_id) {
        case 0: _t->sendGlobalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->receiveGlobalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->startedHybridTest(); break;
        case 3: _t->finishedHybridTest(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::HybridTestViewManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::HybridTestViewManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__HybridTestViewManager,
      qt_meta_data_GUI__HybridTestViewManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::HybridTestViewManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::HybridTestViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::HybridTestViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__HybridTestViewManager))
        return static_cast<void*>(const_cast< HybridTestViewManager*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::HybridTestViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GUI::HybridTestViewManager::sendGlobalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::HybridTestViewManager::receiveGlobalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::HybridTestViewManager::startedHybridTest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::HybridTestViewManager::finishedHybridTest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
