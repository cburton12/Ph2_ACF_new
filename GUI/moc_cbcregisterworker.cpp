/****************************************************************************
** Meta object code from reading C++ file 'cbcregisterworker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/cbcregisterworker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cbcregisterworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__CbcRegisterWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   24,   23,   23, 0x05,
      79,   50,   23,   23, 0x05,
     158,   50,   23,   23, 0x05,
     230,   23,   23,   23, 0x05,
     246,   23,   23,   23, 0x05,
     267,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     306,  278,   23,   23, 0x0a,
     391,   23,   23,   23, 0x0a,
     419,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__CbcRegisterWorker[] = {
    "GUI::CbcRegisterWorker\0\0enable\0"
    "globalEnable(bool)\0idBe,idFe,idFmc,idCbc,mapReg\0"
    "sendInitialCbcRegisterValues(int,int,int,int,std::map<std::string,CbcR"
    "egItem>)\0"
    "sendCbcRegisterValues(int,int,int,int,std::map<std::string,CbcRegItem>"
    ")\0"
    "workRequested()\0finishedInitCbcReg()\0"
    "finished()\0idSh,idBe,idFe,idCbc,mapReg\0"
    "writeCbcRegisters(int,int,int,int,std::vector<std::pair<std::string,st"
    "d::uint8_t> >)\0"
    "getInitialCbcRegistersMap()\0"
    "getCbcRegistersMap()\0"
};

void GUI::CbcRegisterWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CbcRegisterWorker *_t = static_cast<CbcRegisterWorker *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sendInitialCbcRegisterValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const std::map<std::string,CbcRegItem>(*)>(_a[5]))); break;
        case 2: _t->sendCbcRegisterValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const std::map<std::string,CbcRegItem>(*)>(_a[5]))); break;
        case 3: _t->workRequested(); break;
        case 4: _t->finishedInitCbcReg(); break;
        case 5: _t->finished(); break;
        case 6: _t->writeCbcRegisters((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< std::vector<std::pair<std::string,std::uint8_t> >(*)>(_a[5]))); break;
        case 7: _t->getInitialCbcRegistersMap(); break;
        case 8: _t->getCbcRegistersMap(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::CbcRegisterWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::CbcRegisterWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__CbcRegisterWorker,
      qt_meta_data_GUI__CbcRegisterWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::CbcRegisterWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::CbcRegisterWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::CbcRegisterWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__CbcRegisterWorker))
        return static_cast<void*>(const_cast< CbcRegisterWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::CbcRegisterWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void GUI::CbcRegisterWorker::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::CbcRegisterWorker::sendInitialCbcRegisterValues(const int _t1, const int _t2, const int _t3, const int _t4, const std::map<std::string,CbcRegItem> _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::CbcRegisterWorker::sendCbcRegisterValues(const int _t1, const int _t2, const int _t3, const int _t4, const std::map<std::string,CbcRegItem> _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUI::CbcRegisterWorker::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GUI::CbcRegisterWorker::finishedInitCbcReg()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GUI::CbcRegisterWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
