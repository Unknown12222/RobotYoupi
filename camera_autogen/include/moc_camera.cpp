/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../Qt/Examples/Qt-6.6.1/multimedia/camera/camera.h"
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
    "saveMetaData",
    "",
    "init",
    "setCamera",
    "QCameraDevice",
    "cameraDevice",
    "startCamera",
    "stopCamera",
    "record",
    "pause",
    "stop",
    "setMuted",
    "takeImage",
    "displayCaptureError",
    "QImageCapture::Error",
    "errorString",
    "configureCaptureSettings",
    "configureVideoSettings",
    "configureImageSettings",
    "displayRecorderError",
    "displayCameraError",
    "updateCameraDevice",
    "QAction*",
    "action",
    "updateCameraActive",
    "active",
    "updateCaptureMode",
    "updateRecorderState",
    "QMediaRecorder::RecorderState",
    "state",
    "setExposureCompensation",
    "index",
    "updateRecordTime",
    "processCapturedImage",
    "requestId",
    "img",
    "displayViewfinder",
    "displayCapturedImage",
    "readyForCapture",
    "ready",
    "imageSaved",
    "id",
    "fileName",
    "updateCameras",
    "showMetaDataDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCameraENDCLASS_t {
    uint offsetsAndSizes[92];
    char stringdata0[7];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[10];
    char stringdata5[14];
    char stringdata6[13];
    char stringdata7[12];
    char stringdata8[11];
    char stringdata9[7];
    char stringdata10[6];
    char stringdata11[5];
    char stringdata12[9];
    char stringdata13[10];
    char stringdata14[20];
    char stringdata15[21];
    char stringdata16[12];
    char stringdata17[25];
    char stringdata18[23];
    char stringdata19[23];
    char stringdata20[21];
    char stringdata21[19];
    char stringdata22[19];
    char stringdata23[9];
    char stringdata24[7];
    char stringdata25[19];
    char stringdata26[7];
    char stringdata27[18];
    char stringdata28[20];
    char stringdata29[30];
    char stringdata30[6];
    char stringdata31[24];
    char stringdata32[6];
    char stringdata33[17];
    char stringdata34[21];
    char stringdata35[10];
    char stringdata36[4];
    char stringdata37[18];
    char stringdata38[21];
    char stringdata39[16];
    char stringdata40[6];
    char stringdata41[11];
    char stringdata42[3];
    char stringdata43[9];
    char stringdata44[14];
    char stringdata45[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCameraENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCameraENDCLASS_t qt_meta_stringdata_CLASSCameraENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Camera"
        QT_MOC_LITERAL(7, 12),  // "saveMetaData"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 4),  // "init"
        QT_MOC_LITERAL(26, 9),  // "setCamera"
        QT_MOC_LITERAL(36, 13),  // "QCameraDevice"
        QT_MOC_LITERAL(50, 12),  // "cameraDevice"
        QT_MOC_LITERAL(63, 11),  // "startCamera"
        QT_MOC_LITERAL(75, 10),  // "stopCamera"
        QT_MOC_LITERAL(86, 6),  // "record"
        QT_MOC_LITERAL(93, 5),  // "pause"
        QT_MOC_LITERAL(99, 4),  // "stop"
        QT_MOC_LITERAL(104, 8),  // "setMuted"
        QT_MOC_LITERAL(113, 9),  // "takeImage"
        QT_MOC_LITERAL(123, 19),  // "displayCaptureError"
        QT_MOC_LITERAL(143, 20),  // "QImageCapture::Error"
        QT_MOC_LITERAL(164, 11),  // "errorString"
        QT_MOC_LITERAL(176, 24),  // "configureCaptureSettings"
        QT_MOC_LITERAL(201, 22),  // "configureVideoSettings"
        QT_MOC_LITERAL(224, 22),  // "configureImageSettings"
        QT_MOC_LITERAL(247, 20),  // "displayRecorderError"
        QT_MOC_LITERAL(268, 18),  // "displayCameraError"
        QT_MOC_LITERAL(287, 18),  // "updateCameraDevice"
        QT_MOC_LITERAL(306, 8),  // "QAction*"
        QT_MOC_LITERAL(315, 6),  // "action"
        QT_MOC_LITERAL(322, 18),  // "updateCameraActive"
        QT_MOC_LITERAL(341, 6),  // "active"
        QT_MOC_LITERAL(348, 17),  // "updateCaptureMode"
        QT_MOC_LITERAL(366, 19),  // "updateRecorderState"
        QT_MOC_LITERAL(386, 29),  // "QMediaRecorder::RecorderState"
        QT_MOC_LITERAL(416, 5),  // "state"
        QT_MOC_LITERAL(422, 23),  // "setExposureCompensation"
        QT_MOC_LITERAL(446, 5),  // "index"
        QT_MOC_LITERAL(452, 16),  // "updateRecordTime"
        QT_MOC_LITERAL(469, 20),  // "processCapturedImage"
        QT_MOC_LITERAL(490, 9),  // "requestId"
        QT_MOC_LITERAL(500, 3),  // "img"
        QT_MOC_LITERAL(504, 17),  // "displayViewfinder"
        QT_MOC_LITERAL(522, 20),  // "displayCapturedImage"
        QT_MOC_LITERAL(543, 15),  // "readyForCapture"
        QT_MOC_LITERAL(559, 5),  // "ready"
        QT_MOC_LITERAL(565, 10),  // "imageSaved"
        QT_MOC_LITERAL(576, 2),  // "id"
        QT_MOC_LITERAL(579, 8),  // "fileName"
        QT_MOC_LITERAL(588, 13),  // "updateCameras"
        QT_MOC_LITERAL(602, 18)   // "showMetaDataDialog"
    },
    "Camera",
    "saveMetaData",
    "",
    "init",
    "setCamera",
    "QCameraDevice",
    "cameraDevice",
    "startCamera",
    "stopCamera",
    "record",
    "pause",
    "stop",
    "setMuted",
    "takeImage",
    "displayCaptureError",
    "QImageCapture::Error",
    "errorString",
    "configureCaptureSettings",
    "configureVideoSettings",
    "configureImageSettings",
    "displayRecorderError",
    "displayCameraError",
    "updateCameraDevice",
    "QAction*",
    "action",
    "updateCameraActive",
    "active",
    "updateCaptureMode",
    "updateRecorderState",
    "QMediaRecorder::RecorderState",
    "state",
    "setExposureCompensation",
    "index",
    "updateRecordTime",
    "processCapturedImage",
    "requestId",
    "img",
    "displayViewfinder",
    "displayCapturedImage",
    "readyForCapture",
    "ready",
    "imageSaved",
    "id",
    "fileName",
    "updateCameras",
    "showMetaDataDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCameraENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  188,    2, 0x0a,    1 /* Public */,
       3,    0,  189,    2, 0x08,    2 /* Private */,
       4,    1,  190,    2, 0x08,    3 /* Private */,
       7,    0,  193,    2, 0x08,    5 /* Private */,
       8,    0,  194,    2, 0x08,    6 /* Private */,
       9,    0,  195,    2, 0x08,    7 /* Private */,
      10,    0,  196,    2, 0x08,    8 /* Private */,
      11,    0,  197,    2, 0x08,    9 /* Private */,
      12,    1,  198,    2, 0x08,   10 /* Private */,
      13,    0,  201,    2, 0x08,   12 /* Private */,
      14,    3,  202,    2, 0x08,   13 /* Private */,
      17,    0,  209,    2, 0x08,   17 /* Private */,
      18,    0,  210,    2, 0x08,   18 /* Private */,
      19,    0,  211,    2, 0x08,   19 /* Private */,
      20,    0,  212,    2, 0x08,   20 /* Private */,
      21,    0,  213,    2, 0x08,   21 /* Private */,
      22,    1,  214,    2, 0x08,   22 /* Private */,
      25,    1,  217,    2, 0x08,   24 /* Private */,
      27,    0,  220,    2, 0x08,   26 /* Private */,
      28,    1,  221,    2, 0x08,   27 /* Private */,
      31,    1,  224,    2, 0x08,   29 /* Private */,
      33,    0,  227,    2, 0x08,   31 /* Private */,
      34,    2,  228,    2, 0x08,   32 /* Private */,
      37,    0,  233,    2, 0x08,   35 /* Private */,
      38,    0,  234,    2, 0x08,   36 /* Private */,
      39,    1,  235,    2, 0x08,   37 /* Private */,
      41,    2,  238,    2, 0x08,   39 /* Private */,
      44,    0,  243,    2, 0x08,   42 /* Private */,
      45,    0,  244,    2, 0x08,   43 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15, QMetaType::QString,    2,    2,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,   35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   42,   43,
    QMetaType::Void,
    QMetaType::Void,

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
        // method 'saveMetaData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCameraDevice &, std::false_type>,
        // method 'startCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'record'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMuted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'takeImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayCaptureError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImageCapture::Error, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'configureCaptureSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'configureVideoSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'configureImageSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayRecorderError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayCameraError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCameraDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'updateCameraActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateCaptureMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRecorderState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaRecorder::RecorderState, std::false_type>,
        // method 'setExposureCompensation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateRecordTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processCapturedImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        // method 'displayViewfinder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayCapturedImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readyForCapture'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'imageSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateCameras'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMetaDataDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Camera *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveMetaData(); break;
        case 1: _t->init(); break;
        case 2: _t->setCamera((*reinterpret_cast< std::add_pointer_t<QCameraDevice>>(_a[1]))); break;
        case 3: _t->startCamera(); break;
        case 4: _t->stopCamera(); break;
        case 5: _t->record(); break;
        case 6: _t->pause(); break;
        case 7: _t->stop(); break;
        case 8: _t->setMuted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->takeImage(); break;
        case 10: _t->displayCaptureError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImageCapture::Error>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->configureCaptureSettings(); break;
        case 12: _t->configureVideoSettings(); break;
        case 13: _t->configureImageSettings(); break;
        case 14: _t->displayRecorderError(); break;
        case 15: _t->displayCameraError(); break;
        case 16: _t->updateCameraDevice((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 17: _t->updateCameraActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->updateCaptureMode(); break;
        case 19: _t->updateRecorderState((*reinterpret_cast< std::add_pointer_t<QMediaRecorder::RecorderState>>(_a[1]))); break;
        case 20: _t->setExposureCompensation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->updateRecordTime(); break;
        case 22: _t->processCapturedImage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[2]))); break;
        case 23: _t->displayViewfinder(); break;
        case 24: _t->displayCapturedImage(); break;
        case 25: _t->readyForCapture((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->imageSaved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 27: _t->updateCameras(); break;
        case 28: _t->showMetaDataDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
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
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
