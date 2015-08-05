/****************************************************************************
** Meta object code from reading C++ file 'beboardregistersviewmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewMgr/beboardregistersviewmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beboardregistersviewmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__BeBoardRegistersViewManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,
      53,   33,   33,   33, 0x05,
      75,   33,   33,   33, 0x05,
     117,  112,   33,   33, 0x05,
     139,  129,   33,   33, 0x05,
     162,  155,   33,   33, 0x05,
     185,  155,   33,   33, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GUI__BeBoardRegistersViewManager[] = {
    "GUI::BeBoardRegistersViewManager\0\0"
    "onBtnLoadClicked()\0initialiseBeRegView()\0"
    "finishedInitialiseBeBoardRegValues()\0"
    "idSh\0sendSh(int)\0idSh,idBe\0sendBe(int,int)\0"
    "enable\0sendGlobalEnable(bool)\0"
    "receiveGlobalEnable(bool)\0"
};

void GUI::BeBoardRegistersViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BeBoardRegistersViewManager *_t = static_cast<BeBoardRegistersViewManager *>(_o);
        switch (_id) {
        case 0: _t->onBtnLoadClicked(); break;
        case 1: _t->initialiseBeRegView(); break;
        case 2: _t->finishedInitialiseBeBoardRegValues(); break;
        case 3: _t->sendSh((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->sendBe((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 5: _t->sendGlobalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->receiveGlobalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::BeBoardRegistersViewManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::BeBoardRegistersViewManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__BeBoardRegistersViewManager,
      qt_meta_data_GUI__BeBoardRegistersViewManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::BeBoardRegistersViewManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::BeBoardRegistersViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::BeBoardRegistersViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__BeBoardRegistersViewManager))
        return static_cast<void*>(const_cast< BeBoardRegistersViewManager*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::BeBoardRegistersViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GUI::BeBoardRegistersViewManager::onBtnLoadClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GUI::BeBoardRegistersViewManager::initialiseBeRegView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::BeBoardRegistersViewManager::finishedInitialiseBeBoardRegValues()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::BeBoardRegistersViewManager::sendSh(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GUI::BeBoardRegistersViewManager::sendBe(const int _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GUI::BeBoardRegistersViewManager::sendGlobalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GUI::BeBoardRegistersViewManager::receiveGlobalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
