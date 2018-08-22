#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QTcpServer>
#include <QBuffer>
#include <QtNetwork/QTcpSocket>
#include <QMessageBox>
#include <QDebug>
#include <QtNetwork>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    quint16 blockSize;
private slots:
    void on_StartClicked_clicked();
    void newConnection();
    void slotClientDisconnected();
    void readyRead();
    void readyRead2();
    void sendFortune();
private:
    Ui::MainWindow *ui;
    QTcpServer* server;
    QTcpSocket* client;
    QList<QTcpSocket*> connections;
    QHash<QTcpSocket*, QBuffer*> buffers;
    struct TestComm{
        int isserver;
        QString username;
        int command;
        QString message;
        QByteArray data;
    }*st_testcomm_rx;
};

#endif // MAINWINDOW_H
