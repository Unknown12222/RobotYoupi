#include "camera.h"
#if defined(Q_OS_ANDROID) || defined(Q_OS_IOS)
#    include "ui_camera_mobile.h"
#else
#    include "ui_camera.h"
#endif

#include <QMediaDevices>
#include <QVideoWidget>

Camera::Camera() : ui(new Ui::Camera)
{
    ui->setupUi(this);
    // disable all buttons by default
    updateCameraActive(false);
    ui->recordButton->setEnabled(false);
    ui->pauseButton->setEnabled(false);
    ui->stopButton->setEnabled(false);
    ui->metaDataButton->setEnabled(false);

    // try to actually initialize camera & mic
    init();
}

void Camera::init()
{
    m_camera.reset(new QCamera(QMediaDevices::defaultVideoInput()));
    m_captureSession.setCamera(m_camera.data());

    m_captureSession.setVideoOutput(ui->viewfinder);

    updateCameraActive(m_camera->isActive());

    m_camera->start();
}

void Camera::keyPressEvent(QKeyEvent *event)
{
    if (event->isAutoRepeat())
        return;

    switch (event->key()) {
    case Qt::Key_CameraFocus:
        displayViewfinder();
        event->accept();
        break;
    case Qt::Key_Camera:
        if (m_doImageCapture) {
            takeImage();
        } else {
            if (m_mediaRecorder->recorderState() == QMediaRecorder::RecordingState)
                stop();
            else
                record();
        }
        event->accept();
        break;
    default:
        QMainWindow::keyPressEvent(event);
    }
}

void Camera::displayViewfinder()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Camera::displayCapturedImage()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Camera::readyForCapture(bool ready)
{
    ui->takeImageButton->setEnabled(ready);
}

void Camera::updateCameraActive(bool active)
{
    if (active) {
        ui->actionStartCamera->setEnabled(false);
        ui->actionStopCamera->setEnabled(true);
        ui->captureWidget->setEnabled(true);
        ui->actionSettings->setEnabled(true);
    } else {
        ui->actionStartCamera->setEnabled(true);
        ui->actionStopCamera->setEnabled(false);
        ui->captureWidget->setEnabled(false);
        ui->actionSettings->setEnabled(false);
    }
}

#include "moc_camera.cpp"
