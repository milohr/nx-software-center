/****************************************************************************
** Meta object code from reading C++ file 'Source.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/entities/Source.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Source.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Source_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Source_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Source_t qt_meta_stringdata_Source = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Source"
QT_MOC_LITERAL(1, 7, 22), // "fetchedAllApplications"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "QList<Application>"
QT_MOC_LITERAL(4, 50, 12), // "applications"
QT_MOC_LITERAL(5, 63, 10), // "fetchError"
QT_MOC_LITERAL(6, 74, 7), // "details"
QT_MOC_LITERAL(7, 82, 20) // "fetchAllApplications"

    },
    "Source\0fetchedAllApplications\0\0"
    "QList<Application>\0applications\0"
    "fetchError\0details\0fetchAllApplications"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Source[] = {

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
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Source::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Source *_t = static_cast<Source *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fetchedAllApplications((*reinterpret_cast< const QList<Application>(*)>(_a[1]))); break;
        case 1: _t->fetchError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fetchAllApplications(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Source::*)(const QList<Application> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Source::fetchedAllApplications)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Source::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Source::fetchError)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Source::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Source.data,
      qt_meta_data_Source,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Source::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Source::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Source.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Source::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void Source::fetchedAllApplications(const QList<Application> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Source::fetchError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
