/****************************************************************************
** Meta object code from reading C++ file 'TasksController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ui/TasksController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TasksController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TasksController_t {
    QByteArrayData data[13];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TasksController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TasksController_t qt_meta_stringdata_TasksController = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TasksController"
QT_MOC_LITERAL(1, 16, 12), // "modelChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "TaskListModel*"
QT_MOC_LITERAL(4, 45, 5), // "model"
QT_MOC_LITERAL(5, 51, 30), // "affectedApplicationsIdsChanged"
QT_MOC_LITERAL(6, 82, 23), // "affectedApplicationsIds"
QT_MOC_LITERAL(7, 106, 17), // "handleTaskStarted"
QT_MOC_LITERAL(8, 124, 2), // "id"
QT_MOC_LITERAL(9, 127, 4), // "data"
QT_MOC_LITERAL(10, 132, 19), // "handleTaskCompleted"
QT_MOC_LITERAL(11, 152, 21), // "handleTaskDataChanged"
QT_MOC_LITERAL(12, 174, 10) // "cancelTask"

    },
    "TasksController\0modelChanged\0\0"
    "TaskListModel*\0model\0"
    "affectedApplicationsIdsChanged\0"
    "affectedApplicationsIds\0handleTaskStarted\0"
    "id\0data\0handleTaskCompleted\0"
    "handleTaskDataChanged\0cancelTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TasksController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   50,    2, 0x09 /* Protected */,
      10,    2,   55,    2, 0x09 /* Protected */,
      11,    2,   60,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    8,    9,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    8,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049500b,
       6, QMetaType::QStringList, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void TasksController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TasksController *_t = static_cast<TasksController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged((*reinterpret_cast< TaskListModel*(*)>(_a[1]))); break;
        case 1: _t->affectedApplicationsIdsChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->handleTaskStarted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 3: _t->handleTaskCompleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 4: _t->handleTaskDataChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 5: _t->cancelTask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TaskListModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TasksController::*)(TaskListModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TasksController::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TasksController::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TasksController::affectedApplicationsIdsChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TaskListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TasksController *_t = static_cast<TasksController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TaskListModel**>(_v) = _t->model; break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->affectedApplicationsIds; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TasksController *_t = static_cast<TasksController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->model != *reinterpret_cast< TaskListModel**>(_v)) {
                _t->model = *reinterpret_cast< TaskListModel**>(_v);
                Q_EMIT _t->modelChanged(_t->model);
            }
            break;
        case 1:
            if (_t->affectedApplicationsIds != *reinterpret_cast< QStringList*>(_v)) {
                _t->affectedApplicationsIds = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT _t->affectedApplicationsIdsChanged(_t->affectedApplicationsIds);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TasksController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TasksController.data,
      qt_meta_data_TasksController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TasksController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TasksController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TasksController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TasksController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TasksController::modelChanged(TaskListModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TasksController::affectedApplicationsIdsChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
