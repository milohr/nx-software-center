/****************************************************************************
** Meta object code from reading C++ file 'FetchApplicationsInteractor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/interactors/FetchApplicationsInteractor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FetchApplicationsInteractor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FetchApplicationsInteractor_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FetchApplicationsInteractor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FetchApplicationsInteractor_t qt_meta_stringdata_FetchApplicationsInteractor = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FetchApplicationsInteractor"
QT_MOC_LITERAL(1, 28, 7), // "execute"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "handleFetchedApplications"
QT_MOC_LITERAL(4, 63, 18), // "QList<Application>"
QT_MOC_LITERAL(5, 82, 12), // "applications"
QT_MOC_LITERAL(6, 95, 16), // "handleFetchError"
QT_MOC_LITERAL(7, 112, 5) // "error"

    },
    "FetchApplicationsInteractor\0execute\0"
    "\0handleFetchedApplications\0"
    "QList<Application>\0applications\0"
    "handleFetchError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FetchApplicationsInteractor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x09 /* Protected */,
       6,    1,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void FetchApplicationsInteractor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FetchApplicationsInteractor *_t = static_cast<FetchApplicationsInteractor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execute(); break;
        case 1: _t->handleFetchedApplications((*reinterpret_cast< const QList<Application>(*)>(_a[1]))); break;
        case 2: _t->handleFetchError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FetchApplicationsInteractor::staticMetaObject = {
    { &Interactor::staticMetaObject, qt_meta_stringdata_FetchApplicationsInteractor.data,
      qt_meta_data_FetchApplicationsInteractor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FetchApplicationsInteractor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FetchApplicationsInteractor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FetchApplicationsInteractor.stringdata0))
        return static_cast<void*>(this);
    return Interactor::qt_metacast(_clname);
}

int FetchApplicationsInteractor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Interactor::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
