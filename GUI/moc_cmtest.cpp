/****************************************************************************
** Meta object code from reading C++ file 'cmtest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/cmtest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__CmTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x05,
      39,   12,   12,   12, 0x05,
      51,   12,   12,   12, 0x05,
      67,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   12,   12,   12, 0x0a,
     115,  105,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__CmTest[] = {
    "GUI::CmTest\0\0enable\0globalEnable(bool)\0"
    "getIsScan()\0startedCmTest()\0"
    "finishedCmTest()\0initialiseSettings()\0"
    "scanNoise\0setIsScan(bool)\0"
};

void GUI::CmTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CmTest *_t = static_cast<CmTest *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->getIsScan(); break;
        case 2: _t->startedCmTest(); break;
        case 3: _t->finishedCmTest(); break;
        case 4: _t->initialiseSettings(); break;
        case 5: _t->setIsScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::CmTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::CmTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__CmTest,
      qt_meta_data_GUI__CmTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::CmTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::CmTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::CmTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__CmTest))
        return static_cast<void*>(const_cast< CmTest*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::CmTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GUI::CmTest::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::CmTest::getIsScan()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::CmTest::startedCmTest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GUI::CmTest::finishedCmTest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
