/****************************************************************************
** Meta object code from reading C++ file 'AppImageHubSource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gateways/AppImageHubSource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppImageHubSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppImageHubSource_t {
    QByteArrayData data[29];
    char stringdata0[531];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppImageHubSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppImageHubSource_t qt_meta_stringdata_AppImageHubSource = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AppImageHubSource"
QT_MOC_LITERAL(1, 18, 22), // "handleDownloadFinished"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "handleDownloadStopped"
QT_MOC_LITERAL(4, 64, 25), // "handleNewInstallLinkFound"
QT_MOC_LITERAL(5, 90, 4), // "link"
QT_MOC_LITERAL(6, 95, 20), // "handleParserFinished"
QT_MOC_LITERAL(7, 116, 17), // "handleParserError"
QT_MOC_LITERAL(8, 134, 5), // "error"
QT_MOC_LITERAL(9, 140, 29), // "parseApplicationsDataFromJson"
QT_MOC_LITERAL(10, 170, 18), // "QList<QVariantMap>"
QT_MOC_LITERAL(11, 189, 4), // "data"
QT_MOC_LITERAL(12, 194, 24), // "extractApplicationsArray"
QT_MOC_LITERAL(13, 219, 22), // "extractApplicationInfo"
QT_MOC_LITERAL(14, 242, 5), // "value"
QT_MOC_LITERAL(15, 248, 25), // "extractApplicationAuthors"
QT_MOC_LITERAL(16, 274, 18), // "appImageDataObject"
QT_MOC_LITERAL(17, 293, 28), // "extractApplicationCategories"
QT_MOC_LITERAL(18, 322, 29), // "extractApplicationScreenshots"
QT_MOC_LITERAL(19, 352, 23), // "extractApplicationLinks"
QT_MOC_LITERAL(20, 376, 16), // "buildApplication"
QT_MOC_LITERAL(21, 393, 11), // "Application"
QT_MOC_LITERAL(22, 405, 3), // "map"
QT_MOC_LITERAL(23, 409, 30), // "spawnApplicationReleasesParser"
QT_MOC_LITERAL(24, 440, 7), // "appData"
QT_MOC_LITERAL(25, 448, 40), // "areAllApplicationReleasesPars..."
QT_MOC_LITERAL(26, 489, 13), // "reportResults"
QT_MOC_LITERAL(27, 503, 14), // "disposeParsers"
QT_MOC_LITERAL(28, 518, 12) // "guessVersion"

    },
    "AppImageHubSource\0handleDownloadFinished\0"
    "\0handleDownloadStopped\0handleNewInstallLinkFound\0"
    "link\0handleParserFinished\0handleParserError\0"
    "error\0parseApplicationsDataFromJson\0"
    "QList<QVariantMap>\0data\0"
    "extractApplicationsArray\0"
    "extractApplicationInfo\0value\0"
    "extractApplicationAuthors\0appImageDataObject\0"
    "extractApplicationCategories\0"
    "extractApplicationScreenshots\0"
    "extractApplicationLinks\0buildApplication\0"
    "Application\0map\0spawnApplicationReleasesParser\0"
    "appData\0areAllApplicationReleasesParsersFinished\0"
    "reportResults\0disposeParsers\0guessVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppImageHubSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x09 /* Protected */,
       3,    0,  105,    2, 0x09 /* Protected */,
       4,    1,  106,    2, 0x09 /* Protected */,
       6,    0,  109,    2, 0x09 /* Protected */,
       7,    1,  110,    2, 0x09 /* Protected */,
       9,    1,  113,    2, 0x09 /* Protected */,
      12,    1,  116,    2, 0x09 /* Protected */,
      13,    1,  119,    2, 0x09 /* Protected */,
      15,    1,  122,    2, 0x09 /* Protected */,
      17,    1,  125,    2, 0x09 /* Protected */,
      18,    1,  128,    2, 0x09 /* Protected */,
      19,    1,  131,    2, 0x09 /* Protected */,
      20,    1,  134,    2, 0x09 /* Protected */,
      23,    1,  137,    2, 0x09 /* Protected */,
      25,    0,  140,    2, 0x09 /* Protected */,
      26,    0,  141,    2, 0x09 /* Protected */,
      27,    0,  142,    2, 0x09 /* Protected */,
      28,    1,  143,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    0x80000000 | 10, QMetaType::QByteArray,   11,
    QMetaType::QJsonArray, QMetaType::QByteArray,   11,
    QMetaType::QVariantMap, QMetaType::QJsonValue,   14,
    QMetaType::QStringList, QMetaType::QJsonObject,   16,
    QMetaType::QStringList, QMetaType::QJsonObject,   16,
    QMetaType::QStringList, QMetaType::QJsonObject,   16,
    QMetaType::QVariantMap, QMetaType::QJsonObject,   16,
    0x80000000 | 21, QMetaType::QVariantMap,   22,
    QMetaType::Void, QMetaType::QVariantMap,   24,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QVariantMap,   22,

       0        // eod
};

void AppImageHubSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppImageHubSource *_t = static_cast<AppImageHubSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDownloadFinished(); break;
        case 1: _t->handleDownloadStopped(); break;
        case 2: _t->handleNewInstallLinkFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleParserFinished(); break;
        case 4: _t->handleParserError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { QList<QVariantMap> _r = _t->parseApplicationsDataFromJson((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QJsonArray _r = _t->extractApplicationsArray((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariantMap _r = _t->extractApplicationInfo((*reinterpret_cast< const QJsonValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 8: { QStringList _r = _t->extractApplicationAuthors((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 9: { QStringList _r = _t->extractApplicationCategories((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 10: { QStringList _r = _t->extractApplicationScreenshots((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 11: { QVariantMap _r = _t->extractApplicationLinks((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 12: { Application _r = _t->buildApplication((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Application*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->spawnApplicationReleasesParser((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 14: { bool _r = _t->areAllApplicationReleasesParsersFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->reportResults(); break;
        case 16: _t->disposeParsers(); break;
        case 17: { QString _r = _t->guessVersion((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppImageHubSource::staticMetaObject = {
    { &Source::staticMetaObject, qt_meta_stringdata_AppImageHubSource.data,
      qt_meta_data_AppImageHubSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppImageHubSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppImageHubSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppImageHubSource.stringdata0))
        return static_cast<void*>(this);
    return Source::qt_metacast(_clname);
}

int AppImageHubSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Source::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
