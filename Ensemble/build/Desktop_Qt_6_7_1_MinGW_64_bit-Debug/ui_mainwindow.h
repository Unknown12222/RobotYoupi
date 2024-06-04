/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QLCDNumber *lcd_byte_received;
    QPushButton *p_CoudeBas;
    QPushButton *p_CoudeHaut;
    QPushButton *p_PinceFermer;
    QPushButton *p_PositIni;
    QPushButton *p_BaseDroite;
    QPushButton *p_PoignetHaut;
    QPushButton *p_RotationPoignet_Droite;
    QTextEdit *textEdit;
    QPushButton *p_RotationPoignet_Gauche;
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
        lcd_byte_received = new QLCDNumber(statuswidget);
        lcd_byte_received->setObjectName("lcd_byte_received");
        lcd_byte_received->setGeometry(QRect(190, 460, 91, 23));
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
        p_RotationPoignet_Droite = new QPushButton(statuswidget);
        p_RotationPoignet_Droite->setObjectName("p_RotationPoignet_Droite");
        p_RotationPoignet_Droite->setGeometry(QRect(260, 500, 151, 24));
        textEdit = new QTextEdit(statuswidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(180, 440, 111, 20));
        p_RotationPoignet_Gauche = new QPushButton(statuswidget);
        p_RotationPoignet_Gauche->setObjectName("p_RotationPoignet_Gauche");
        p_RotationPoignet_Gauche->setGeometry(QRect(60, 500, 151, 24));
        graphicsView = new QGraphicsView(statuswidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(60, 50, 631, 321));
        MainWindow->setCentralWidget(statuswidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 756, 21));
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
        p_RotationPoignet_Droite->setText(QCoreApplication::translate("MainWindow", "Rotation Main", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Byte Received</p></body></html>", nullptr));
        p_RotationPoignet_Gauche->setText(QCoreApplication::translate("MainWindow", "Rotation Main", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
