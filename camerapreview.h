#ifndef CAMERAPREVIEW_H
#define CAMERAPREVIEW_H

#include <QMediaCaptureSession>
#include <QCamera>
#include <QVideoWidget>
#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsVideoItem>

class CameraPreview : public QObject
{
    Q_OBJECT
public:
    CameraPreview(QGraphicsView *view, QObject *parent = nullptr);

private:
    QMediaCaptureSession *captureSession;   // Objet QMediaCaptureSession utilisé pour capturer la video
    QCamera *camera;                        // Objet QCamera utilisé pour contrôler la camera
    QGraphicsVideoItem *videoItem;          // Objet QGraphicsVideoItem utilisé pour afficher la video dans une scene graphique
    QGraphicsScene *scene;                  // Objet QGraphicsScene utilisé pour gérer la scene graphique
};

#endif // CAMERAPREVIEW_H
