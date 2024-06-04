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
#include <QtGui/QIcon>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
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
    QTabWidget *captureWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *takeImageButton;
    QSlider *exposureCompensation;
    QLabel *label;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPushButton *recordButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QSpacerItem *verticalSpacer;
    QPushButton *muteButton;
    QPushButton *metaDataButton;
    QStackedWidget *stackedWidget;
    QWidget *viewfinderPage;
    QGridLayout *gridLayout_5;
    QVideoWidget *viewfinder;
    QWidget *previewPage;
    QGridLayout *gridLayout_4;
    QLabel *lastImagePreviewLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        p_EpauleHaut = new QPushButton(centralwidget);
        p_EpauleHaut->setObjectName("p_EpauleHaut");
        p_EpauleHaut->setGeometry(QRect(100, 410, 75, 24));
        p_PoignetBas = new QPushButton(centralwidget);
        p_PoignetBas->setObjectName("p_PoignetBas");
        p_PoignetBas->setGeometry(QRect(300, 470, 75, 24));
        p_Stop = new QPushButton(centralwidget);
        p_Stop->setObjectName("p_Stop");
        p_Stop->setGeometry(QRect(460, 460, 75, 24));
        p_BaseGauche = new QPushButton(centralwidget);
        p_BaseGauche->setObjectName("p_BaseGauche");
        p_BaseGauche->setGeometry(QRect(100, 380, 75, 24));
        p_BaseGauche->setCheckable(false);
        p_EpauleBas = new QPushButton(centralwidget);
        p_EpauleBas->setObjectName("p_EpauleBas");
        p_EpauleBas->setGeometry(QRect(300, 410, 75, 24));
        p_PinceOuvrir = new QPushButton(centralwidget);
        p_PinceOuvrir->setObjectName("p_PinceOuvrir");
        p_PinceOuvrir->setGeometry(QRect(540, 430, 75, 24));
        lcd_byte_received = new QLCDNumber(centralwidget);
        lcd_byte_received->setObjectName("lcd_byte_received");
        lcd_byte_received->setGeometry(QRect(190, 460, 91, 23));
        p_CoudeBas = new QPushButton(centralwidget);
        p_CoudeBas->setObjectName("p_CoudeBas");
        p_CoudeBas->setGeometry(QRect(100, 440, 75, 24));
        p_CoudeHaut = new QPushButton(centralwidget);
        p_CoudeHaut->setObjectName("p_CoudeHaut");
        p_CoudeHaut->setGeometry(QRect(300, 440, 75, 24));
        p_PinceFermer = new QPushButton(centralwidget);
        p_PinceFermer->setObjectName("p_PinceFermer");
        p_PinceFermer->setGeometry(QRect(540, 490, 75, 24));
        p_PositIni = new QPushButton(centralwidget);
        p_PositIni->setObjectName("p_PositIni");
        p_PositIni->setGeometry(QRect(620, 460, 75, 24));
        p_BaseDroite = new QPushButton(centralwidget);
        p_BaseDroite->setObjectName("p_BaseDroite");
        p_BaseDroite->setGeometry(QRect(300, 380, 75, 24));
        p_PoignetHaut = new QPushButton(centralwidget);
        p_PoignetHaut->setObjectName("p_PoignetHaut");
        p_PoignetHaut->setGeometry(QRect(100, 470, 75, 24));
        p_RotationPoignet_Droite = new QPushButton(centralwidget);
        p_RotationPoignet_Droite->setObjectName("p_RotationPoignet_Droite");
        p_RotationPoignet_Droite->setGeometry(QRect(260, 500, 151, 24));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(180, 440, 111, 20));
        p_RotationPoignet_Gauche = new QPushButton(centralwidget);
        p_RotationPoignet_Gauche->setObjectName("p_RotationPoignet_Gauche");
        p_RotationPoignet_Gauche->setGeometry(QRect(60, 500, 151, 24));
        captureWidget = new QTabWidget(centralwidget);
        captureWidget->setObjectName("captureWidget");
        captureWidget->setGeometry(QRect(540, 10, 156, 362));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 161, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        takeImageButton = new QPushButton(tab_2);
        takeImageButton->setObjectName("takeImageButton");
        takeImageButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/shutter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        takeImageButton->setIcon(icon);

        gridLayout->addWidget(takeImageButton, 0, 0, 1, 1);

        exposureCompensation = new QSlider(tab_2);
        exposureCompensation->setObjectName("exposureCompensation");
        exposureCompensation->setMinimum(-4);
        exposureCompensation->setMaximum(4);
        exposureCompensation->setPageStep(2);
        exposureCompensation->setOrientation(Qt::Horizontal);
        exposureCompensation->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(exposureCompensation, 5, 0, 1, 1);

        label = new QLabel(tab_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 1);

        captureWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        recordButton = new QPushButton(tab);
        recordButton->setObjectName("recordButton");

        gridLayout_2->addWidget(recordButton, 0, 0, 1, 1);

        pauseButton = new QPushButton(tab);
        pauseButton->setObjectName("pauseButton");

        gridLayout_2->addWidget(pauseButton, 1, 0, 1, 1);

        stopButton = new QPushButton(tab);
        stopButton->setObjectName("stopButton");

        gridLayout_2->addWidget(stopButton, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        muteButton = new QPushButton(tab);
        muteButton->setObjectName("muteButton");
        muteButton->setCheckable(true);

        gridLayout_2->addWidget(muteButton, 4, 0, 1, 1);

        metaDataButton = new QPushButton(tab);
        metaDataButton->setObjectName("metaDataButton");
        metaDataButton->setCheckable(true);

        gridLayout_2->addWidget(metaDataButton, 5, 0, 1, 1);

        captureWidget->addTab(tab, QString());
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(46, 4, 488, 368));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
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
        stackedWidget->setPalette(palette);
        viewfinderPage = new QWidget();
        viewfinderPage->setObjectName("viewfinderPage");
        gridLayout_5 = new QGridLayout(viewfinderPage);
        gridLayout_5->setObjectName("gridLayout_5");
        viewfinder = new QVideoWidget(viewfinderPage);
        viewfinder->setObjectName("viewfinder");

        gridLayout_5->addWidget(viewfinder, 0, 0, 1, 1);

        stackedWidget->addWidget(viewfinderPage);
        previewPage = new QWidget();
        previewPage->setObjectName("previewPage");
        gridLayout_4 = new QGridLayout(previewPage);
        gridLayout_4->setObjectName("gridLayout_4");
        lastImagePreviewLabel = new QLabel(previewPage);
        lastImagePreviewLabel->setObjectName("lastImagePreviewLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lastImagePreviewLabel->sizePolicy().hasHeightForWidth());
        lastImagePreviewLabel->setSizePolicy(sizePolicy1);
        lastImagePreviewLabel->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(lastImagePreviewLabel, 0, 0, 1, 1);

        stackedWidget->addWidget(previewPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        captureWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


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
        takeImageButton->setText(QCoreApplication::translate("MainWindow", "Capture Photo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Exposure Compensation:", nullptr));
        captureWidget->setTabText(captureWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Image", nullptr));
        recordButton->setText(QCoreApplication::translate("MainWindow", "Record", nullptr));
        pauseButton->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        muteButton->setText(QCoreApplication::translate("MainWindow", "Mute", nullptr));
        metaDataButton->setText(QCoreApplication::translate("MainWindow", "Set metadata", nullptr));
        captureWidget->setTabText(captureWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Video", nullptr));
        lastImagePreviewLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
