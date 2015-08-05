/****************************************************************************
** Meta object code from reading C++ file 'beboardregisters.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/beboardregisters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beboardregisters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__BeBoardRegisters[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      49,   22,   22,   22, 0x05,
      73,   22,   22,   22, 0x05,
     105,   90,   22,   22, 0x05,
     173,   90,   22,   22, 0x05,
     234,   22,   22,   22, 0x05,
     282,  271,   22,   22, 0x05,
     333,  326,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GUI__BeBoardRegisters[] = {
    "GUI::BeBoardRegisters\0\0createInitialBeBoardMap()\0"
    "getInitialBeRegValues()\0getBeRegValues()\0"
    "idSh,idBe,cMap\0"
    "sendInitialBeBoardRegValues(int,int,std::map<std::string,uint32_t>)\0"
    "sendBeBoardRegValues(int,int,std::map<std::string,uint32_t>)\0"
    "finishedInitialiseBeBoardRegValues()\0"
    "idSh,idBe,\0writeBeRegisters(int,int,QMap<QString,int>)\0"
    "enable\0globalEnable(bool)\0"
};

void GUI::BeBoardRegisters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BeBoardRegisters *_t = static_cast<BeBoardRegisters *>(_o);
        switch (_id) {
        case 0: _t->createInitialBeBoardMap(); break;
        case 1: _t->getInitialBeRegValues(); break;
        case 2: _t->getBeRegValues(); break;
        case 3: _t->sendInitialBeBoardRegValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const std::map<std::string,uint32_t>(*)>(_a[3]))); break;
        case 4: _t->sendBeBoardRegValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const std::map<std::string,uint32_t>(*)>(_a[3]))); break;
        case 5: _t->finishedInitialiseBeBoardRegValues(); break;
        case 6: _t->writeBeRegisters((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< QMap<QString,int>(*)>(_a[3]))); break;
        case 7: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::BeBoardRegisters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::BeBoardRegisters::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__BeBoardRegisters,
      qt_meta_data_GUI__BeBoardRegisters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::BeBoardRegisters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::BeBoardRegisters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::BeBoardRegisters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__BeBoardRegisters))
        return static_cast<void*>(const_cast< BeBoardRegisters*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::BeBoardRegisters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GUI::BeBoardRegisters::createInitialBeBoardMap()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GUI::BeBoardRegisters::getInitialBeRegValues()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::BeBoardRegisters::getBeRegValues()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::BeBoardRegisters::sendInitialBeBoardRegValues(const int _t1, const int _t2, const std::map<std::string,uint32_t> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GUI::BeBoardRegisters::sendBeBoardRegValues(const int _t1, const int _t2, const std::map<std::string,uint32_t> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GUI::BeBoardRegisters::finishedInitialiseBeBoardRegValues()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void GUI::BeBoardRegisters::writeBeRegisters(const int _t1, const int _t2, QMap<QString,int> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GUI::BeBoardRegisters::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
