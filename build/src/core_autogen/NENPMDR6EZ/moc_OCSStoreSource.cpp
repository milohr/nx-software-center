/****************************************************************************
** Meta object code from reading C++ file 'OCSStoreSource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gateways/OCSStoreSource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OCSStoreSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OCSStoreSource_t {
    QByteArrayData data[10];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OCSStoreSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OCSStoreSource_t qt_meta_stringdata_OCSStoreSource = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OCSStoreSource"
QT_MOC_LITERAL(1, 15, 20), // "fetchAllApplications"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "handleParserCompleted"
QT_MOC_LITERAL(4, 59, 17), // "handleParserError"
QT_MOC_LITERAL(5, 77, 3), // "msg"
QT_MOC_LITERAL(6, 81, 8), // "getQuery"
QT_MOC_LITERAL(7, 90, 9), // "QUrlQuery"
QT_MOC_LITERAL(8, 100, 11), // "startParser"
QT_MOC_LITERAL(9, 112, 5) // "query"

    },
    "OCSStoreSource\0fetchAllApplications\0"
    "\0handleParserCompleted\0handleParserError\0"
    "msg\0getQuery\0QUrlQuery\0startParser\0"
    "query"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OCSStoreSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    0x80000000 | 7,
    QMetaType::Void, 0x80000000 | 7,    9,

       0        // eod
};

void OCSStoreSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OCSStoreSource *_t = static_cast<OCSStoreSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fetchAllApplications(); break;
        case 1: _t->handleParserCompleted(); break;
        case 2: _t->handleParserError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QUrlQuery _r = _t->getQuery();
            if (_a[0]) *reinterpret_cast< QUrlQuery*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->startParser((*reinterpret_cast< const QUrlQuery(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OCSStoreSource::staticMetaObject = {
    { &Source::staticMetaObject, qt_meta_stringdata_OCSStoreSource.data,
      qt_meta_data_OCSStoreSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OCSStoreSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCSStoreSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OCSStoreSource.stringdata0))
        return static_cast<void*>(this);
    return Source::qt_metacast(_clname);
}

int OCSStoreSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Source::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
