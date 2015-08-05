/****************************************************************************
** Meta object code from reading C++ file 'calibratetab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "View/calibratetab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibratetab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__CalibrateTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      45,   38,   18,   18, 0x05,
      71,   64,   18,   18, 0x05,
     100,   93,   18,   18, 0x05,
     123,  117,   18,   18, 0x05,
     151,  143,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     169,   18,   18,   18, 0x0a,
     186,   18,   18,   18, 0x0a,
     198,   18,   18,   18, 0x0a,
     213,   18,   18,   18, 0x0a,
     226,   38,   18,   18, 0x0a,
     239,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI__CalibrateTab[] = {
    "GUI::CalibrateTab\0\0startCalibration()\0"
    "enable\0globalEnable(bool)\0isFast\0"
    "sendIsFastCalib(bool)\0isScan\0"
    "sendIsScan(bool)\0isBit\0sendIsBitwise(bool)\0"
    "isAllCh\0sendIsAllCh(bool)\0getIsFastCalib()\0"
    "getIsScan()\0getIsBitwise()\0getIsAllCh()\0"
    "enable(bool)\0on_btnCalibrate_clicked()\0"
};

void GUI::CalibrateTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CalibrateTab *_t = static_cast<CalibrateTab *>(_o);
        switch (_id) {
        case 0: _t->startCalibration(); break;
        case 1: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sendIsFastCalib((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sendIsScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sendIsBitwise((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sendIsAllCh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->getIsFastCalib(); break;
        case 7: _t->getIsScan(); break;
        case 8: _t->getIsBitwise(); break;
        case 9: _t->getIsAllCh(); break;
        case 10: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_btnCalibrate_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::CalibrateTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::CalibrateTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GUI__CalibrateTab,
      qt_meta_data_GUI__CalibrateTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::CalibrateTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::CalibrateTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::CalibrateTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__CalibrateTab))
        return static_cast<void*>(const_cast< CalibrateTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int GUI::CalibrateTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void GUI::CalibrateTab::startCalibration()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GUI::CalibrateTab::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::CalibrateTab::sendIsFastCalib(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUI::CalibrateTab::sendIsScan(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GUI::CalibrateTab::sendIsBitwise(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GUI::CalibrateTab::sendIsAllCh(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
