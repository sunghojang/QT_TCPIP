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
    double blockSize;
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
};

#endif // MAINWINDOW_H
