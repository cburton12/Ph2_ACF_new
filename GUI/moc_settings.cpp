/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__Settings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      42,   32,   14,   14, 0x05,
      73,   58,   14,   14, 0x05,
     114,   93,   14,   14, 0x05,
     143,  139,   14,   14, 0x05,
     180,  172,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     216,  211,   14,   14, 0x0a,
     252,  242,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__Settings[] = {
    "GUI::Settings\0\0idSh\0sendSh(int)\0"
    "idSh,idBe\0sendBe(int,int)\0idSh,idBe,idFe\0"
    "sendFe(int,int,int)\0idSh,idBe,idFe,idCbc\0"
    "sendCbc(int,int,int,int)\0msg\0"
    "notifyStatusMessage(QString)\0hwItems\0"
    "setHwTree(QStandardItemModel*)\0cbc2\0"
    "onLoadButtonClicked(bool)\0cfileName\0"
    "onCustomLoadButtonClicked(QString)\0"
};

void GUI::Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->sendSh((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->sendBe((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->sendFe((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 3: _t->sendCbc((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 4: _t->notifyStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setHwTree((*reinterpret_cast< QStandardItemModel*(*)>(_a[1]))); break;
        case 6: _t->onLoadButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onCustomLoadButtonClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::Settings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::Settings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__Settings,
      qt_meta_data_GUI__Settings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::Settings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__Settings))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void GUI::Settings::sendSh(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::Settings::sendBe(const int _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::Settings::sendFe(const int _t1, const int _t2, const int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUI::Settings::sendCbc(const int _t1, const int _t2, const int _t3, const int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GUI::Settings::notifyStatusMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GUI::Settings::setHwTree(QStandardItemModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE