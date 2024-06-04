#include "camerapreview.h"

CameraPreview::CameraPreview(QGraphicsView *view, QObject *parent)
    : QObject(parent)
{
    // Créer une session de capture média
    captureSession = new QMediaCaptureSession(this);

    // Créer un objet camera et le définir dans la session de capture
    camera = new QCamera;
    captureSession->setCamera(camera);

    // Créer un élément video et une scène
    videoItem = new QGraphicsVideoItem;
    scene = new QGraphicsScene(this);
    view->setScene(scene);

    // Ajouter l'élèment vidéo à la scène
    scene->addItem(videoItem);

    // Définir la sortie vidéo de la session de capture sur l'élèment vidéo
    captureSession->setVideoOutput(videoItem);

    // Démerrer la prévisualisation de la caméra
    camera->start();



}
