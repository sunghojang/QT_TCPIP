/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtGui>
#include <QtNetwork>

#include "mainwindow.h"

Client::Client(QWidget *parent)
:   QDialog(parent), networkSession(0)
{
    hostLabel = new QLabel(tr("&Server name:"));
    portLabel = new QLabel(tr("S&erver port:"));

    // find out which IP to connect to
    QString ipAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // use the first non-localhost IPv4 address
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        qDebug()<<ipAddressesList.at(i);
        if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
            ipAddressesList.at(i).toIPv4Address()) {
            ipAddress = ipAddressesList.at(i).toString();
            qDebug()<<ipAddress;
            //not LocalHost, and ip is Ipv4 address
            break;
        }
    }
    // if we did not find one, use IPv4 localhost
    if (ipAddress.isEmpty())
        ipAddress = QHostAddress(QHostAddress::LocalHost).toString();

    hostLineEdit = new QLineEdit(ipAddress);
    portLineEdit = new QLineEdit("4002");
    //"4002" is user prot number
    portLineEdit->setValidator(new QIntValidator(1, 65535, this));
    //port number min is 1, max 65535.
    hostLabel->setBuddy(hostLineEdit);
    portLabel->setBuddy(portLineEdit);

    statusLabel = new QLabel(tr("This examples requires that you run the "
                                "Fortune Server example as well."));

    getFortuneButton = new QPushButton(tr("Get Fortune"));
    getFortuneButton->setDefault(true);
    putTextButton = new QPushButton(tr("SEND"));
    quitButton = new QPushButton(tr("Quit"));

    buttonBox = new QDialogButtonBox;
    buttonBox->addButton(getFortuneButton, QDialogButtonBox::ActionRole);
    buttonBox->addButton(quitButton, QDialogButtonBox::RejectRole);
    buttonBox->addButton(putTextButton, QDialogButtonBox::ActionRole);

    tcpSocket = new QTcpSocket(this);

    connect(hostLineEdit, SIGNAL(textChanged(QString)),this, SLOT(enableGetFortuneButton()));
    connect(portLineEdit, SIGNAL(textChanged(QString)),this, SLOT(enableGetFortuneButton()));
    connect(getFortuneButton, SIGNAL(clicked()),this, SLOT(requestNewFortune()));
    connect(putTextButton, SIGNAL(clicked()),this, SLOT(sendFortune()));
    connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readFortune()));
    connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),this, SLOT(displayError(QAbstractSocket::SocketError)));

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(hostLabel, 0, 0);
    mainLayout->addWidget(hostLineEdit, 0, 1);
    mainLayout->addWidget(portLabel, 1, 0);
    mainLayout->addWidget(portLineEdit, 1, 1);
    mainLayout->addWidget(statusLabel, 2, 0, 1, 2);
    mainLayout->addWidget(buttonBox, 3, 0, 1, 2);
    setLayout(mainLayout);

    setWindowTitle(tr("Fortune Client"));
    portLineEdit->setFocus();

    QNetworkConfigurationManager manager;
    // mobile application configuration ex) symbian, maemon, meego
    if (manager.capabilities() & QNetworkConfigurationManager::NetworkSessionRequired) {
        // Get saved network configuration
        QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
        settings.beginGroup(QLatin1String("QtNetwork"));
        const QString id = settings.value(QLatin1String("DefaultNetworkConfiguration")).toString();
        settings.endGroup();

        // If the saved network configuration is not currently discovered use the system default
        QNetworkConfiguration config = manager.configurationFromIdentifier(id);
        if ((config.state() & QNetworkConfiguration::Discovered) !=
            QNetworkConfiguration::Discovered) {
            config = manager.defaultConfiguration();
        }

        networkSession = new QNetworkSession(config, this);
        connect(networkSession, SIGNAL(opened()), this, SLOT(sessionOpened()));

        //getFortuneButton->setEnabled(false);
        statusLabel->setText(tr("Opening network session."));
        networkSession->open();
    }
}

