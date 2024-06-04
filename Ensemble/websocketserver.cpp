#include "websocketserver.h"
#include <QCoreApplication>
#include <QWebSocket>
#include <QDebug>

WebSocketServer::WebSocketServer(quint16 port, QObject *parent) : QObject(parent) {
    server = new QWebSocketServer(QStringLiteral("WebSocket Server"), QWebSocketServer::NonSecureMode, this);
    if (server->listen(QHostAddress::Any, port)) {
        qDebug() << "WebSocket server listening on port" << port;
        connect(server, &QWebSocketServer::newConnection, this, &WebSocketServer::onNewConnection);
    } else {
        qCritical() << "Failed to start WebSocket server on port" << port;
        delete server;
        server = nullptr;
    }
}

void WebSocketServer::onNewConnection() {
    QWebSocket *socket = server->nextPendingConnection();
    connect(socket, &QWebSocket::textMessageReceived, this, &WebSocketServer::processTextMessage);
    connect(socket, &QWebSocket::disconnected, this, &WebSocketServer::socketDisconnected);
    qDebug() << "Client connected";
}

void WebSocketServer::processTextMessage(const QString &message) {
    QWebSocket *socket = qobject_cast<QWebSocket *>(sender());
    if (socket) {
        qDebug() << "Message received from" << socket->peerAddress().toString() << ":" << message;
        emit messageReceived(message);
    }
}

void WebSocketServer::socketDisconnected() {
    QWebSocket *socket = qobject_cast<QWebSocket *>(sender());
    if (socket) {
        qDebug() << "Client disconnected";
        socket->deleteLater();
    }
}
