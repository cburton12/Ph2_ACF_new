/****************************************************************************
** Meta object code from reading C++ file 'hybridtest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/hybridtest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hybridtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__HybridTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   17,   16,   16, 0x05,
      43,   16,   16,   16, 0x05,
      58,   16,   16,   16, 0x05,
      75,   16,   16,   16, 0x05,
      97,   16,   16,   16, 0x05,
     116,   16,   16,   16, 0x05,
     139,   16,   16,   16, 0x05,
     159,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     180,   16,   16,   16, 0x0a,
     207,  201,   16,   16, 0x0a,
     233,  225,   16,   16, 0x0a,
     261,  253,   16,   16, 0x0a,
     293,  278,   16,   16, 0x0a,
     325,  316,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__HybridTest[] = {
    "GUI::HybridTest\0\0enable\0globalEnable(bool)\0"
    "getVcthValue()\0getEventsValue()\0"
    "getIsRegTestChecked()\0getIsScanChecked()\0"
    "getIsHoleModeChecked()\0startedHybridTest()\0"
    "finishedHybridTest()\0initialiseSettings()\0"
    "cVcth\0setVcthValue(int)\0cEvents\0"
    "setEventsValue(int)\0testReg\0"
    "setTestReg(bool)\0scanThreshhold\0"
    "setScanThreshold(bool)\0holeMode\0"
    "setHoleMode(bool)\0"
};

void GUI::HybridTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HybridTest *_t = static_cast<HybridTest *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->getVcthValue(); break;
        case 2: _t->getEventsValue(); break;
        case 3: _t->getIsRegTestChecked(); break;
        case 4: _t->getIsScanChecked(); break;
        case 5: _t->getIsHoleModeChecked(); break;
        case 6: _t->startedHybridTest(); break;
        case 7: _t->finishedHybridTest(); break;
        case 8: _t->initialiseSettings(); break;
        case 9: _t->setVcthValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setEventsValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setTestReg((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->setScanThreshold((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 13: _t->setHoleMode((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::HybridTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::HybridTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__HybridTest,
      qt_meta_data_GUI__HybridTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::HybridTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::HybridTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::HybridTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__HybridTest))
        return static_cast<void*>(const_cast< HybridTest*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::HybridTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void GUI::HybridTest::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::HybridTest::getVcthValue()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::HybridTest::getEventsValue()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::HybridTest::getIsRegTestChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GUI::HybridTest::getIsScanChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GUI::HybridTest::getIsHoleModeChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void GUI::HybridTest::startedHybridTest()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void GUI::HybridTest::finishedHybridTest()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
