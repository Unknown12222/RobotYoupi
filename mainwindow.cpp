#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "camerapreview.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette palettecyan, palettedarkred;
    palettecyan.setColor(QPalette::Window, Qt::black);
    palettedarkred.setColor(QPalette::ButtonText, Qt::black);
    this->setPalette(palettecyan);
    ui->p_BaseGauche->setPalette(palettedarkred);

    arduino = new seriallink;   // Creation d'un OBJET de class seriallink

    // Creation d'un nouveau widget Graphics View
    QGraphicsView *view = new QGraphicsView(this);  // Creation d'un nouveau widget Graphics View

    // Creation D'un OBJET de class CameraPreview
    CameraPreview *cameraPreview = new CameraPreview(view);

    // Fonction pour determiner la taille et place de widget GRAPHICS VIEW
    view->setGeometry(60, 50, 631, 321);

    // Ouvrir le connection de l'Arduino
    arduino->openConnection();

    // Creation d'un OBJET de class WebSocketServer
    WebSocketServer *websocketServer = new WebSocketServer(1234, this);

    // Pour deplacer la donnée dans messageReceived dans le Slot onWebSocketMessageReceived
    connect(websocketServer, &WebSocketServer::messageReceived, this, &MainWindow::onWebSocketMessageReceived);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Les Commandes pour bouger la robot :
B/b = Base
C/c = Coude
E/e = Epaule
M/m = Poignet
R/r = Main
O/o = Pince
I   = Le Bras Entier
*/

// Fonction pour stocker la lettre reçu de la Tablette/Client a l'Arduino
void MainWindow::onWebSocketMessageReceived(const QString &message)
{
    //Verification si l'Arduino est possible d'écrire
    if (arduino->isWritable()) {

        // Envoyer la lettre dans le variable message à l'Arduino
        arduino->write(message.toUtf8());
        qDebug() << message;
    } else {
        qDebug() << "Couldn't write to serial.";
    }
}

// Voir mainwindow.h pour l'explication des prochaines methodes
void MainWindow::on_p_BaseGauche_clicked()
{
    //Verification si l'Arduino est possible d'écrire
    if(arduino->isWritable()){

        // Envoyer la lettre à l'Arduino
        arduino->write("B");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_BaseDroite_clicked()
{
    if(arduino->isWritable()){

        arduino->write("b");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_CoudeBas_clicked()
{
    if(arduino->isWritable()){

        arduino->write("C");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_CoudeHaut_clicked()
{
    if(arduino->isWritable()){

        arduino->write("c");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_PoignetBas_clicked()
{
    if(arduino->isWritable()){

        arduino->write("M");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_PoignetHaut_clicked()
{
    if(arduino->isWritable()){

        arduino->write("m");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_RotationMain_Gauche_clicked()
{
    if(arduino->isWritable()){

        arduino->write("R");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_RotationMain_Droite_clicked()
{
    if(arduino->isWritable()){

        arduino->write("r");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_PinceOuvrir_clicked()
{
    if(arduino->isWritable()){

        arduino->write("O");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_PinceFermer_clicked()
{
    if(arduino->isWritable()){

        arduino->write("o");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_EpauleHaut_clicked()
{
    if(arduino->isWritable()){

        arduino->write("E");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_EpauleBas_clicked()
{
    if(arduino->isWritable()){

        arduino->write("e");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_PositIni_clicked()
{
    if(arduino->isWritable()){

        arduino->write("I");
    }

    else
        qDebug() << "Cound't write to serial.";
}
