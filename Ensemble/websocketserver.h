#ifndef WEBSERVERSOCKET_H
#define WEBSERVERSOCKET_H

#include <QObject>
#include <QWebSocketServer>

class WebSocketServer : public QObject {
    Q_OBJECT
public:
    explicit WebSocketServer(quint16 port, QObject *parent = nullptr);

signals:
    void messageReceived(const QString &message);
    void letterReceived( QString letter);

private slots:
    void onNewConnection();
    void processTextMessage(const QString &message);
    void socketDisconnected();

private:
    QWebSocketServer *server;
};

#endif // WEBSERVERSOCKET_H
