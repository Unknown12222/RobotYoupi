#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    arduino = new seriallink;

    arduino->openConnection();
    connect(arduino, &seriallink::gotNewData,  this, &MainWindow::updateGUI);

    WebSocketServer *websocketServer = new WebSocketServer(1234, this);
    connect(websocketServer, &WebSocketServer::messageReceived, this, &MainWindow::onWebSocketMessageReceived);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateGUI(QByteArray data){
    ui->lcd_byte_received->display(ui->lcd_byte_received->value() + data.size());
}

/* Les Commandes pour bouger la robot :
B = base
C = Coude
E = epaule
M =
*/

void MainWindow::onWebSocketMessageReceived(const QString &message)
{
    if (arduino->isWritable()) {
        arduino->write(message.toUtf8());
        qDebug() << message;
    } else {
        qDebug() << "Couldn't write to serial.";
    }
}
void MainWindow::on_p_BaseGauche_clicked()
{
    if(arduino->isWritable()){
        arduino->write("B");
        // ui->p_BaseGauche->setStyleSheet("background-color: red");
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


void MainWindow::on_p_RotationPoignet_Gauche_clicked()
{
    if(arduino->isWritable()){
        arduino->write("R");
    }

    else
        qDebug() << "Coudln't write to serial.";
}


void MainWindow::on_p_RotationPoignet_Droite_clicked()
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
