/****************************************************************************
** Meta object code from reading C++ file 'Upgrader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/entities/Upgrader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Upgrader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Upgrader_t {
    QByteArrayData data[9];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Upgrader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Upgrader_t qt_meta_stringdata_Upgrader = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Upgrader"
QT_MOC_LITERAL(1, 9, 29), // "upgradableApplicationsChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "UpgradeList"
QT_MOC_LITERAL(4, 52, 22), // "upgradableApplications"
QT_MOC_LITERAL(5, 75, 34), // "handleInstalledApplicationsCh..."
QT_MOC_LITERAL(6, 110, 21), // "installedApplications"
QT_MOC_LITERAL(7, 132, 34), // "handleAvailableApplicationsCh..."
QT_MOC_LITERAL(8, 167, 30) // "QList<QPair<QString,QString> >"

    },
    "Upgrader\0upgradableApplicationsChanged\0"
    "\0UpgradeList\0upgradableApplications\0"
    "handleInstalledApplicationsChanged\0"
    "installedApplications\0"
    "handleAvailableApplicationsChanged\0"
    "QList<QPair<QString,QString> >"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Upgrader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 8, 0x0049500b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Upgrader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Upgrader *_t = static_cast<Upgrader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->upgradableApplicationsChanged((*reinterpret_cast< const UpgradeList(*)>(_a[1]))); break;
        case 1: _t->handleInstalledApplicationsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->handleAvailableApplicationsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Upgrader::*)(const UpgradeList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Upgrader::upgradableApplicationsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Upgrader *_t = static_cast<Upgrader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QPair<QString,QString> >*>(_v) = _t->upgradableApplications; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Upgrader *_t = static_cast<Upgrader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->upgradableApplications != *reinterpret_cast< QList<QPair<QString,QString> >*>(_v)) {
                _t->upgradableApplications = *reinterpret_cast< QList<QPair<QString,QString> >*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Upgrader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Upgrader.data,
      qt_meta_data_Upgrader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Upgrader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Upgrader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Upgrader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Upgrader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Upgrader::upgradableApplicationsChanged(const UpgradeList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
