/****************************************************************************
** Meta object code from reading C++ file 'Updater.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/entities/Updater.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Updater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Updater_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Updater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Updater_t qt_meta_stringdata_Updater = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Updater"
QT_MOC_LITERAL(1, 8, 16), // "isWorkingChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "isWorking"
QT_MOC_LITERAL(4, 36, 14), // "isReadyChanged"
QT_MOC_LITERAL(5, 51, 6), // "update"
QT_MOC_LITERAL(6, 58, 32), // "handleFetchApplicationsCompleted"
QT_MOC_LITERAL(7, 91, 7) // "isReady"

    },
    "Updater\0isWorkingChanged\0\0isWorking\0"
    "isReadyChanged\0update\0"
    "handleFetchApplicationsCompleted\0"
    "isReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Updater[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   40,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495003,
       7, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Updater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Updater *_t = static_cast<Updater *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isWorkingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->update(); break;
        case 3: _t->handleFetchApplicationsCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Updater::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Updater::isWorkingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Updater::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Updater::isReadyChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Updater *_t = static_cast<Updater *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isWorking; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isReady; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Updater *_t = static_cast<Updater *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->isWorking != *reinterpret_cast< bool*>(_v)) {
                _t->isWorking = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isWorkingChanged(_t->isWorking);
            }
            break;
        case 1:
            if (_t->isReady != *reinterpret_cast< bool*>(_v)) {
                _t->isReady = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->isReadyChanged(_t->isReady);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Updater::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Updater.data,
      qt_meta_data_Updater,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Updater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Updater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Updater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Updater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Updater::isWorkingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Updater::isReadyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
