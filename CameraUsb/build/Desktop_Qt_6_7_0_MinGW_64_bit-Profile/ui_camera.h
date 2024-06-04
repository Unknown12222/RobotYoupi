/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QWidget *centralwidget;
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
    QVideoWidget *viewfinder;
    QStackedWidget *stackedWidget;
    QWidget *viewfinderPage;
    QGridLayout *gridLayout_5;
    QWidget *previewPage;
    QGridLayout *gridLayout_4;
    QLabel *lastImagePreviewLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName("Camera");
        Camera->resize(800, 600);
        centralwidget = new QWidget(Camera);
        centralwidget->setObjectName("centralwidget");
        captureWidget = new QTabWidget(centralwidget);
        captureWidget->setObjectName("captureWidget");
        captureWidget->setGeometry(QRect(624, 96, 156, 362));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 161, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

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

        verticalSpacer = new QSpacerItem(20, 76, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

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
        viewfinder = new QVideoWidget(centralwidget);
        viewfinder->setObjectName("viewfinder");
        viewfinder->setGeometry(QRect(-40, 20, 476, 356));
        stackedWidget = new QStackedWidget(viewfinder);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 0, 488, 368));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
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
        stackedWidget->addWidget(viewfinderPage);
        previewPage = new QWidget();
        previewPage->setObjectName("previewPage");
        gridLayout_4 = new QGridLayout(previewPage);
        gridLayout_4->setObjectName("gridLayout_4");
        lastImagePreviewLabel = new QLabel(previewPage);
        lastImagePreviewLabel->setObjectName("lastImagePreviewLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lastImagePreviewLabel->sizePolicy().hasHeightForWidth());
        lastImagePreviewLabel->setSizePolicy(sizePolicy1);
        lastImagePreviewLabel->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(lastImagePreviewLabel, 0, 0, 1, 1);

        stackedWidget->addWidget(previewPage);
        Camera->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Camera);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        Camera->setMenuBar(menubar);
        statusbar = new QStatusBar(Camera);
        statusbar->setObjectName("statusbar");
        Camera->setStatusBar(statusbar);

        retranslateUi(Camera);

        captureWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QMainWindow *Camera)
    {
        Camera->setWindowTitle(QCoreApplication::translate("Camera", "Camera", nullptr));
        takeImageButton->setText(QCoreApplication::translate("Camera", "Capture Photo", nullptr));
        label->setText(QCoreApplication::translate("Camera", "Exposure Compensation:", nullptr));
        captureWidget->setTabText(captureWidget->indexOf(tab_2), QCoreApplication::translate("Camera", "Image", nullptr));
        recordButton->setText(QCoreApplication::translate("Camera", "Record", nullptr));
        pauseButton->setText(QCoreApplication::translate("Camera", "Pause", nullptr));
        stopButton->setText(QCoreApplication::translate("Camera", "Stop", nullptr));
        muteButton->setText(QCoreApplication::translate("Camera", "Mute", nullptr));
        metaDataButton->setText(QCoreApplication::translate("Camera", "Set metadata", nullptr));
        captureWidget->setTabText(captureWidget->indexOf(tab), QCoreApplication::translate("Camera", "Video", nullptr));
        lastImagePreviewLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
