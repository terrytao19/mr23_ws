/****************************************************************************
** Meta object code from reading C++ file 'annotate_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/annotate/include/annotate/annotate_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annotate_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_annotate__AnnotateDisplay_t {
    QByteArrayData data[18];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_annotate__AnnotateDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_annotate__AnnotateDisplay_t qt_meta_stringdata_annotate__AnnotateDisplay = {
    {
QT_MOC_LITERAL(0, 0, 25), // "annotate::AnnotateDisplay"
QT_MOC_LITERAL(1, 26, 11), // "updateTopic"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "updateLabels"
QT_MOC_LITERAL(4, 52, 10), // "updateTags"
QT_MOC_LITERAL(5, 63, 8), // "openFile"
QT_MOC_LITERAL(6, 72, 20), // "updateAnnotationFile"
QT_MOC_LITERAL(7, 93, 13), // "updatePadding"
QT_MOC_LITERAL(8, 107, 12), // "updateMargin"
QT_MOC_LITERAL(9, 120, 18), // "updateIgnoreGround"
QT_MOC_LITERAL(10, 139, 14), // "shrinkToPoints"
QT_MOC_LITERAL(11, 154, 13), // "autoFitPoints"
QT_MOC_LITERAL(12, 168, 4), // "undo"
QT_MOC_LITERAL(13, 173, 6), // "commit"
QT_MOC_LITERAL(14, 180, 15), // "rotateClockwise"
QT_MOC_LITERAL(15, 196, 19), // "rotateAntiClockwise"
QT_MOC_LITERAL(16, 216, 15), // "togglePlayPause"
QT_MOC_LITERAL(17, 232, 15) // "updateShortcuts"

    },
    "annotate::AnnotateDisplay\0updateTopic\0"
    "\0updateLabels\0updateTags\0openFile\0"
    "updateAnnotationFile\0updatePadding\0"
    "updateMargin\0updateIgnoreGround\0"
    "shrinkToPoints\0autoFitPoints\0undo\0"
    "commit\0rotateClockwise\0rotateAntiClockwise\0"
    "togglePlayPause\0updateShortcuts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_annotate__AnnotateDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void annotate::AnnotateDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnnotateDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTopic(); break;
        case 1: _t->updateLabels(); break;
        case 2: _t->updateTags(); break;
        case 3: _t->openFile(); break;
        case 4: _t->updateAnnotationFile(); break;
        case 5: _t->updatePadding(); break;
        case 6: _t->updateMargin(); break;
        case 7: _t->updateIgnoreGround(); break;
        case 8: _t->shrinkToPoints(); break;
        case 9: _t->autoFitPoints(); break;
        case 10: _t->undo(); break;
        case 11: _t->commit(); break;
        case 12: _t->rotateClockwise(); break;
        case 13: _t->rotateAntiClockwise(); break;
        case 14: _t->togglePlayPause(); break;
        case 15: _t->updateShortcuts(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject annotate::AnnotateDisplay::staticMetaObject = { {
    &rviz::DisplayGroup::staticMetaObject,
    qt_meta_stringdata_annotate__AnnotateDisplay.data,
    qt_meta_data_annotate__AnnotateDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *annotate::AnnotateDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *annotate::AnnotateDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_annotate__AnnotateDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz::DisplayGroup::qt_metacast(_clname);
}

int annotate::AnnotateDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::DisplayGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
