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
        MainWindow->resize(758, 621);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: beige"));
        statuswidget = new QWidget(MainWindow);
        statuswidget->setObjectName("statuswidget");
        p_EpauleHaut = new QPushButton(statuswidget);
        p_EpauleHaut->setObjectName("p_EpauleHaut");
        p_EpauleHaut->setGeometry(QRect(80, 500, 121, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rubik")});
        font.setBold(true);
        p_EpauleHaut->setFont(font);
        p_EpauleHaut->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_PoignetBas = new QPushButton(statuswidget);
        p_PoignetBas->setObjectName("p_PoignetBas");
        p_PoignetBas->setGeometry(QRect(350, 420, 121, 24));
        p_PoignetBas->setFont(font);
        p_PoignetBas->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_BaseGauche = new QPushButton(statuswidget);
        p_BaseGauche->setObjectName("p_BaseGauche");
        p_BaseGauche->setGeometry(QRect(80, 540, 121, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rubik")});
        font1.setBold(true);
        font1.setItalic(false);
        p_BaseGauche->setFont(font1);
        p_BaseGauche->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_BaseGauche->setCheckable(false);
        p_EpauleBas = new QPushButton(statuswidget);
        p_EpauleBas->setObjectName("p_EpauleBas");
        p_EpauleBas->setGeometry(QRect(350, 500, 121, 24));
        p_EpauleBas->setFont(font);
        p_EpauleBas->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_PinceOuvrir = new QPushButton(statuswidget);
        p_PinceOuvrir->setObjectName("p_PinceOuvrir");
        p_PinceOuvrir->setGeometry(QRect(590, 400, 101, 24));
        p_PinceOuvrir->setFont(font);
        p_PinceOuvrir->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_CoudeBas = new QPushButton(statuswidget);
        p_CoudeBas->setObjectName("p_CoudeBas");
        p_CoudeBas->setGeometry(QRect(350, 460, 121, 24));
        p_CoudeBas->setFont(font);
        p_CoudeBas->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_CoudeHaut = new QPushButton(statuswidget);
        p_CoudeHaut->setObjectName("p_CoudeHaut");
        p_CoudeHaut->setGeometry(QRect(80, 460, 121, 24));
        p_CoudeHaut->setFont(font);
        p_CoudeHaut->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_PinceFermer = new QPushButton(statuswidget);
        p_PinceFermer->setObjectName("p_PinceFermer");
        p_PinceFermer->setGeometry(QRect(590, 540, 101, 24));
        p_PinceFermer->setFont(font);
        p_PinceFermer->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_PositIni = new QPushButton(statuswidget);
        p_PositIni->setObjectName("p_PositIni");
        p_PositIni->setGeometry(QRect(590, 470, 101, 24));
        p_PositIni->setFont(font);
        p_PositIni->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_BaseDroite = new QPushButton(statuswidget);
        p_BaseDroite->setObjectName("p_BaseDroite");
        p_BaseDroite->setGeometry(QRect(350, 540, 121, 24));
        p_BaseDroite->setFont(font);
        p_BaseDroite->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_PoignetHaut = new QPushButton(statuswidget);
        p_PoignetHaut->setObjectName("p_PoignetHaut");
        p_PoignetHaut->setGeometry(QRect(80, 420, 121, 24));
        p_PoignetHaut->setFont(font);
        p_PoignetHaut->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_RotationMain_Droite = new QPushButton(statuswidget);
        p_RotationMain_Droite->setObjectName("p_RotationMain_Droite");
        p_RotationMain_Droite->setGeometry(QRect(330, 380, 161, 24));
        p_RotationMain_Droite->setFont(font);
        p_RotationMain_Droite->setStyleSheet(QString::fromUtf8("background-color: white"));
        p_RotationMain_Gauche = new QPushButton(statuswidget);
        p_RotationMain_Gauche->setObjectName("p_RotationMain_Gauche");
        p_RotationMain_Gauche->setGeometry(QRect(60, 380, 161, 24));
        p_RotationMain_Gauche->setFont(font);
        p_RotationMain_Gauche->setAutoFillBackground(false);
        p_RotationMain_Gauche->setStyleSheet(QString::fromUtf8("background-color: white"));
        graphicsView = new QGraphicsView(statuswidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(60, 50, 631, 321));
        MainWindow->setCentralWidget(statuswidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 758, 22));
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
        p_EpauleHaut->setText(QCoreApplication::translate("MainWindow", "Epaule en Haut", nullptr));
        p_PoignetBas->setText(QCoreApplication::translate("MainWindow", "Poignet en Haut", nullptr));
        p_BaseGauche->setText(QCoreApplication::translate("MainWindow", "Base \303\240 Gauche", nullptr));
        p_EpauleBas->setText(QCoreApplication::translate("MainWindow", "Epaule en Haut", nullptr));
        p_PinceOuvrir->setText(QCoreApplication::translate("MainWindow", "Ouvrir la pince", nullptr));
        p_CoudeBas->setText(QCoreApplication::translate("MainWindow", "Coude en Bas", nullptr));
        p_CoudeHaut->setText(QCoreApplication::translate("MainWindow", "Coude en Haut", nullptr));
        p_PinceFermer->setText(QCoreApplication::translate("MainWindow", "Fermer la Pince", nullptr));
        p_PositIni->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        p_BaseDroite->setText(QCoreApplication::translate("MainWindow", "Base \303\240 Droite", nullptr));
        p_PoignetHaut->setText(QCoreApplication::translate("MainWindow", "Poignet en Bas", nullptr));
        p_RotationMain_Droite->setText(QCoreApplication::translate("MainWindow", "Rotation Main \303\240 Droite", nullptr));
        p_RotationMain_Gauche->setText(QCoreApplication::translate("MainWindow", "Rotation Main \303\240 Gauche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
