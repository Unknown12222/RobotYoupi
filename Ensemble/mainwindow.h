#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "seriallink.h"
#include "websocketserver.h"
// #include "camera.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void updateGUI(QByteArray data);
    void onWebSocketMessageReceived(const QString &message);

private slots:

    void on_p_BaseGauche_clicked();

    void on_p_BaseDroite_clicked();

    void on_p_CoudeBas_clicked();

    void on_p_CoudeHaut_clicked();

    void on_p_PoignetBas_clicked();

    void on_p_PoignetHaut_clicked();

    void on_p_RotationPoignet_Gauche_clicked();

    void on_p_RotationPoignet_Droite_clicked();

    void on_p_PinceOuvrir_clicked();

    void on_p_PinceFermer_clicked();

    void on_p_EpauleHaut_clicked();

    void on_p_EpauleBas_clicked();

    void on_p_PositIni_clicked();

private:
    Ui::MainWindow *ui;
    seriallink *arduino;

};
#endif // MAINWINDOW_H
