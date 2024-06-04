#ifndef SERIALLINK_H
#define SERIALLINK_H

#include <QObject>

#include <QSerialPort>
#include <QDebug>

class seriallink : public QObject
{
    Q_OBJECT
public:
    explicit seriallink(QObject *parent = nullptr);
    ~seriallink();

    // Fontion pour Ouvrir la connection serial Port de l'Arduino
    void openConnection();

    // Fermer la connection serial Port de l'Arduino
    void closeConnection();

    // Pour stocker la lettre a taper dans les bouton mainwindow à la parametre Letter
    void write(const char* Letter);

    // Verification si l'Arduino est connecter
    bool isOpen();

    // Verification si l'Arduino est possible d'érire
    bool isWritable();

private slots:

    //Pour voir s'il y a de nouveau valeur a lire dans serial port
    void newData();

signals:

    //Stocker la nouveau valeur lire dans le serial port dans la parametre data
    void gotNewData(QByteArray data);

private:

    //Creation d'OBJET de class QSerialPort
    QSerialPort serial;
};

#endif // SERIALLINK_H
