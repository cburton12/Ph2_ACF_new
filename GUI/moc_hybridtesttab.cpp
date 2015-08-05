/****************************************************************************
** Meta object code from reading C++ file 'hybridtesttab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "View/hybridtesttab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hybridtesttab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__HybridTestTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   20,   19,   19, 0x05,
      46,   19,   19,   19, 0x05,
      70,   64,   19,   19, 0x05,
      97,   89,   19,   19, 0x05,
     119,   19,   19,   19, 0x05,
     146,   19,   19,   19, 0x05,
     170,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     198,   20,   19,   19, 0x0a,
     211,   19,   19,   19, 0x0a,
     230,   19,   19,   19, 0x0a,
     246,   19,   19,   19, 0x0a,
     268,   19,   19,   19, 0x0a,
     287,   19,   19,   19, 0x0a,
     310,   19,   19,   19, 0x08,
     341,  332,   19,   19, 0x08,
     370,   19,   19,   19, 0x08,
     399,  332,   19,   19, 0x08,
     430,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI__HybridTestTab[] = {
    "GUI::HybridTestTab\0\0enable\0"
    "globalEnable(bool)\0startHybridTest()\0"
    "cVcth\0sendVcthValue(int)\0cEvents\0"
    "sendEventsNumber(int)\0sendIsRegTestChecked(bool)\0"
    "sendIsScanChecked(bool)\0"
    "sendIsHoleModeChecked(bool)\0enable(bool)\0"
    "getVcthDialValue()\0getEventsDial()\0"
    "getIsRegTestChecked()\0getIsScanChecked()\0"
    "getIsHoleModeChecked()\0on_btnStart_clicked()\0"
    "position\0on_dialVcth_sliderMoved(int)\0"
    "on_txtVcth_editingFinished()\0"
    "on_dialEvents_sliderMoved(int)\0"
    "on_txtEvents_editingFinished()\0"
};

void GUI::HybridTestTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HybridTestTab *_t = static_cast<HybridTestTab *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->startHybridTest(); break;
        case 2: _t->sendVcthValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendEventsNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendIsRegTestChecked((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->sendIsScanChecked((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->sendIsHoleModeChecked((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->getVcthDialValue(); break;
        case 9: _t->getEventsDial(); break;
        case 10: _t->getIsRegTestChecked(); break;
        case 11: _t->getIsScanChecked(); break;
        case 12: _t->getIsHoleModeChecked(); break;
        case 13: _t->on_btnStart_clicked(); break;
        case 14: _t->on_dialVcth_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_txtVcth_editingFinished(); break;
        case 16: _t->on_dialEvents_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_txtEvents_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::HybridTestTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::HybridTestTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GUI__HybridTestTab,
      qt_meta_data_GUI__HybridTestTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::HybridTestTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::HybridTestTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::HybridTestTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__HybridTestTab))
        return static_cast<void*>(const_cast< HybridTestTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int GUI::HybridTestTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void GUI::HybridTestTab::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::HybridTestTab::startHybridTest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::HybridTestTab::sendVcthValue(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUI::HybridTestTab::sendEventsNumber(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GUI::HybridTestTab::sendIsRegTestChecked(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GUI::HybridTestTab::sendIsScanChecked(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GUI::HybridTestTab::sendIsHoleModeChecked(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
