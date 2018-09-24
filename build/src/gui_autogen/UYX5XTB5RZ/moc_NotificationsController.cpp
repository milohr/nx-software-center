/****************************************************************************
** Meta object code from reading C++ file 'NotificationsController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ui/NotificationsController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NotificationsController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotificationsController_t {
    QByteArrayData data[15];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotificationsController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotificationsController_t qt_meta_stringdata_NotificationsController = {
    {
QT_MOC_LITERAL(0, 0, 23), // "NotificationsController"
QT_MOC_LITERAL(1, 24, 23), // "showNotificationRequest"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "notficationType"
QT_MOC_LITERAL(4, 65, 7), // "message"
QT_MOC_LITERAL(5, 73, 19), // "notificationExpired"
QT_MOC_LITERAL(6, 93, 32), // "tasksNotificationsEnabledChanged"
QT_MOC_LITERAL(7, 126, 25), // "tasksNotificationsEnabled"
QT_MOC_LITERAL(8, 152, 16), // "hideNotification"
QT_MOC_LITERAL(9, 169, 17), // "handleTaskStarted"
QT_MOC_LITERAL(10, 187, 2), // "id"
QT_MOC_LITERAL(11, 190, 4), // "data"
QT_MOC_LITERAL(12, 195, 19), // "handleTaskCompleted"
QT_MOC_LITERAL(13, 215, 21), // "notifyTaskDescription"
QT_MOC_LITERAL(14, 237, 16) // "shouldBeNotified"

    },
    "NotificationsController\0showNotificationRequest\0"
    "\0notficationType\0message\0notificationExpired\0"
    "tasksNotificationsEnabledChanged\0"
    "tasksNotificationsEnabled\0hideNotification\0"
    "handleTaskStarted\0id\0data\0handleTaskCompleted\0"
    "notifyTaskDescription\0shouldBeNotified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotificationsController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    0,   59,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   63,    2, 0x0a /* Public */,
       9,    2,   64,    2, 0x09 /* Protected */,
      12,    2,   69,    2, 0x09 /* Protected */,
      13,    1,   74,    2, 0x09 /* Protected */,
      14,    1,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,   10,   11,
    QMetaType::Void, QMetaType::QVariantMap,   11,
    QMetaType::Bool, QMetaType::QVariantMap,   11,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       2,

       0        // eod
};

void NotificationsController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NotificationsController *_t = static_cast<NotificationsController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showNotificationRequest((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->notificationExpired(); break;
        case 2: _t->tasksNotificationsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->hideNotification(); break;
        case 4: _t->handleTaskStarted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 5: _t->handleTaskCompleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 6: _t->notifyTaskDescription((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 7: { bool _r = _t->shouldBeNotified((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotificationsController::*)(const int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsController::showNotificationRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotificationsController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsController::notificationExpired)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NotificationsController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsController::tasksNotificationsEnabledChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        NotificationsController *_t = static_cast<NotificationsController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->tasksNotificationsEnabled; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        NotificationsController *_t = static_cast<NotificationsController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->tasksNotificationsEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->tasksNotificationsEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->tasksNotificationsEnabledChanged(_t->tasksNotificationsEnabled);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject NotificationsController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NotificationsController.data,
      qt_meta_data_NotificationsController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NotificationsController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationsController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationsController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NotificationsController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void NotificationsController::showNotificationRequest(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NotificationsController::notificationExpired()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NotificationsController::tasksNotificationsEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
