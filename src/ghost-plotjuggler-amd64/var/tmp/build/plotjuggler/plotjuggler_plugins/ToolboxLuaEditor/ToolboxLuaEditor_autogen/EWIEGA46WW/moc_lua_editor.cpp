/****************************************************************************
** Meta object code from reading C++ file 'lua_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../09_External/plotjuggler/plotjuggler_plugins/ToolboxLuaEditor/lua_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lua_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolboxLuaEditor_t {
    QByteArrayData data[11];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolboxLuaEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolboxLuaEditor_t qt_meta_stringdata_ToolboxLuaEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ToolboxLuaEditor"
QT_MOC_LITERAL(1, 17, 12), // "onShowWidget"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "onSave"
QT_MOC_LITERAL(4, 38, 8), // "onDelete"
QT_MOC_LITERAL(5, 47, 13), // "restoreRecent"
QT_MOC_LITERAL(6, 61, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 73, 5), // "index"
QT_MOC_LITERAL(8, 79, 15), // "restoreFunction"
QT_MOC_LITERAL(9, 95, 16), // "onLibraryUpdated"
QT_MOC_LITERAL(10, 112, 15) // "onReloadLibrary"

    },
    "ToolboxLuaEditor\0onShowWidget\0\0onSave\0"
    "onDelete\0restoreRecent\0QModelIndex\0"
    "index\0restoreFunction\0onLibraryUpdated\0"
    "onReloadLibrary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolboxLuaEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ToolboxLuaEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolboxLuaEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->onShowWidget();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->onSave(); break;
        case 2: _t->onDelete(); break;
        case 3: _t->restoreRecent((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->restoreFunction((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->onLibraryUpdated(); break;
        case 6: _t->onReloadLibrary(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToolboxLuaEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<PJ::ToolboxPlugin::staticMetaObject>(),
    qt_meta_stringdata_ToolboxLuaEditor.data,
    qt_meta_data_ToolboxLuaEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolboxLuaEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolboxLuaEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolboxLuaEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "facontidavide.PlotJuggler3.Toolbox"))
        return static_cast< PJ::ToolboxPlugin*>(this);
    return PJ::ToolboxPlugin::qt_metacast(_clname);
}

int ToolboxLuaEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PJ::ToolboxPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x22,  'f',  'a',  'c',  'o',  'n', 
    't',  'i',  'd',  'a',  'v',  'i',  'd',  'e', 
    '.',  'P',  'l',  'o',  't',  'J',  'u',  'g', 
    'g',  'l',  'e',  'r',  '3',  '.',  'T',  'o', 
    'o',  'l',  'b',  'o',  'x', 
    // "className"
    0x03,  0x70,  'T',  'o',  'o',  'l',  'b',  'o', 
    'x',  'L',  'u',  'a',  'E',  'd',  'i',  't', 
    'o',  'r', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ToolboxLuaEditor, ToolboxLuaEditor)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
