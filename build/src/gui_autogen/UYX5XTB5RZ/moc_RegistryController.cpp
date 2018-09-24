/****************************************************************************
** Meta object code from reading C++ file 'RegistryController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ui/RegistryController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegistryController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegistryController_t {
    QByteArrayData data[11];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegistryController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegistryController_t qt_meta_stringdata_RegistryController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RegistryController"
QT_MOC_LITERAL(1, 19, 28), // "installedApplicationsChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "installedApplications"
QT_MOC_LITERAL(4, 71, 12), // "modelChanged"
QT_MOC_LITERAL(5, 84, 18), // "RegistryListModel*"
QT_MOC_LITERAL(6, 103, 5), // "model"
QT_MOC_LITERAL(7, 109, 12), // "clearRecords"
QT_MOC_LITERAL(8, 122, 20), // "handleRecordsChanged"
QT_MOC_LITERAL(9, 143, 18), // "QList<QVariantMap>"
QT_MOC_LITERAL(10, 162, 7) // "records"

    },
    "RegistryController\0installedApplicationsChanged\0"
    "\0installedApplications\0modelChanged\0"
    "RegistryListModel*\0model\0clearRecords\0"
    "handleRecordsChanged\0QList<QVariantMap>\0"
    "records"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegistryController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   40,    2, 0x0a /* Public */,
       8,    1,   41,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
       6, 0x80000000 | 5, 0x0049500b,
       3, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void RegistryController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegistryController *_t = static_cast<RegistryController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->installedApplicationsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->modelChanged((*reinterpret_cast< RegistryListModel*(*)>(_a[1]))); break;
        case 2: _t->clearRecords(); break;
        case 3: _t->handleRecordsChanged((*reinterpret_cast< const QList<QVariantMap>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RegistryListModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVariantMap> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegistryController::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegistryController::installedApplicationsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RegistryController::*)(RegistryListModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegistryController::modelChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RegistryListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        RegistryController *_t = static_cast<RegistryController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< RegistryListModel**>(_v) = _t->model; break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->getInstalledApplications(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        RegistryController *_t = static_cast<RegistryController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->model != *reinterpret_cast< RegistryListModel**>(_v)) {
                _t->model = *reinterpret_cast< RegistryListModel**>(_v);
                Q_EMIT _t->modelChanged(_t->model);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RegistryController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RegistryController.data,
      qt_meta_data_RegistryController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RegistryController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegistryController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegistryController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RegistryController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
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
void RegistryController::installedApplicationsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RegistryController::modelChanged(RegistryListModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
