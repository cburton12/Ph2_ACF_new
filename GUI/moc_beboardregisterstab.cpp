/****************************************************************************
** Meta object code from reading C++ file 'beboardregisterstab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "View/beboardregisterstab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beboardregisterstab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__BeBoardRegistersTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      55,   44,   25,   25, 0x05,
     106,   99,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,   25,   25,   25, 0x0a,
     133,   99,   25,   25, 0x0a,
     151,  146,   25,   25, 0x0a,
     174,  164,   25,   25, 0x0a,
     208,  191,   25,   25, 0x0a,
     276,  191,   25,   25, 0x0a,
     345,   25,   25,   25, 0x08,
     369,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI__BeBoardRegistersTab[] = {
    "GUI::BeBoardRegistersTab\0\0refreshBeValues()\0"
    "idSh,idBe,\0writeBeRegisters(int,int,QMap<QString,int>)\0"
    "enable\0globalEnable(bool)\0reset()\0"
    "enable(bool)\0idSh\0setupSh(int)\0idSh,idBe\0"
    "setupBe(int,int)\0idSh,idBe,mapReg\0"
    "createBeBoardRegisterValues(int,int,std::map<std::string,uint32_t>)\0"
    "refreshBeBoardRegisterValues(int,int,std::map<std::string,uint32_t>)\0"
    "on_btnRefresh_clicked()\0on_btnWrite_clicked()\0"
};

void GUI::BeBoardRegistersTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BeBoardRegistersTab *_t = static_cast<BeBoardRegistersTab *>(_o);
        switch (_id) {
        case 0: _t->refreshBeValues(); break;
        case 1: _t->writeBeRegisters((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< QMap<QString,int>(*)>(_a[3]))); break;
        case 2: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setupSh((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->setupBe((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->createBeBoardRegisterValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const std::map<std::string,uint32_t>(*)>(_a[3]))); break;
        case 8: _t->refreshBeBoardRegisterValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const std::map<std::string,uint32_t>(*)>(_a[3]))); break;
        case 9: _t->on_btnRefresh_clicked(); break;
        case 10: _t->on_btnWrite_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::BeBoardRegistersTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::BeBoardRegistersTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GUI__BeBoardRegistersTab,
      qt_meta_data_GUI__BeBoardRegistersTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::BeBoardRegistersTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::BeBoardRegistersTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::BeBoardRegistersTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__BeBoardRegistersTab))
        return static_cast<void*>(const_cast< BeBoardRegistersTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int GUI::BeBoardRegistersTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GUI::BeBoardRegistersTab::refreshBeValues()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GUI::BeBoardRegistersTab::writeBeRegisters(const int _t1, const int _t2, QMap<QString,int> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::BeBoardRegistersTab::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
