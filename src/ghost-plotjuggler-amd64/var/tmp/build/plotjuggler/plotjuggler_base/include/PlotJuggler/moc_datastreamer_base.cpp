/****************************************************************************
** Meta object code from reading C++ file 'datastreamer_base.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../09_External/plotjuggler/plotjuggler_base/include/PlotJuggler/datastreamer_base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datastreamer_base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PJ__DataStreamer_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PJ__DataStreamer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PJ__DataStreamer_t qt_meta_stringdata_PJ__DataStreamer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PJ::DataStreamer"
QT_MOC_LITERAL(1, 17, 12), // "clearBuffers"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "removeGroup"
QT_MOC_LITERAL(4, 43, 11), // "std::string"
QT_MOC_LITERAL(5, 55, 10), // "group_name"
QT_MOC_LITERAL(6, 66, 12), // "dataReceived"
QT_MOC_LITERAL(7, 79, 6), // "closed"
QT_MOC_LITERAL(8, 86, 20), // "notificationsChanged"
QT_MOC_LITERAL(9, 107, 25) // "active_notification_count"

    },
    "PJ::DataStreamer\0clearBuffers\0\0"
    "removeGroup\0std::string\0group_name\0"
    "dataReceived\0closed\0notificationsChanged\0"
    "active_notification_count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PJ__DataStreamer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,
       7,    0,   44,    2, 0x06 /* Public */,
       8,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void PJ::DataStreamer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataStreamer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clearBuffers(); break;
        case 1: _t->removeGroup((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->dataReceived(); break;
        case 3: _t->closed(); break;
        case 4: _t->notificationsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataStreamer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStreamer::clearBuffers)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataStreamer::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStreamer::removeGroup)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataStreamer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStreamer::dataReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataStreamer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStreamer::closed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataStreamer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStreamer::notificationsChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PJ::DataStreamer::staticMetaObject = { {
    QMetaObject::SuperData::link<PlotJugglerPlugin::staticMetaObject>(),
    qt_meta_stringdata_PJ__DataStreamer.data,
    qt_meta_data_PJ__DataStreamer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PJ::DataStreamer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PJ::DataStreamer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PJ__DataStreamer.stringdata0))
        return static_cast<void*>(this);
    return PlotJugglerPlugin::qt_metacast(_clname);
}

int PJ::DataStreamer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlotJugglerPlugin::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void PJ::DataStreamer::clearBuffers()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PJ::DataStreamer::removeGroup(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PJ::DataStreamer::dataReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PJ::DataStreamer::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PJ::DataStreamer::notificationsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
