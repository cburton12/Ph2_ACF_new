/****************************************************************************
** Meta object code from reading C++ file 'cbcregisters.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/cbcregisters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cbcregisters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__CbcRegisters[] = {

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
      26,   19,   18,   18, 0x05,
      45,   18,   18,   18, 0x05,
     105,   76,   18,   18, 0x05,
     183,   76,   18,   18, 0x05,
     255,   18,   18,   18, 0x05,
     298,  276,   18,   18, 0x05,
     383,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GUI__CbcRegisters[] = {
    "GUI::CbcRegisters\0\0enable\0globalEnable(bool)\0"
    "createInitialCbcRegistersMap()\0"
    "idBe,idFe,idFmc,idCbc,mapReg\0"
    "sendInitialCbcRegisterValue(int,int,int,int,std::map<std::string,CbcRe"
    "gItem>)\0"
    "sendCbcRegisterValues(int,int,int,int,std::map<std::string,CbcRegItem>"
    ")\0"
    "finishedInitCbcReg()\0idSh,idBe,idFe,idCbc,\0"
    "writeCbcRegisters(int,int,int,int,std::vector<std::pair<std::string,st"
    "d::uint8_t> >)\0"
    "getCbcRegistersMap()\0"
};

void GUI::CbcRegisters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CbcRegisters *_t = static_cast<CbcRegisters *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->createInitialCbcRegistersMap(); break;
        case 2: _t->sendInitialCbcRegisterValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const std::map<std::string,CbcRegItem>(*)>(_a[5]))); break;
        case 3: _t->sendCbcRegisterValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const std::map<std::string,CbcRegItem>(*)>(_a[5]))); break;
        case 4: _t->finishedInitCbcReg(); break;
        case 5: _t->writeCbcRegisters((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< std::vector<std::pair<std::string,std::uint8_t> >(*)>(_a[5]))); break;
        case 6: _t->getCbcRegistersMap(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::CbcRegisters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::CbcRegisters::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__CbcRegisters,
      qt_meta_data_GUI__CbcRegisters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::CbcRegisters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::CbcRegisters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::CbcRegisters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__CbcRegisters))
        return static_cast<void*>(const_cast< CbcRegisters*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::CbcRegisters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GUI::CbcRegisters::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::CbcRegisters::createInitialCbcRegistersMap()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::CbcRegisters::sendInitialCbcRegisterValue(const int _t1, const int _t2, const int _t3, const int _t4, const std::map<std::string,CbcRegItem> _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUI::CbcRegisters::sendCbcRegisterValues(const int _t1, const int _t2, const int _t3, const int _t4, const std::map<std::string,CbcRegItem> _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GUI::CbcRegisters::finishedInitCbcReg()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GUI::CbcRegisters::writeCbcRegisters(const int _t1, const int _t2, const int _t3, const int _t4, std::vector<std::pair<std::string,std::uint8_t> > _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GUI::CbcRegisters::getCbcRegistersMap()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
