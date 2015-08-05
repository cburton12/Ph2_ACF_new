/****************************************************************************
** Meta object code from reading C++ file 'cmtestviewmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewMgr/cmtestviewmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmtestviewmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__CmTestViewManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   24,   23,   23, 0x05,
      54,   24,   23,   23, 0x05,
      80,   23,   23,   23, 0x05,
      96,   23,   23,   23, 0x05,
     115,   23,   23,   23, 0x05,
     130,   23,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GUI__CmTestViewManager[] = {
    "GUI::CmTestViewManager\0\0enable\0"
    "sendGlobalEnable(bool)\0receiveGlobalEnable(bool)\0"
    "onCmTestStart()\0onCmTestFinished()\0"
    "enableLaunch()\0disableLaunch()\0"
};

void GUI::CmTestViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CmTestViewManager *_t = static_cast<CmTestViewManager *>(_o);
        switch (_id) {
        case 0: _t->sendGlobalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->receiveGlobalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onCmTestStart(); break;
        case 3: _t->onCmTestFinished(); break;
        case 4: _t->enableLaunch(); break;
        case 5: _t->disableLaunch(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::CmTestViewManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::CmTestViewManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__CmTestViewManager,
      qt_meta_data_GUI__CmTestViewManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::CmTestViewManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::CmTestViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::CmTestViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__CmTestViewManager))
        return static_cast<void*>(const_cast< CmTestViewManager*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::CmTestViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GUI::CmTestViewManager::sendGlobalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::CmTestViewManager::receiveGlobalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::CmTestViewManager::onCmTestStart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::CmTestViewManager::onCmTestFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GUI::CmTestViewManager::enableLaunch()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GUI::CmTestViewManager::disableLaunch()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
