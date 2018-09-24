/****************************************************************************
** Meta object code from reading C++ file 'InstallAppImageInteractor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/interactors/InstallAppImageInteractor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstallAppImageInteractor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InstallAppImageInteractor_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstallAppImageInteractor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstallAppImageInteractor_t qt_meta_stringdata_InstallAppImageInteractor = {
    {
QT_MOC_LITERAL(0, 0, 25), // "InstallAppImageInteractor"
QT_MOC_LITERAL(1, 26, 25), // "handleDownloadJobProgress"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 5), // "value"
QT_MOC_LITERAL(4, 59, 5), // "total"
QT_MOC_LITERAL(5, 65, 7), // "message"
QT_MOC_LITERAL(6, 73, 25), // "handleDownloadJobFinished"
QT_MOC_LITERAL(7, 99, 22), // "handleDownloadJobError"
QT_MOC_LITERAL(8, 122, 5), // "error"
QT_MOC_LITERAL(9, 128, 14) // "handleCanceled"

    },
    "InstallAppImageInteractor\0"
    "handleDownloadJobProgress\0\0value\0total\0"
    "message\0handleDownloadJobFinished\0"
    "handleDownloadJobError\0error\0"
    "handleCanceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstallAppImageInteractor[] = {

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
       1,    3,   34,    2, 0x09 /* Protected */,
       6,    0,   41,    2, 0x09 /* Protected */,
       7,    1,   42,    2, 0x09 /* Protected */,
       9,    0,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void InstallAppImageInteractor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InstallAppImageInteractor *_t = static_cast<InstallAppImageInteractor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDownloadJobProgress((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->handleDownloadJobFinished(); break;
        case 2: _t->handleDownloadJobError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleCanceled(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InstallAppImageInteractor::staticMetaObject = {
    { &Interactor::staticMetaObject, qt_meta_stringdata_InstallAppImageInteractor.data,
      qt_meta_data_InstallAppImageInteractor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InstallAppImageInteractor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstallAppImageInteractor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstallAppImageInteractor.stringdata0))
        return static_cast<void*>(this);
    return Interactor::qt_metacast(_clname);
}

int InstallAppImageInteractor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Interactor::qt_metacall(_c, _id, _a);
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
