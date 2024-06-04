#ifndef CAMERA_H
#define CAMERA_H

#include <QMainWindow>

namespace Ui {
class Camera;
}

class Camera : public QMainWindow
{
    Q_OBJECT

public:
    Camera();

private slots:
    void init();

private:
    Ui::Camera *ui;
};

#endif // CAMERA_H
