#ifndef CAMERA_H
#define CAMERA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Camera;
}
QT_END_NAMESPACE

class Camera : public QMainWindow
{
    Q_OBJECT

public:
    Camera();

private slots:
    void init();

    void startCamera();
    void stopCamera();

    void displayViewfinder();
    void displayCapturedImage();

    void readyForCapture(bool ready);

    void keyPressEvent(QKeyEvent *event) override;
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Camera *ui;

    QScopedPointer<Camera> m_camera;
};

#endif
