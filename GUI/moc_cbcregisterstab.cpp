/****************************************************************************
** Meta object code from reading C++ file 'cbcregisterstab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "View/cbcregisterstab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cbcregisterstab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__CbcRegistersTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x05,
      48,   21,   21,   21, 0x05,
      90,   70,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     175,   21,   21,   21, 0x0a,
     183,   22,   21,   21, 0x0a,
     201,  196,   21,   21, 0x0a,
     227,  217,   21,   21, 0x0a,
     262,  247,   21,   21, 0x0a,
     307,  286,   21,   21, 0x0a,
     368,  340,   21,   21, 0x0a,
     441,  340,   21,   21, 0x0a,
     520,  515,   21,   21, 0x08,
     544,   21,   21,   21, 0x08,
     568,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI__CbcRegistersTab[] = {
    "GUI::CbcRegistersTab\0\0enable\0"
    "globalEnable(bool)\0refreshCbcRegisters()\0"
    "idSh,idBe,idFe,cbc,\0"
    "writeCbcRegisters(int,int,int,int,std::vector<std::pair<std::string,st"
    "d::uint8_t> >)\0"
    "reset()\0enable(bool)\0idSh\0setupShTab(int)\0"
    "idSh,idBe\0setupBeTab(int,int)\0"
    "idSh,idBe,idFe\0setupFeTab(int,int,int)\0"
    "idSh,idBe,idFe,idCbc\0"
    "setupCbcRegGrid(int,int,int,int)\0"
    "idSh,idBe,idFe,idCbc,mapReg\0"
    "createCbcRegisterValue(int,int,int,int,std::map<std::string,CbcRegItem"
    ">)\0"
    "updateCbcRegisterValues(int,int,int,int,std::map<std::string,CbcRegIte"
    "m>)\0"
    "cMsg\0onValueChanged(QString)\0"
    "on_btnRefresh_clicked()\0on_btnWrite_clicked()\0"
};

void GUI::CbcRegistersTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CbcRegistersTab *_t = static_cast<CbcRegistersTab *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->refreshCbcRegisters(); break;
        case 2: _t->writeCbcRegisters((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< std::vector<std::pair<std::string,std::uint8_t> >(*)>(_a[5]))); break;
        case 3: _t->reset(); break;
        case 4: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setupShTab((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->setupBeTab((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->setupFeTab((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 8: _t->setupCbcRegGrid((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 9: _t->createCbcRegisterValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const std::map<std::string,CbcRegItem>(*)>(_a[5]))); break;
        case 10: _t->updateCbcRegisterValues((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const std::map<std::string,CbcRegItem>(*)>(_a[5]))); break;
        case 11: _t->onValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_btnRefresh_clicked(); break;
        case 13: _t->on_btnWrite_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::CbcRegistersTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::CbcRegistersTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GUI__CbcRegistersTab,
      qt_meta_data_GUI__CbcRegistersTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::CbcRegistersTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::CbcRegistersTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::CbcRegistersTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__CbcRegistersTab))
        return static_cast<void*>(const_cast< CbcRegistersTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int GUI::CbcRegistersTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void GUI::CbcRegistersTab::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::CbcRegistersTab::refreshCbcRegisters()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::CbcRegistersTab::writeCbcRegisters(const int _t1, const int _t2, const int _t3, const int _t4, std::vector<std::pair<std::string,std::uint8_t> > _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
