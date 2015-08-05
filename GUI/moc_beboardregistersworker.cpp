/****************************************************************************
** Meta object code from reading C++ file 'beboardregistersworker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/beboardregistersworker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beboardregistersworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__BeBoardRegistersWorker[] = {

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
      29,   28,   28,   28, 0x05,
      60,   45,   28,   28, 0x05,
     128,   45,   28,   28, 0x05,
     189,   28,   28,   28, 0x05,
     200,   28,   28,   28, 0x05,
     244,  237,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     263,   45,   28,   28, 0x0a,
     307,   28,   28,   28, 0x0a,
     333,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__BeBoardRegistersWorker[] = {
    "GUI::BeBoardRegistersWorker\0\0"
    "workRequested()\0idSh,idBe,cMap\0"
    "sendInitialBeBoardRegValues(int,int,std::map<std::string,uint32_t>)\0"
    "sendBeBoardRegValues(int,int,std::map<std::string,uint32_t>)\0"
    "finished()\0finishedInitialiseBeBoardRegValues()\0"
    "enable\0globalEnable(bool)\0"
    "writeBeRegisters(int,int,QMap<QString,int>)\0"
    "getInitialBeBoardRegMap()\0getBeBoardRegMap()\0"
};

void GUI::BeBoardRegistersWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BeBoardRegistersWorker *_t = static_cast<BeBoardRegistersWorker *>(_o);
        switch (_id) {
        case 0: _t->workRequested(); break;
        case 1: _t->sendInitialBeBoardRegValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const std::map<std::string,uint32_t>(*)>(_a[3]))); break;
        case 2: _t->sendBeBoardRegValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const std::map<std::string,uint32_t>(*)>(_a[3]))); break;
        case 3: _t->finished(); break;
        case 4: _t->finishedInitialiseBeBoardRegValues(); break;
        case 5: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->writeBeRegisters((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< QMap<QString,int>(*)>(_a[3]))); break;
        case 7: _t->getInitialBeBoardRegMap(); break;
        case 8: _t->getBeBoardRegMap(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::BeBoardRegistersWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::BeBoardRegistersWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__BeBoardRegistersWorker,
      qt_meta_data_GUI__BeBoardRegistersWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::BeBoardRegistersWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::BeBoardRegistersWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::BeBoardRegistersWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__BeBoardRegistersWorker))
        return static_cast<void*>(const_cast< BeBoardRegistersWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::BeBoardRegistersWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GUI::BeBoardRegistersWorker::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GUI::BeBoardRegistersWorker::sendInitialBeBoardRegValues(const int _t1, const int _t2, const std::map<std::string,uint32_t> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::BeBoardRegistersWorker::sendBeBoardRegValues(const int _t1, const int _t2, const std::map<std::string,uint32_t> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUI::BeBoardRegistersWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GUI::BeBoardRegistersWorker::finishedInitialiseBeBoardRegValues()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GUI::BeBoardRegistersWorker::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
