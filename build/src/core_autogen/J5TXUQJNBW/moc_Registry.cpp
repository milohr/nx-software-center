/****************************************************************************
** Meta object code from reading C++ file 'Registry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/entities/Registry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Registry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Registry_t {
    QByteArrayData data[10];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Registry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Registry_t qt_meta_stringdata_Registry = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Registry"
QT_MOC_LITERAL(1, 9, 28), // "installedApplicationsChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "installedApplications"
QT_MOC_LITERAL(4, 61, 14), // "recordsChanged"
QT_MOC_LITERAL(5, 76, 18), // "QList<QVariantMap>"
QT_MOC_LITERAL(6, 95, 7), // "records"
QT_MOC_LITERAL(7, 103, 19), // "handleTaskCompleted"
QT_MOC_LITERAL(8, 123, 7), // "task_id"
QT_MOC_LITERAL(9, 131, 6) // "resume"

    },
    "Registry\0installedApplicationsChanged\0"
    "\0installedApplications\0recordsChanged\0"
    "QList<QVariantMap>\0records\0"
    "handleTaskCompleted\0task_id\0resume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Registry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    8,    9,

       0        // eod
};

void Registry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Registry *_t = static_cast<Registry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->installedApplicationsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->recordsChanged((*reinterpret_cast< const QList<QVariantMap>(*)>(_a[1]))); break;
        case 2: _t->handleTaskCompleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            using _t = void (Registry::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Registry::installedApplicationsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Registry::*)(const QList<QVariantMap> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Registry::recordsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Registry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Registry.data,
      qt_meta_data_Registry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Registry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Registry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Registry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Registry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Registry::installedApplicationsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Registry::recordsChanged(const QList<QVariantMap> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
