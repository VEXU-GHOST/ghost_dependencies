/****************************************************************************
** Meta object code from reading C++ file 'plotwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../09_External/plotjuggler/plotjuggler_app/plotwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotWidget_t {
    QByteArrayData data[58];
    char stringdata0[816];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotWidget_t qt_meta_stringdata_PlotWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlotWidget"
QT_MOC_LITERAL(1, 11, 20), // "swapWidgetsRequested"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "PlotWidget*"
QT_MOC_LITERAL(4, 45, 6), // "source"
QT_MOC_LITERAL(5, 52, 11), // "destination"
QT_MOC_LITERAL(6, 64, 11), // "rectChanged"
QT_MOC_LITERAL(7, 76, 4), // "self"
QT_MOC_LITERAL(8, 81, 4), // "rect"
QT_MOC_LITERAL(9, 86, 14), // "undoableChange"
QT_MOC_LITERAL(10, 101, 12), // "trackerMoved"
QT_MOC_LITERAL(11, 114, 3), // "pos"
QT_MOC_LITERAL(12, 118, 16), // "curveListChanged"
QT_MOC_LITERAL(13, 135, 13), // "curvesDropped"
QT_MOC_LITERAL(14, 149, 15), // "splitHorizontal"
QT_MOC_LITERAL(15, 165, 13), // "splitVertical"
QT_MOC_LITERAL(16, 179, 12), // "updateCurves"
QT_MOC_LITERAL(17, 192, 16), // "reset_older_data"
QT_MOC_LITERAL(18, 209, 19), // "onDataSourceRemoved"
QT_MOC_LITERAL(19, 229, 11), // "std::string"
QT_MOC_LITERAL(20, 241, 8), // "src_name"
QT_MOC_LITERAL(21, 250, 15), // "removeAllCurves"
QT_MOC_LITERAL(22, 266, 9), // "on_panned"
QT_MOC_LITERAL(23, 276, 2), // "dx"
QT_MOC_LITERAL(24, 279, 2), // "dy"
QT_MOC_LITERAL(25, 282, 7), // "zoomOut"
QT_MOC_LITERAL(26, 290, 11), // "emit_signal"
QT_MOC_LITERAL(27, 302, 30), // "on_zoomOutHorizontal_triggered"
QT_MOC_LITERAL(28, 333, 28), // "on_zoomOutVertical_triggered"
QT_MOC_LITERAL(29, 362, 14), // "activateLegend"
QT_MOC_LITERAL(30, 377, 8), // "activate"
QT_MOC_LITERAL(31, 386, 12), // "activateGrid"
QT_MOC_LITERAL(32, 399, 16), // "configureTracker"
QT_MOC_LITERAL(33, 416, 23), // "CurveTracker::Parameter"
QT_MOC_LITERAL(34, 440, 3), // "val"
QT_MOC_LITERAL(35, 444, 13), // "enableTracker"
QT_MOC_LITERAL(36, 458, 6), // "enable"
QT_MOC_LITERAL(37, 465, 16), // "isTrackerEnabled"
QT_MOC_LITERAL(38, 482, 18), // "setTrackerPosition"
QT_MOC_LITERAL(39, 501, 8), // "abs_time"
QT_MOC_LITERAL(40, 510, 19), // "on_changeTimeOffset"
QT_MOC_LITERAL(41, 530, 6), // "offset"
QT_MOC_LITERAL(42, 537, 22), // "on_changeDateTimeScale"
QT_MOC_LITERAL(43, 560, 19), // "on_changeCurveColor"
QT_MOC_LITERAL(44, 580, 10), // "curve_name"
QT_MOC_LITERAL(45, 591, 9), // "new_color"
QT_MOC_LITERAL(46, 601, 10), // "onFlipAxis"
QT_MOC_LITERAL(47, 612, 24), // "onBackgroundColorRequest"
QT_MOC_LITERAL(48, 637, 4), // "name"
QT_MOC_LITERAL(49, 642, 20), // "onShowDataStatistics"
QT_MOC_LITERAL(50, 663, 9), // "setModeXY"
QT_MOC_LITERAL(51, 673, 17), // "on_savePlotToFile"
QT_MOC_LITERAL(52, 691, 18), // "on_copyToClipboard"
QT_MOC_LITERAL(53, 710, 23), // "on_copyAction_triggered"
QT_MOC_LITERAL(54, 734, 24), // "on_pasteAction_triggered"
QT_MOC_LITERAL(55, 759, 26), // "canvasContextMenuTriggered"
QT_MOC_LITERAL(56, 786, 20), // "on_externallyResized"
QT_MOC_LITERAL(57, 807, 8) // "new_rect"

    },
    "PlotWidget\0swapWidgetsRequested\0\0"
    "PlotWidget*\0source\0destination\0"
    "rectChanged\0self\0rect\0undoableChange\0"
    "trackerMoved\0pos\0curveListChanged\0"
    "curvesDropped\0splitHorizontal\0"
    "splitVertical\0updateCurves\0reset_older_data\0"
    "onDataSourceRemoved\0std::string\0"
    "src_name\0removeAllCurves\0on_panned\0"
    "dx\0dy\0zoomOut\0emit_signal\0"
    "on_zoomOutHorizontal_triggered\0"
    "on_zoomOutVertical_triggered\0"
    "activateLegend\0activate\0activateGrid\0"
    "configureTracker\0CurveTracker::Parameter\0"
    "val\0enableTracker\0enable\0isTrackerEnabled\0"
    "setTrackerPosition\0abs_time\0"
    "on_changeTimeOffset\0offset\0"
    "on_changeDateTimeScale\0on_changeCurveColor\0"
    "curve_name\0new_color\0onFlipAxis\0"
    "onBackgroundColorRequest\0name\0"
    "onShowDataStatistics\0setModeXY\0"
    "on_savePlotToFile\0on_copyToClipboard\0"
    "on_copyAction_triggered\0"
    "on_pasteAction_triggered\0"
    "canvasContextMenuTriggered\0"
    "on_externallyResized\0new_rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  194,    2, 0x06 /* Public */,
       6,    2,  199,    2, 0x06 /* Public */,
       9,    0,  204,    2, 0x06 /* Public */,
      10,    1,  205,    2, 0x06 /* Public */,
      12,    0,  208,    2, 0x06 /* Public */,
      13,    0,  209,    2, 0x06 /* Public */,
      14,    0,  210,    2, 0x06 /* Public */,
      15,    0,  211,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  212,    2, 0x0a /* Public */,
      18,    1,  215,    2, 0x0a /* Public */,
      21,    0,  218,    2, 0x0a /* Public */,
      22,    2,  219,    2, 0x0a /* Public */,
      25,    1,  224,    2, 0x0a /* Public */,
      27,    1,  227,    2, 0x0a /* Public */,
      27,    0,  230,    2, 0x2a /* Public | MethodCloned */,
      28,    1,  231,    2, 0x0a /* Public */,
      28,    0,  234,    2, 0x2a /* Public | MethodCloned */,
      29,    1,  235,    2, 0x0a /* Public */,
      31,    1,  238,    2, 0x0a /* Public */,
      32,    1,  241,    2, 0x0a /* Public */,
      35,    1,  244,    2, 0x0a /* Public */,
      37,    0,  247,    2, 0x0a /* Public */,
      38,    1,  248,    2, 0x0a /* Public */,
      40,    1,  251,    2, 0x0a /* Public */,
      42,    1,  254,    2, 0x0a /* Public */,
      43,    2,  257,    2, 0x0a /* Public */,
      46,    0,  262,    2, 0x0a /* Public */,
      47,    1,  263,    2, 0x0a /* Public */,
      49,    0,  266,    2, 0x0a /* Public */,
      50,    1,  267,    2, 0x08 /* Private */,
      51,    0,  270,    2, 0x08 /* Private */,
      52,    0,  271,    2, 0x08 /* Private */,
      53,    0,  272,    2, 0x08 /* Private */,
      54,    0,  273,    2, 0x08 /* Private */,
      55,    1,  274,    2, 0x08 /* Private */,
      56,    1,  277,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QRectF,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Double,   39,
    QMetaType::Void, QMetaType::Double,   41,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,   44,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::QRectF,   57,

       0        // eod
};

void PlotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->swapWidgetsRequested((*reinterpret_cast< PlotWidget*(*)>(_a[1])),(*reinterpret_cast< PlotWidget*(*)>(_a[2]))); break;
        case 1: _t->rectChanged((*reinterpret_cast< PlotWidget*(*)>(_a[1])),(*reinterpret_cast< QRectF(*)>(_a[2]))); break;
        case 2: _t->undoableChange(); break;
        case 3: _t->trackerMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->curveListChanged(); break;
        case 5: _t->curvesDropped(); break;
        case 6: _t->splitHorizontal(); break;
        case 7: _t->splitVertical(); break;
        case 8: _t->updateCurves((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onDataSourceRemoved((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 10: _t->removeAllCurves(); break;
        case 11: _t->on_panned((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->zoomOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_zoomOutHorizontal_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_zoomOutHorizontal_triggered(); break;
        case 15: _t->on_zoomOutVertical_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_zoomOutVertical_triggered(); break;
        case 17: _t->activateLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->activateGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->configureTracker((*reinterpret_cast< CurveTracker::Parameter(*)>(_a[1]))); break;
        case 20: _t->enableTracker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: { bool _r = _t->isTrackerEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->setTrackerPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->on_changeTimeOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->on_changeDateTimeScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_changeCurveColor((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 26: _t->onFlipAxis(); break;
        case 27: _t->onBackgroundColorRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->onShowDataStatistics(); break;
        case 29: _t->setModeXY((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->on_savePlotToFile(); break;
        case 31: _t->on_copyToClipboard(); break;
        case 32: _t->on_copyAction_triggered(); break;
        case 33: _t->on_pasteAction_triggered(); break;
        case 34: _t->canvasContextMenuTriggered((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 35: _t->on_externallyResized((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlotWidget::*)(PlotWidget * , PlotWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::swapWidgetsRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)(PlotWidget * , QRectF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::rectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::undoableChange)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::trackerMoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::curveListChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::curvesDropped)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::splitHorizontal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::splitVertical)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlotWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<PlotWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_PlotWidget.data,
    qt_meta_data_PlotWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotWidget.stringdata0))
        return static_cast<void*>(this);
    return PlotWidgetBase::qt_metacast(_clname);
}

int PlotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlotWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void PlotWidget::swapWidgetsRequested(PlotWidget * _t1, PlotWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlotWidget::rectChanged(PlotWidget * _t1, QRectF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlotWidget::undoableChange()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlotWidget::trackerMoved(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlotWidget::curveListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlotWidget::curvesDropped()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PlotWidget::splitHorizontal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlotWidget::splitVertical()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
