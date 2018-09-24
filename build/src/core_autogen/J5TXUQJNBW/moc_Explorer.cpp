/****************************************************************************
** Meta object code from reading C++ file 'Explorer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/entities/Explorer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Explorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Explorer_t {
    QByteArrayData data[16];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Explorer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Explorer_t qt_meta_stringdata_Explorer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Explorer"
QT_MOC_LITERAL(1, 9, 13), // "isBusyChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "busy"
QT_MOC_LITERAL(4, 29, 7), // "failure"
QT_MOC_LITERAL(5, 37, 12), // "errorMessage"
QT_MOC_LITERAL(6, 50, 15), // "searchCompleted"
QT_MOC_LITERAL(7, 66, 18), // "QList<QVariantMap>"
QT_MOC_LITERAL(8, 85, 4), // "apps"
QT_MOC_LITERAL(9, 90, 23), // "getApplicationCompleted"
QT_MOC_LITERAL(10, 114, 3), // "app"
QT_MOC_LITERAL(11, 118, 26), // "handleSearchRequestResults"
QT_MOC_LITERAL(12, 145, 14), // "QNetworkReply*"
QT_MOC_LITERAL(13, 160, 5), // "reply"
QT_MOC_LITERAL(14, 166, 26), // "handleGetApplicationResult"
QT_MOC_LITERAL(15, 193, 6) // "isBusy"

    },
    "Explorer\0isBusyChanged\0\0busy\0failure\0"
    "errorMessage\0searchCompleted\0"
    "QList<QVariantMap>\0apps\0getApplicationCompleted\0"
    "app\0handleSearchRequestResults\0"
    "QNetworkReply*\0reply\0handleGetApplicationResult\0"
    "isBusy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Explorer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   56,    2, 0x09 /* Protected */,
      14,    1,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QVariantMap,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Explorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Explorer *_t = static_cast<Explorer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isBusyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->failure((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->searchCompleted((*reinterpret_cast< QList<QVariantMap>(*)>(_a[1]))); break;
        case 3: _t->getApplicationCompleted((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 4: _t->handleSearchRequestResults((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->handleGetApplicationResult((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVariantMap> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Explorer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Explorer::isBusyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Explorer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Explorer::failure)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Explorer::*)(QList<QVariantMap> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Explorer::searchCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Explorer::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Explorer::getApplicationCompleted)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Explorer *_t = static_cast<Explorer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBusy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Explorer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Explorer.data,
      qt_meta_data_Explorer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Explorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Explorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Explorer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Explorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
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
void Explorer::isBusyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Explorer::failure(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Explorer::searchCompleted(QList<QVariantMap> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Explorer::getApplicationCompleted(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
