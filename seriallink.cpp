#include "seriallink.h"

seriallink::seriallink(QObject *parent)
    : QObject{parent}
{
    //Les Parametres de l'Arduino qui permetre de avoir access
    serial.setPortName("COM6");
    serial.setBaudRate(QSerialPort::Baud9600);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);

    //S'il y a un nouveau data dans le serial port newData va être appeler
    connect(&serial, &QSerialPort::readyRead, this, &seriallink::newData);
}

seriallink::~seriallink(){
    closeConnection();
}

void seriallink::closeConnection(){
    serial.close();
}

void seriallink::openConnection(){

    // Verification d'ouverture de serial port
    if(!serial.open(QIODevice::ReadWrite))
        qDebug() << "Connection impossible";

    else qDebug() << "Connected";
}

void seriallink::write(const char *Letter){
    serial.write(Letter);
}

bool seriallink::isOpen(){
    return serial.isOpen();
}

bool seriallink::isWritable(){
    return serial.isWritable();
}

void seriallink::newData(){

    //Lire le serial port et rentrer dans la variable QByteArray
    emit gotNewData(serial.readAll());
}
