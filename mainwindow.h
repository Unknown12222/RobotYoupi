#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPalette>
#include "seriallink.h"
#include "websocketserver.h"
#include "camerapreview.h"

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
    // Fonction pour stocker la lettre reçu a l'Arduino
    void onWebSocketMessageReceived(const QString &message);

private slots:
    // Fontion pour bouger le BASE de Robot vers GAUCHE
    void on_p_BaseGauche_clicked();

    // Fontion pour bouger le BASE de Robot vers DROITE
    void on_p_BaseDroite_clicked();

    // Fontion pour bouger le COUDE de Robot vers BAS
    void on_p_CoudeBas_clicked();

    // Fontion pour bouger le COUDE de Robot vers HAUT
    void on_p_CoudeHaut_clicked();

    // Fontion pour bouger le POIGNET de Robot vers BAS
    void on_p_PoignetBas_clicked();

    // Fontion pour bouger le POIGNET de Robot vers HAUT
    void on_p_PoignetHaut_clicked();

    // Fontion pour bouger le MAIN de Robot vers GAUCHE
    void on_p_RotationMain_Gauche_clicked();

    // Fontion pour bouger le MAIN de Robot vers DROITE
    void on_p_RotationMain_Droite_clicked();

    // Fontion pour bouger le PINCE de Robot vers OUVRIR
    void on_p_PinceOuvrir_clicked();

    // Fontion pour bouger le PINCE de Robot vers FERMER
    void on_p_PinceFermer_clicked();

    // Fontion pour bouger le EPAULE de Robot vers HAUT
    void on_p_EpauleHaut_clicked();

    // Fontion pour bouger le EPAULE de Robot vers BAS
    void on_p_EpauleBas_clicked();

    // Fontion pour bouger le BRAS de Robot vers POSITION INITIAL
    void on_p_PositIni_clicked();

private:
    Ui::MainWindow *ui;

    // Objet de classe seriallink
    seriallink *arduino;

};
#endif // MAINWINDOW_H
