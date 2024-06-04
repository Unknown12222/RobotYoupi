/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../camera.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCameraENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCameraENDCLASS = QtMocHelpers::stringData(
    "Camera",
    "init",
    "",
    "startCamera",
    "stopCamera",
    "displayViewfinder",
    "displayCapturedImage",
    "readyForCapture",
    "ready",
    "keyPressEvent",
    "QKeyEvent*",
    "event",
    "closeEvent",
    "QCloseEvent*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCameraENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[7];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[11];
    char stringdata5[18];
    char stringdata6[21];
    char stringdata7[16];
    char stringdata8[6];
    char stringdata9[14];
    char stringdata10[11];
    char stringdata11[6];
    char stringdata12[11];
    char stringdata13[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCameraENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCameraENDCLASS_t qt_meta_stringdata_CLASSCameraENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Camera"
        QT_MOC_LITERAL(7, 4),  // "init"
        QT_MOC_LITERAL(12, 0),  // ""
        QT_MOC_LITERAL(13, 11),  // "startCamera"
        QT_MOC_LITERAL(25, 10),  // "stopCamera"
        QT_MOC_LITERAL(36, 17),  // "displayViewfinder"
        QT_MOC_LITERAL(54, 20),  // "displayCapturedImage"
        QT_MOC_LITERAL(75, 15),  // "readyForCapture"
        QT_MOC_LITERAL(91, 5),  // "ready"
        QT_MOC_LITERAL(97, 13),  // "keyPressEvent"
        QT_MOC_LITERAL(111, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(122, 5),  // "event"
        QT_MOC_LITERAL(128, 10),  // "closeEvent"
        QT_MOC_LITERAL(139, 12)   // "QCloseEvent*"
    },
    "Camera",
    "init",
    "",
    "startCamera",
    "stopCamera",
    "displayViewfinder",
    "displayCapturedImage",
    "readyForCapture",
    "ready",
    "keyPressEvent",
    "QKeyEvent*",
    "event",
    "closeEvent",
    "QCloseEvent*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCameraENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    1,   67,    2, 0x08,    6 /* Private */,
       9,    1,   70,    2, 0x08,    8 /* Private */,
      12,    1,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject Camera::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSCameraENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCameraENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCameraENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Camera, std::true_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayViewfinder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayCapturedImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readyForCapture'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'keyPressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>
    >,
    nullptr
} };

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Camera *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->startCamera(); break;
        case 2: _t->stopCamera(); break;
        case 3: _t->displayViewfinder(); break;
        case 4: _t->displayCapturedImage(); break;
        case 5: _t->readyForCapture((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 7: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCameraENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
