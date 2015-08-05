/****************************************************************************
** Meta object code from reading C++ file 'setuptabviewmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewMgr/setuptabviewmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setuptabviewmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__SetupTabViewManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   26,   25,   25, 0x05,
      65,   59,   25,   25, 0x05,
      94,   25,   25,   25, 0x05,
     118,  113,   25,   25, 0x05,
     140,  130,   25,   25, 0x05,
     171,  156,   25,   25, 0x05,
     212,  191,   25,   25, 0x05,
     237,   26,   25,   25, 0x05,
     257,   25,   25,   25, 0x05,
     276,   25,   25,   25, 0x05,
     299,   25,   25,   25, 0x05,
     331,   25,   25,   25, 0x05,
     361,   25,   25,   25, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GUI__SetupTabViewManager[] = {
    "GUI::SetupTabViewManager\0\0enable\0"
    "receiveGlobalEnable(bool)\0value\0"
    "notifyStatusUpdated(QString)\0"
    "onBtnLoadClicked()\0idSh\0sendSh(int)\0"
    "idSh,idBe\0sendBe(int,int)\0idSh,idBe,idFe\0"
    "sendFe(int,int,int)\0idSh,idBe,idFe,idCbc\0"
    "sendCbc(int,int,int,int)\0enableAlltabs(bool)\0"
    "on2CbcToggle(bool)\0notifyConfigFinished()\0"
    "sendInitialiseBeRegistersView()\0"
    "sendInitialiseRegistersView()\0"
    "onConfigFinished()\0"
};

void GUI::SetupTabViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SetupTabViewManager *_t = static_cast<SetupTabViewManager *>(_o);
        switch (_id) {
        case 0: _t->receiveGlobalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->notifyStatusUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onBtnLoadClicked(); break;
        case 3: _t->sendSh((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->sendBe((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 5: _t->sendFe((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 6: _t->sendCbc((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 7: _t->enableAlltabs((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 8: _t->on2CbcToggle((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 9: _t->notifyConfigFinished(); break;
        case 10: _t->sendInitialiseBeRegistersView(); break;
        case 11: _t->sendInitialiseRegistersView(); break;
        case 12: _t->onConfigFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::SetupTabViewManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::SetupTabViewManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__SetupTabViewManager,
      qt_meta_data_GUI__SetupTabViewManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::SetupTabViewManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::SetupTabViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::SetupTabViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__SetupTabViewManager))
        return static_cast<void*>(const_cast< SetupTabViewManager*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::SetupTabViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void GUI::SetupTabViewManager::receiveGlobalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::SetupTabViewManager::notifyStatusUpdated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::SetupTabViewManager::onBtnLoadClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::SetupTabViewManager::sendSh(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GUI::SetupTabViewManager::sendBe(const int _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GUI::SetupTabViewManager::sendFe(const int _t1, const int _t2, const int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GUI::SetupTabViewManager::sendCbc(const int _t1, const int _t2, const int _t3, const int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GUI::SetupTabViewManager::enableAlltabs(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GUI::SetupTabViewManager::on2CbcToggle(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GUI::SetupTabViewManager::notifyConfigFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void GUI::SetupTabViewManager::sendInitialiseBeRegistersView()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void GUI::SetupTabViewManager::sendInitialiseRegistersView()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void GUI::SetupTabViewManager::onConfigFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}
QT_END_MOC_NAMESPACE
