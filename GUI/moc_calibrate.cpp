/****************************************************************************
** Meta object code from reading C++ file 'calibrate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/calibrate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibrate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__Calibrate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      33,   15,   15,   15, 0x05,
      45,   15,   15,   15, 0x05,
      60,   15,   15,   15, 0x05,
      73,   15,   15,   15, 0x05,
      94,   15,   15,   15, 0x05,
     123,  116,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     142,   15,   15,   15, 0x0a,
     168,  163,   15,   15, 0x0a,
     196,  192,   15,   15, 0x0a,
     218,  213,   15,   15, 0x0a,
     240,  237,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__Calibrate[] = {
    "GUI::Calibrate\0\0getIsFastCalib()\0"
    "getIsScan()\0getIsBitwise()\0getIsAllCh()\0"
    "startedCalibration()\0finishedCalibration()\0"
    "enable\0globalEnable(bool)\0"
    "initialiseSettings()\0fast\0"
    "setFastCalibValue(bool)\0bit\0"
    "setBitwise(bool)\0scan\0setScanValue(bool)\0"
    "ch\0setAllChValue(bool)\0"
};

void GUI::Calibrate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Calibrate *_t = static_cast<Calibrate *>(_o);
        switch (_id) {
        case 0: _t->getIsFastCalib(); break;
        case 1: _t->getIsScan(); break;
        case 2: _t->getIsBitwise(); break;
        case 3: _t->getIsAllCh(); break;
        case 4: _t->startedCalibration(); break;
        case 5: _t->finishedCalibration(); break;
        case 6: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->initialiseSettings(); break;
        case 8: _t->setFastCalibValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setBitwise((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setScanValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setAllChValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::Calibrate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::Calibrate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__Calibrate,
      qt_meta_data_GUI__Calibrate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::Calibrate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::Calibrate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::Calibrate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__Calibrate))
        return static_cast<void*>(const_cast< Calibrate*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::Calibrate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void GUI::Calibrate::getIsFastCalib()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GUI::Calibrate::getIsScan()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::Calibrate::getIsBitwise()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::Calibrate::getIsAllCh()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GUI::Calibrate::startedCalibration()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GUI::Calibrate::finishedCalibration()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void GUI::Calibrate::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
