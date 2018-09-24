/****************************************************************************
** Meta object code from reading C++ file 'ApplicationViewController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ui/ApplicationViewController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationViewController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApplicationViewController_t {
    QByteArrayData data[22];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplicationViewController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplicationViewController_t qt_meta_stringdata_ApplicationViewController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ApplicationViewController"
QT_MOC_LITERAL(1, 26, 18), // "applicationChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 22), // "hasPendingTasksChanged"
QT_MOC_LITERAL(4, 69, 15), // "hasPendingTasks"
QT_MOC_LITERAL(5, 85, 15), // "loadApplication"
QT_MOC_LITERAL(6, 101, 2), // "id"
QT_MOC_LITERAL(7, 104, 17), // "handleTaskStarted"
QT_MOC_LITERAL(8, 122, 4), // "data"
QT_MOC_LITERAL(9, 127, 19), // "handleTaskCompleted"
QT_MOC_LITERAL(10, 147, 15), // "backgroundImage"
QT_MOC_LITERAL(11, 163, 14), // "isAppInstalled"
QT_MOC_LITERAL(12, 178, 14), // "hasScreenShots"
QT_MOC_LITERAL(13, 193, 5), // "appId"
QT_MOC_LITERAL(14, 199, 7), // "appIcon"
QT_MOC_LITERAL(15, 207, 7), // "appName"
QT_MOC_LITERAL(16, 215, 9), // "appAuthor"
QT_MOC_LITERAL(17, 225, 10), // "appVersion"
QT_MOC_LITERAL(18, 236, 15), // "appDownloadSize"
QT_MOC_LITERAL(19, 252, 10), // "appWebsite"
QT_MOC_LITERAL(20, 263, 14), // "appDescription"
QT_MOC_LITERAL(21, 278, 14) // "appScreenShots"

    },
    "ApplicationViewController\0applicationChanged\0"
    "\0hasPendingTasksChanged\0hasPendingTasks\0"
    "loadApplication\0id\0handleTaskStarted\0"
    "data\0handleTaskCompleted\0backgroundImage\0"
    "isAppInstalled\0hasScreenShots\0appId\0"
    "appIcon\0appName\0appAuthor\0appVersion\0"
    "appDownloadSize\0appWebsite\0appDescription\0"
    "appScreenShots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplicationViewController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      13,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   43,    2, 0x0a /* Public */,
       7,    2,   46,    2, 0x09 /* Protected */,
       9,    2,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    2,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    2,    8,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::Bool, 0x00495001,
       4, QMetaType::Bool, 0x00495003,
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::QString, 0x00495001,
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495001,
      17, QMetaType::QString, 0x00495001,
      18, QMetaType::QString, 0x00495001,
      19, QMetaType::QString, 0x00495001,
      20, QMetaType::QString, 0x00495001,
      21, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void ApplicationViewController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApplicationViewController *_t = static_cast<ApplicationViewController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applicationChanged(); break;
        case 1: _t->hasPendingTasksChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadApplication((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleTaskStarted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 4: _t->handleTaskCompleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApplicationViewController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationViewController::applicationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ApplicationViewController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationViewController::hasPendingTasksChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ApplicationViewController *_t = static_cast<ApplicationViewController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getBackgroundImage(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isInstalled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasPendingTasks; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasScreenShots(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getApplicationId(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getApplicationIcon(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getApplicationName(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getApplicationAuthor(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getApplicationVersion(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getApplicationDownloadSize(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getApplicationWebsite(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->getApplicationDescription(); break;
        case 12: *reinterpret_cast< QStringList*>(_v) = _t->getApplicationScreenShots(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ApplicationViewController *_t = static_cast<ApplicationViewController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2:
            if (_t->hasPendingTasks != *reinterpret_cast< bool*>(_v)) {
                _t->hasPendingTasks = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->hasPendingTasksChanged(_t->hasPendingTasks);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ApplicationViewController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApplicationViewController.data,
      qt_meta_data_ApplicationViewController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApplicationViewController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationViewController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationViewController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ApplicationViewController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ApplicationViewController::applicationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ApplicationViewController::hasPendingTasksChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
