/****************************************************************************
** Meta object code from reading C++ file 'Cache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/entities/Cache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Cache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cache_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cache_t qt_meta_stringdata_Cache = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Cache"
QT_MOC_LITERAL(1, 6, 34), // "handleInstalledApplicationsCh..."
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "applicationsIds"
QT_MOC_LITERAL(4, 58, 16), // "storeApplication"
QT_MOC_LITERAL(5, 75, 5), // "appId"
QT_MOC_LITERAL(6, 81, 17), // "removeApplication"
QT_MOC_LITERAL(7, 99, 25) // "loadApplicationIdsInCache"

    },
    "Cache\0handleInstalledApplicationsChanged\0"
    "\0applicationsIds\0storeApplication\0"
    "appId\0removeApplication\0"
    "loadApplicationIdsInCache"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       7,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void Cache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cache *_t = static_cast<Cache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleInstalledApplicationsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->storeApplication((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->removeApplication((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->loadApplicationIdsInCache(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cache.data,
      qt_meta_data_Cache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Cache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
