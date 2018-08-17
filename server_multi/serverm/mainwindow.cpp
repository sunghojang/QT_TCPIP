#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),server(0),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    server = new QTcpServer(this);
    connect(server , SIGNAL(newConnection()),this, SLOT(newConnection()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_StartClicked_clicked()
{
    ui->showStatusMessage->setText(tr("Server starting"));

    if (!server->listen(QHostAddress::Any, ui->port->text().toInt())) {
        QMessageBox::critical(this, tr("Server"), tr("Unable to start the server: %1.").arg(server->errorString()));
        return;
    }
    ui->showStatusMessage->setText(tr("Server started at port %1").arg(server->serverPort()));
}





void MainWindow::newConnection()
{
    if (!connections.isEmpty())
    {
        QByteArray msg = "New Client connected\n";
        foreach (QTcpSocket* connection, connections)
        {
            connection->write(msg);
        }
    }

    client= server->nextPendingConnection();
    QStringList tmpClientAddressPort;

    connections.append(client);

    QBuffer* buffer = new QBuffer(this);
    buffer->open(QIODevice::ReadWrite);
    buffers.insert(client, buffer);

    connect(client, SIGNAL(disconnected()), this, SLOT(slotClientDisconnected()));
    connect(client, SIGNAL(readyRead()) , this, SLOT(readyRead()));
}
void MainWindow::slotClientDisconnected()
{
    QTcpSocket* socket = static_cast<QTcpSocket*>(sender());
    QBuffer* buffer = buffers.take(socket);
    buffer->close();
    buffer->deleteLater();
    connections.removeAll(socket);
    socket->deleteLater();

    QByteArray msg = "Client disconnected\n";
    foreach (QTcpSocket* connection, connections)
    {
        connection->write(msg);
    }
}


void MainWindow::readyRead()
{
    QByteArray data = client->readAll();
    QStringList cmmline ;
    cmmline.append(data.data());
    qDebug()<<data.toHex();
    qDebug()<<cmmline;
   // qDebug("%d",data.toHex());
}
