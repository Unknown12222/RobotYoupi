// Copyright (C) 2017 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include "camera.h"

#include <QCamera>
#include <QtMultimediaWidgets>
#include <QtMultimedia>

Camera::Camera() : ui(new Ui::Camera)
{
    ui->setupUi(this);

    // disable all buttons by default
    ui->captureWidget->setEnabled(false);

    // try to actually initialize camera
    init();
}

void Camera::init()
{
    // Camera devices:

    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    if (cameras.isEmpty()) {
        qWarning("No cameras found!");
        return;
    }

    QCamera *camera = new QCamera(cameras.first());
    QCameraViewfinder *viewfinder = new QCameraViewfinder(this);

    ui->viewfinder->setViewfinder(viewfinder);
    camera->setViewfinder(viewfinder);

    connect(camera, &QCamera::activeChanged, this, &Camera::updateCameraActive);
    connect(camera, &QCamera::errorOccurred, this, &Camera::displayCameraError);

    camera->start();
}

void Camera::updateCameraActive(bool active)
{
    if (active) {
        ui->actionStartCamera->setEnabled(false);
        ui->actionStopCamera->setEnabled(true);
        ui->captureWidget->setEnabled(true);
    } else {
        ui->actionStartCamera->setEnabled(true);
        ui->actionStopCamera->setEnabled(false);
        ui->captureWidget->setEnabled(false);
    }
}

void Camera::displayCameraError()
{
    if (m_camera->error() != QCamera::NoError)
        QMessageBox::warning(this, tr("Camera Error"), m_camera->errorString());
}


