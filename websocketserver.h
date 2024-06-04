#ifndef WEBSERVERSOCKET_H
#define WEBSERVERSOCKET_H

#include <QObject>
#include <QWebSocketServer>

class WebSocketServer : public QObject {
    Q_OBJECT
public:

    // Constructeur de la classe, prend un port et un parent en paramètre
    explicit WebSocketServer(quint16 port, QObject *parent = nullptr);

signals:

    // Signal émis lorsque un message est reçu
    void messageReceived(const QString &message);

private slots:

    // Slot appelé lorsque une nouvelle connexion est établie
    void onNewConnection();

    // Slot appelé lorsque un message texte est reçu
    void processTextMessage(const QString &message);

    // Slot appelé lorsque une socket est déconnectée
    void socketDisconnected();

private:

    // Pointeur vers le serveur WebSocket
    QWebSocketServer *server;
};

#endif // WEBSERVERSOCKET_H
