#include "seriallink.h"

seriallink::seriallink(QObject *parent)
    : QObject{parent}
{
    serial.setPortName("COM6");
    serial.setBaudRate(QSerialPort::Baud9600);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);

    connect(&serial, &QSerialPort::readyRead, this, &seriallink::newData);
}

seriallink::~seriallink(){
    closeConnection();
}

void seriallink::closeConnection(){
    serial.close();
}

void seriallink::openConnection(){
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
    emit gotNewData(serial.readAll());
}
