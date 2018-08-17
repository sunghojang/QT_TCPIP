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

private slots:
    void on_StartClicked_clicked();
    void newConnection();
    void slotClientDisconnected();
    void readyRead();
private:
    Ui::MainWindow *ui;
    QTcpServer* server;
    QTcpSocket* client;
    QList<QTcpSocket*> connections;
    QHash<QTcpSocket*, QBuffer*> buffers;
};

#endif // MAINWINDOW_H
