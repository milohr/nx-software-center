/****************************************************************************
** Meta object code from reading C++ file 'UpgraderController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ui/UpgraderController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpgraderController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpgraderController_t {
    QByteArrayData data[14];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpgraderController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpgraderController_t qt_meta_stringdata_UpgraderController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UpgraderController"
QT_MOC_LITERAL(1, 19, 29), // "upgradableApplicationsChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 22), // "upgradableApplications"
QT_MOC_LITERAL(4, 73, 12), // "modelChanged"
QT_MOC_LITERAL(5, 86, 24), // "const UpgradesListModel*"
QT_MOC_LITERAL(6, 111, 7), // "upgrade"
QT_MOC_LITERAL(7, 119, 11), // "appCodeName"
QT_MOC_LITERAL(8, 131, 8), // "oldAppId"
QT_MOC_LITERAL(9, 140, 8), // "newAppId"
QT_MOC_LITERAL(10, 149, 35), // "handleUpgradableApplicationsC..."
QT_MOC_LITERAL(11, 185, 11), // "UpgradeList"
QT_MOC_LITERAL(12, 197, 5), // "model"
QT_MOC_LITERAL(13, 203, 18) // "UpgradesListModel*"

    },
    "UpgraderController\0upgradableApplicationsChanged\0"
    "\0upgradableApplications\0modelChanged\0"
    "const UpgradesListModel*\0upgrade\0"
    "appCodeName\0oldAppId\0newAppId\0"
    "handleUpgradableApplicationsChanged\0"
    "UpgradeList\0model\0UpgradesListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpgraderController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   45,    2, 0x0a /* Public */,
       6,    2,   48,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 5,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 11,    3,

 // properties: name, type, flags
       3, QMetaType::QStringList, 0x00495003,
      12, 0x80000000 | 13, 0x0049500b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void UpgraderController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpgraderController *_t = static_cast<UpgraderController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->upgradableApplicationsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->modelChanged((*reinterpret_cast< const UpgradesListModel*(*)>(_a[1]))); break;
        case 2: _t->upgrade((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->upgrade((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->handleUpgradableApplicationsChanged((*reinterpret_cast< const UpgradeList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpgraderController::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpgraderController::upgradableApplicationsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UpgraderController::*)(const UpgradesListModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpgraderController::modelChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpgradesListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UpgraderController *_t = static_cast<UpgraderController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->upgradableApplications; break;
        case 1: *reinterpret_cast< UpgradesListModel**>(_v) = _t->model; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        UpgraderController *_t = static_cast<UpgraderController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->upgradableApplications != *reinterpret_cast< QStringList*>(_v)) {
                _t->upgradableApplications = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT _t->upgradableApplicationsChanged(_t->upgradableApplications);
            }
            break;
        case 1:
            if (_t->model != *reinterpret_cast< UpgradesListModel**>(_v)) {
                _t->model = *reinterpret_cast< UpgradesListModel**>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UpgraderController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UpgraderController.data,
      qt_meta_data_UpgraderController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UpgraderController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpgraderController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpgraderController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UpgraderController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UpgraderController::upgradableApplicationsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UpgraderController::modelChanged(const UpgradesListModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
