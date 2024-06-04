#include "websocketserver.h"
#include <QCoreApplication>
#include <QWebSocket>
#include <QDebug>

WebSocketServer::WebSocketServer(quint16 port, QObject *parent) : QObject(parent) {

    // Creation d'un OBJET de class QWebSocketServer
    server = new QWebSocketServer(QStringLiteral("WebSocket Server"), QWebSocketServer::NonSecureMode, this);

    // Ecoute des connexions qui est sur le port spécifié
    if (server->listen(QHostAddress::Any, port)) {
        qDebug() << "WebSocket server listening on port" << port;

        //Connexion du signal newConnection au slot onNewConnection
        connect(server, &QWebSocketServer::newConnection, this, &WebSocketServer::onNewConnection);
    } else {
        qCritical() << "Failed to start WebSocket server on port" << port;
        delete server;
        server = nullptr;
    }
}

void WebSocketServer::onNewConnection() {

    // Récupération de la socket correspendant à la nouvellle connexion
    QWebSocket *socket = server->nextPendingConnection();

    // Connexion du signal disconnected de la socket au slot processTextMessage
    connect(socket, &QWebSocket::textMessageReceived, this, &WebSocketServer::processTextMessage);

    // Connexion du signal disconneted de la socket au slot socketDisconnected
    connect(socket, &QWebSocket::disconnected, this, &WebSocketServer::socketDisconnected);
    qDebug() << "Client connected";
}

void WebSocketServer::processTextMessage(const QString &message) {

    // Récupération de la socket ayant le message
    QWebSocket *socket = qobject_cast<QWebSocket *>(sender());

    // Verification que la socket est valide
    if (socket) {
        qDebug() << "Message received from" << socket->peerAddress().toString() << ":" << message;

        // Emission du signal messageReceived avec le message reçu
        emit messageReceived(message);
    }
}

void WebSocketServer::socketDisconnected() {

    //Récupération de la socket ayant déclenché le signal
    QWebSocket *socket = qobject_cast<QWebSocket *>(sender());
    if (socket) {
        qDebug() << "Client disconnected";

        // Suppression de la socket de la mémoire
        socket->deleteLater();
    }
}
