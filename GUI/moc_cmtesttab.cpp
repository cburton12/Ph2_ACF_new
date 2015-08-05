/****************************************************************************
** Meta object code from reading C++ file 'cmtesttab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "View/cmtesttab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmtesttab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__CmTestTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   16,   15,   15, 0x05,
      42,   15,   15,   15, 0x05,
      56,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   16,   15,   15, 0x0a,
      86,   15,   15,   15, 0x0a,
     103,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI__CmTestTab[] = {
    "GUI::CmTestTab\0\0enable\0globalEnable(bool)\0"
    "startCmTest()\0sendIsScan(bool)\0"
    "enable(bool)\0getIsNoiseScan()\0"
    "on_btnLaunch_clicked()\0"
};

void GUI::CmTestTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CmTestTab *_t = static_cast<CmTestTab *>(_o);
        switch (_id) {
        case 0: _t->globalEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->startCmTest(); break;
        case 2: _t->sendIsScan((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->getIsNoiseScan(); break;
        case 5: _t->on_btnLaunch_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::CmTestTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::CmTestTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GUI__CmTestTab,
      qt_meta_data_GUI__CmTestTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::CmTestTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::CmTestTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::CmTestTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__CmTestTab))
        return static_cast<void*>(const_cast< CmTestTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int GUI::CmTestTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void GUI::CmTestTab::globalEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::CmTestTab::startCmTest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::CmTestTab::sendIsScan(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