void Client::requestNewFortune()
{
    qDebug()<<"void Client::requestNewFortune()";
    blockSize = 0;
    tcpSocket->abort();
    //abort() : disconnection server when any state
    tcpSocket->connectToHost(hostLineEdit->text(),
                             portLineEdit->text().toInt());
}

void Client::readFortune()
{
    qDebug()<<"void Client::readFortune()";
    QDataStream in(tcpSocket);
    qDebug()<<"client socket : "<<tcpSocket;
    in.setVersion(QDataStream::Qt_4_0);
    QStringList  inQstringData;
    QString temp;
    long readlengh = 0;
    if (blockSize == 0) {
        readlengh = tcpSocket->bytesAvailable();
        qDebug()<<"readlengh1"<<readlengh;
        if ( readlengh < (int)sizeof(quint16)){
            qDebug()<<"read length is not quint16 size therefore short hex data is not receive";
            blockSize = 0;
            return;
        }
        in >> blockSize;
        qDebug()<<"blockSize1 "<<blockSize;
    }
    readlengh = tcpSocket->bytesAvailable();
    while(readlengh){
        qDebug()<<"readlengh3"<<readlengh;
        in >> temp;
        qDebug()<<"in data : "<< temp;
        inQstringData.append(temp);
        readlengh = tcpSocket->bytesAvailable();
    }
    blockSize = 0;
    statusLabel->setText(temp);

}

void Client::displayError(QAbstractSocket::SocketError socketError)
{
    qDebug()<<"void Client::displayError(QAbstractSocket::SocketError socketError)";
    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The host was not found. Please check the "
                                    "host name and port settings."));
        break;
    case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The connection was refused by the peer. "
                                    "Make sure the fortune server is running, "
                                    "and check that the host name and port "
                                    "settings are correct."));
        break;
    default:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The following error occurred: %1.")
                                 .arg(tcpSocket->errorString()));
    }


}

void Client::enableGetFortuneButton()
{
    qDebug()<<"enableGetFortuneButton";
    getFortuneButton->setEnabled((!networkSession || networkSession->isOpen()) &&
                                 !hostLineEdit->text().isEmpty() &&
                                 !portLineEdit->text().isEmpty());

}

void Client::sessionOpened()
{
    // Save the used configuration
    qDebug()<<"void Client::sessionOpened()";
    QNetworkConfiguration config = networkSession->configuration();
    QString id;
    if (config.type() == QNetworkConfiguration::UserChoice){
        id = networkSession->sessionProperty(QLatin1String("UserChoiceConfiguration")).toString();
        qDebug()<<"user choice "<<id;
    }
    else{
        id = config.identifier();
        qDebug()<<"other "<<id;
    }

    QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
    settings.beginGroup(QLatin1String("QtNetwork"));
    settings.setValue(QLatin1String("DefaultNetworkConfiguration"), id);
    settings.endGroup();
    qDebug()<<settings.allKeys();
    statusLabel->setText(tr("This examples requires that you run the "
                            "Fortune Server example as well."));

    enableGetFortuneButton();
}
void Client::sendFortune()
{
    st_testcomm_tx = new TestComm();
    st_testcomm_tx->isserver = 1;
    st_testcomm_tx->username = "sdjtei";
    st_testcomm_tx->command = 4;
    st_testcomm_tx->message = "test";
    st_testcomm_tx->data = QByteArray::fromHex("FEFF0633064406270645");

    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    QStringList fortunes;
    QString sdf;

    fortunes << "socket to server message";

    out.setVersion(QDataStream::Qt_4_0);
    out << (quint16)0;
    qDebug()<<"q16 :"<<(quint16)0;
    out << QString("%1").arg(st_testcomm_tx->isserver);
    out << st_testcomm_tx->username;
    out << QString("%1").arg(st_testcomm_tx->command);
    out << st_testcomm_tx->message;
    out << st_testcomm_tx->data;
    out.device()->seek(0);
    out << (quint16)(block.size() - sizeof(quint16));
    qDebug()<<"size- :"<<(quint16)(block.size() - sizeof(quint16));

    //connect(tcpSocket, SIGNAL(disconnected()), tcpSocket, SLOT(deleteLater()));

    tcpSocket->write(block);
    //tcpSocket->disconnectFromHost();
}
