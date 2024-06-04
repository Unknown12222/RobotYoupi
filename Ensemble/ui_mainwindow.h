/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *statuswidget;
    QPushButton *p_EpauleHaut;
    QPushButton *p_PoignetBas;
    QPushButton *p_Stop;
    QPushButton *p_BaseGauche;
    QPushButton *p_EpauleBas;
    QPushButton *p_PinceOuvrir;
    QPushButton *p_CoudeBas;
    QPushButton *p_CoudeHaut;
    QPushButton *p_PinceFermer;
    QPushButton *p_PositIni;
    QPushButton *p_BaseDroite;
    QPushButton *p_PoignetHaut;
    QPushButton *p_RotationMain_Droite;
    QPushButton *p_RotationMain_Gauche;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(756, 600);
        statuswidget = new QWidget(MainWindow);
        statuswidget->setObjectName("statuswidget");
        p_EpauleHaut = new QPushButton(statuswidget);
        p_EpauleHaut->setObjectName("p_EpauleHaut");
        p_EpauleHaut->setGeometry(QRect(100, 410, 75, 24));
        p_PoignetBas = new QPushButton(statuswidget);
        p_PoignetBas->setObjectName("p_PoignetBas");
        p_PoignetBas->setGeometry(QRect(300, 470, 75, 24));
        p_Stop = new QPushButton(statuswidget);
        p_Stop->setObjectName("p_Stop");
        p_Stop->setGeometry(QRect(460, 460, 75, 24));
        p_BaseGauche = new QPushButton(statuswidget);
        p_BaseGauche->setObjectName("p_BaseGauche");
        p_BaseGauche->setGeometry(QRect(100, 380, 75, 24));
        p_BaseGauche->setCheckable(false);
        p_EpauleBas = new QPushButton(statuswidget);
        p_EpauleBas->setObjectName("p_EpauleBas");
        p_EpauleBas->setGeometry(QRect(300, 410, 75, 24));
        p_PinceOuvrir = new QPushButton(statuswidget);
        p_PinceOuvrir->setObjectName("p_PinceOuvrir");
        p_PinceOuvrir->setGeometry(QRect(540, 430, 75, 24));
        p_CoudeBas = new QPushButton(statuswidget);
        p_CoudeBas->setObjectName("p_CoudeBas");
        p_CoudeBas->setGeometry(QRect(100, 440, 75, 24));
        p_CoudeHaut = new QPushButton(statuswidget);
        p_CoudeHaut->setObjectName("p_CoudeHaut");
        p_CoudeHaut->setGeometry(QRect(300, 440, 75, 24));
        p_PinceFermer = new QPushButton(statuswidget);
        p_PinceFermer->setObjectName("p_PinceFermer");
        p_PinceFermer->setGeometry(QRect(540, 490, 75, 24));
        p_PositIni = new QPushButton(statuswidget);
        p_PositIni->setObjectName("p_PositIni");
        p_PositIni->setGeometry(QRect(620, 460, 75, 24));
        p_BaseDroite = new QPushButton(statuswidget);
        p_BaseDroite->setObjectName("p_BaseDroite");
        p_BaseDroite->setGeometry(QRect(300, 380, 75, 24));
        p_PoignetHaut = new QPushButton(statuswidget);
        p_PoignetHaut->setObjectName("p_PoignetHaut");
        p_PoignetHaut->setGeometry(QRect(100, 470, 75, 24));
        p_RotationMain_Droite = new QPushButton(statuswidget);
        p_RotationMain_Droite->setObjectName("p_RotationMain_Droite");
        p_RotationMain_Droite->setGeometry(QRect(260, 500, 151, 24));
        p_RotationMain_Gauche = new QPushButton(statuswidget);
        p_RotationMain_Gauche->setObjectName("p_RotationMain_Gauche");
        p_RotationMain_Gauche->setGeometry(QRect(60, 500, 151, 24));
        graphicsView = new QGraphicsView(statuswidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(60, 50, 631, 321));
        MainWindow->setCentralWidget(statuswidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 756, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        p_EpauleHaut->setText(QCoreApplication::translate("MainWindow", "Epaule", nullptr));
        p_PoignetBas->setText(QCoreApplication::translate("MainWindow", "Poignet", nullptr));
        p_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        p_BaseGauche->setText(QCoreApplication::translate("MainWindow", "Base", nullptr));
        p_EpauleBas->setText(QCoreApplication::translate("MainWindow", "Epaule", nullptr));
        p_PinceOuvrir->setText(QCoreApplication::translate("MainWindow", "PinceOuvrir", nullptr));
        p_CoudeBas->setText(QCoreApplication::translate("MainWindow", "Coude", nullptr));
        p_CoudeHaut->setText(QCoreApplication::translate("MainWindow", "Coude", nullptr));
        p_PinceFermer->setText(QCoreApplication::translate("MainWindow", "PinceFermer", nullptr));
        p_PositIni->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        p_BaseDroite->setText(QCoreApplication::translate("MainWindow", "Base", nullptr));
        p_PoignetHaut->setText(QCoreApplication::translate("MainWindow", "Poignet", nullptr));
        p_RotationMain_Droite->setText(QCoreApplication::translate("MainWindow", "Rotation Main", nullptr));
        p_RotationMain_Gauche->setText(QCoreApplication::translate("MainWindow", "Rotation Main", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
