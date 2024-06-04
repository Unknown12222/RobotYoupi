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
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *p_PinceOuvrir;
    QLCDNumber *lcd_byte_received;
    QPushButton *p_EpauleHaut;
    QPushButton *p_EpauleBas;
    QPushButton *p_RotationPoignet_Gauche;
    QPushButton *p_Stop;
    QPushButton *p_PoignetHaut;
    QPushButton *p_PoignetBas;
    QPushButton *p_PinceFermer;
    QTextEdit *textEdit;
    QPushButton *p_PositIni;
    QPushButton *p_CoudeHaut;
    QPushButton *p_BaseGauche;
    QPushButton *p_RotationPoignet_Droite;
    QPushButton *p_CoudeBas;
    QPushButton *p_BaseDroite;
    QStackedWidget *stackedWidget_2;
    QWidget *viewfinderPage_2;
    QGridLayout *gridLayout_6;
    QVideoWidget *viewfinder_2;
    QWidget *previewPage_2;
    QGridLayout *gridLayout_7;
    QLabel *lastImagePreviewLabel_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        p_PinceOuvrir = new QPushButton(centralwidget);
        p_PinceOuvrir->setObjectName("p_PinceOuvrir");
        p_PinceOuvrir->setGeometry(QRect(500, 440, 75, 24));
        lcd_byte_received = new QLCDNumber(centralwidget);
        lcd_byte_received->setObjectName("lcd_byte_received");
        lcd_byte_received->setGeometry(QRect(150, 460, 91, 23));
        p_EpauleHaut = new QPushButton(centralwidget);
        p_EpauleHaut->setObjectName("p_EpauleHaut");
        p_EpauleHaut->setGeometry(QRect(60, 420, 75, 24));
        p_EpauleBas = new QPushButton(centralwidget);
        p_EpauleBas->setObjectName("p_EpauleBas");
        p_EpauleBas->setGeometry(QRect(260, 420, 75, 24));
        p_RotationPoignet_Gauche = new QPushButton(centralwidget);
        p_RotationPoignet_Gauche->setObjectName("p_RotationPoignet_Gauche");
        p_RotationPoignet_Gauche->setGeometry(QRect(20, 510, 151, 24));
        p_Stop = new QPushButton(centralwidget);
        p_Stop->setObjectName("p_Stop");
        p_Stop->setGeometry(QRect(420, 470, 75, 24));
        p_PoignetHaut = new QPushButton(centralwidget);
        p_PoignetHaut->setObjectName("p_PoignetHaut");
        p_PoignetHaut->setGeometry(QRect(60, 480, 75, 24));
        p_PoignetBas = new QPushButton(centralwidget);
        p_PoignetBas->setObjectName("p_PoignetBas");
        p_PoignetBas->setGeometry(QRect(260, 480, 75, 24));
        p_PinceFermer = new QPushButton(centralwidget);
        p_PinceFermer->setObjectName("p_PinceFermer");
        p_PinceFermer->setGeometry(QRect(500, 500, 75, 24));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(140, 440, 111, 20));
        p_PositIni = new QPushButton(centralwidget);
        p_PositIni->setObjectName("p_PositIni");
        p_PositIni->setGeometry(QRect(580, 470, 75, 24));
        p_CoudeHaut = new QPushButton(centralwidget);
        p_CoudeHaut->setObjectName("p_CoudeHaut");
        p_CoudeHaut->setGeometry(QRect(260, 450, 75, 24));
        p_BaseGauche = new QPushButton(centralwidget);
        p_BaseGauche->setObjectName("p_BaseGauche");
        p_BaseGauche->setGeometry(QRect(60, 390, 75, 24));
        p_BaseGauche->setCheckable(false);
        p_RotationPoignet_Droite = new QPushButton(centralwidget);
        p_RotationPoignet_Droite->setObjectName("p_RotationPoignet_Droite");
        p_RotationPoignet_Droite->setGeometry(QRect(220, 510, 151, 24));
        p_CoudeBas = new QPushButton(centralwidget);
        p_CoudeBas->setObjectName("p_CoudeBas");
        p_CoudeBas->setGeometry(QRect(60, 450, 75, 24));
        p_BaseDroite = new QPushButton(centralwidget);
        p_BaseDroite->setObjectName("p_BaseDroite");
        p_BaseDroite->setGeometry(QRect(260, 390, 75, 24));
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(50, 10, 701, 361));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget_2->sizePolicy().hasHeightForWidth());
        stackedWidget_2->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(145, 145, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        stackedWidget_2->setPalette(palette);
        viewfinderPage_2 = new QWidget();
        viewfinderPage_2->setObjectName("viewfinderPage_2");
        gridLayout_6 = new QGridLayout(viewfinderPage_2);
        gridLayout_6->setObjectName("gridLayout_6");
        viewfinder_2 = new QVideoWidget(viewfinderPage_2);
        viewfinder_2->setObjectName("viewfinder_2");

        gridLayout_6->addWidget(viewfinder_2, 0, 0, 1, 1);

        stackedWidget_2->addWidget(viewfinderPage_2);
        previewPage_2 = new QWidget();
        previewPage_2->setObjectName("previewPage_2");
        gridLayout_7 = new QGridLayout(previewPage_2);
        gridLayout_7->setObjectName("gridLayout_7");
        lastImagePreviewLabel_2 = new QLabel(previewPage_2);
        lastImagePreviewLabel_2->setObjectName("lastImagePreviewLabel_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lastImagePreviewLabel_2->sizePolicy().hasHeightForWidth());
        lastImagePreviewLabel_2->setSizePolicy(sizePolicy1);
        lastImagePreviewLabel_2->setFrameShape(QFrame::Box);

        gridLayout_7->addWidget(lastImagePreviewLabel_2, 0, 0, 1, 1);

        stackedWidget_2->addWidget(previewPage_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        p_PinceOuvrir->setText(QCoreApplication::translate("MainWindow", "PinceOuvrir", nullptr));
        p_EpauleHaut->setText(QCoreApplication::translate("MainWindow", "Epaule", nullptr));
        p_EpauleBas->setText(QCoreApplication::translate("MainWindow", "Epaule", nullptr));
        p_RotationPoignet_Gauche->setText(QCoreApplication::translate("MainWindow", "Rotation Main", nullptr));
        p_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        p_PoignetHaut->setText(QCoreApplication::translate("MainWindow", "Poignet", nullptr));
        p_PoignetBas->setText(QCoreApplication::translate("MainWindow", "Poignet", nullptr));
        p_PinceFermer->setText(QCoreApplication::translate("MainWindow", "PinceFermer", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Byte Received</p></body></html>", nullptr));
        p_PositIni->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        p_CoudeHaut->setText(QCoreApplication::translate("MainWindow", "Coude", nullptr));
        p_BaseGauche->setText(QCoreApplication::translate("MainWindow", "Base", nullptr));
        p_RotationPoignet_Droite->setText(QCoreApplication::translate("MainWindow", "Rotation Main", nullptr));
        p_CoudeBas->setText(QCoreApplication::translate("MainWindow", "Coude", nullptr));
        p_BaseDroite->setText(QCoreApplication::translate("MainWindow", "Base", nullptr));
        lastImagePreviewLabel_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
