/****************************************************************************
** Meta object code from reading C++ file 'mainview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "View/mainview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__MainView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   15,   14,   14, 0x0a,
      46,   14,   14,   14, 0x08,
      73,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI__MainView[] = {
    "GUI::MainView\0\0enable\0enableAllTabsSlot(bool)\0"
    "on_actionAbout_triggered()\0"
    "on_actionUser_Settings_triggered()\0"
};

void GUI::MainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainView *_t = static_cast<MainView *>(_o);
        switch (_id) {
        case 0: _t->enableAllTabsSlot((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->on_actionAbout_triggered(); break;
        case 2: _t->on_actionUser_Settings_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::MainView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::MainView::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GUI__MainView,
      qt_meta_data_GUI__MainView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::MainView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::MainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::MainView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__MainView))
        return static_cast<void*>(const_cast< MainView*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GUI::MainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
