/****************************************************************************
** Meta object code from reading C++ file 'SearchControler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ui/SearchControler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchControler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchControler_t {
    QByteArrayData data[10];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchControler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchControler_t qt_meta_stringdata_SearchControler = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SearchControler"
QT_MOC_LITERAL(1, 16, 9), // "searching"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "resultsReady"
QT_MOC_LITERAL(4, 40, 12), // "modelChanged"
QT_MOC_LITERAL(5, 53, 21), // "ApplicationListModel*"
QT_MOC_LITERAL(6, 75, 5), // "model"
QT_MOC_LITERAL(7, 81, 6), // "search"
QT_MOC_LITERAL(8, 88, 5), // "query"
QT_MOC_LITERAL(9, 94, 23) // "handleRepositoryChanged"

    },
    "SearchControler\0searching\0\0resultsReady\0"
    "modelChanged\0ApplicationListModel*\0"
    "model\0search\0query\0handleRepositoryChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchControler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   44,    2, 0x0a /* Public */,
       9,    0,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 5, 0x0049500b,

 // properties: notify_signal_id
       2,

       0        // eod
};

void SearchControler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchControler *_t = static_cast<SearchControler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searching(); break;
        case 1: _t->resultsReady(); break;
        case 2: _t->modelChanged((*reinterpret_cast< ApplicationListModel*(*)>(_a[1]))); break;
        case 3: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->handleRepositoryChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApplicationListModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchControler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchControler::searching)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchControler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchControler::resultsReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SearchControler::*)(ApplicationListModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchControler::modelChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApplicationListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SearchControler *_t = static_cast<SearchControler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ApplicationListModel**>(_v) = _t->model; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SearchControler *_t = static_cast<SearchControler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->model != *reinterpret_cast< ApplicationListModel**>(_v)) {
                _t->model = *reinterpret_cast< ApplicationListModel**>(_v);
                Q_EMIT _t->modelChanged(_t->model);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SearchControler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SearchControler.data,
      qt_meta_data_SearchControler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchControler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchControler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchControler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SearchControler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void SearchControler::searching()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SearchControler::resultsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SearchControler::modelChanged(ApplicationListModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
