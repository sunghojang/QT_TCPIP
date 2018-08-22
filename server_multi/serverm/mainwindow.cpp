#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),server(0),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    blockSize = 0;
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
    qDebug()<<"void MainWindow::newConnection()";
    if (!connections.isEmpty())
    {
        qDebug()<<"!connections.isEmpty()";
        QByteArray msg = "New Client connected\n";
        foreach (QTcpSocket* connection, connections)
        {
            connection->write(msg);
        }
    }

    client= server->nextPendingConnection();
    QStringList tmpClientAddressPort;

    qDebug()<<connections;
    connections.append(client);
    qDebug()<<connections;

    qDebug()<<"====";
    QBuffer* buffer = new QBuffer(this);
    buffer->open(QIODevice::ReadWrite);
    qDebug()<<buffers;
    buffers.insert(client, buffer);
    qDebug()<<buffers;

    connect(client, SIGNAL(disconnected()), this, SLOT(slotClientDisconnected()));
    connect(client, SIGNAL(readyRead()) , this, SLOT(readyRead()));
   //connect(client, SIGNAL(readyRead()) , this, SLOT(readyRead2()));

}
void MainWindow::slotClientDisconnected()
{
    qDebug()<<"void MainWindow::slotClientDisconnected()";
    QTcpSocket* socket = static_cast<QTcpSocket*>(sender());
    qDebug()<<socket;
    QBuffer* buffer = buffers.take(socket);
    qDebug()<<buffers;
    buffer->close();
    qDebug()<<buffers;
    buffer->deleteLater();
    qDebug()<<buffers;

    qDebug()<<"====";
    qDebug()<<connections;
    connections.removeAll(socket);
    qDebug()<<connections;
    socket->deleteLater();

    QByteArray msg = "Client disconnected\n";
    foreach (QTcpSocket* connection, connections)
    {
        qDebug()<<"(QTcpSocket* connection, connections)";
        connection->write(msg);
    }
}

void MainWindow::sendFortune()
{
    qDebug()<<"void MainWindow::sendFortune()";
    qDebug()<<client;
    //test
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    QStringList fortunes;
    fortunes << "server to client message";
    out.setVersion(QDataStream::Qt_4_0);
    out << (quint16)0;
    qDebug()<<"q16 :"<<(quint16)0;
    out << fortunes.at(qrand() % fortunes.size());
    out << fortunes.at(qrand() % fortunes.size());
    qDebug()<<"at :"<<fortunes.at(qrand() % fortunes.size());
    out.device()->seek(0);
    out << (quint16)(block.size() - sizeof(quint16));
    qDebug()<<"size- :"<<(quint16)(block.size() - sizeof(quint16));

    client->write(block);
    //clientConnection->disconnectFromHost();

}
void MainWindow::readyRead()
{
    qDebug()<<"void MainWindow::readyRead()";
    qDebug()<<client;
    QByteArray data = client->readAll();
//    QStringList cmmline ;
//    cmmline.append(data.data());
    qDebug()<<data.toHex();
    ui->showStatusMessage->setText(QString("%1").arg(data.toHex().constData()));
    sendFortune();


}
void MainWindow::readyRead2()
{
    qDebug()<<"void MainWindow::readyRead2()";
    QDataStream in(client);
    in.setVersion(QDataStream::Qt_4_0);

    if (blockSize == 0) {
        if (client->bytesAvailable() < (int)sizeof(quint16))
            return;

        in >> blockSize;
    }

    if (client->bytesAvailable() < blockSize)
        return;

    QString nextFortune;
    in >> nextFortune;
    qDebug()<<nextFortune;
//    if (nextFortune == currentFortune) {
//        qDebug("re new fortune");
//        QTimer::singleShot(0, this, SLOT(requestNewFortune()));
//        return;
//    }

//    currentFortune = nextFortune;
//    statusLabel->setText(currentFortune);
//    getFortuneButton->setEnabled(true);
    sendFortune();
}
