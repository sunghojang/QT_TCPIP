/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Aug 22 16:56:12 2018
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *StartClicked;
    QLabel *showStatusMessage;
    QLineEdit *port;
    QLabel *portlabel;
    QLabel *showStatusMessage_2;
    QTextEdit *allhistory;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        StartClicked = new QPushButton(centralWidget);
        StartClicked->setObjectName(QString::fromUtf8("StartClicked"));
        StartClicked->setGeometry(QRect(245, 15, 80, 23));
        showStatusMessage = new QLabel(centralWidget);
        showStatusMessage->setObjectName(QString::fromUtf8("showStatusMessage"));
        showStatusMessage->setGeometry(QRect(20, 60, 361, 16));
        port = new QLineEdit(centralWidget);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(115, 15, 113, 23));
        portlabel = new QLabel(centralWidget);
        portlabel->setObjectName(QString::fromUtf8("portlabel"));
        portlabel->setGeometry(QRect(55, 20, 59, 15));
        showStatusMessage_2 = new QLabel(centralWidget);
        showStatusMessage_2->setObjectName(QString::fromUtf8("showStatusMessage_2"));
        showStatusMessage_2->setGeometry(QRect(20, 85, 361, 16));
        allhistory = new QTextEdit(centralWidget);
        allhistory->setObjectName(QString::fromUtf8("allhistory"));
        allhistory->setGeometry(QRect(105, 115, 236, 126));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        StartClicked->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        showStatusMessage->setText(QApplication::translate("MainWindow", "state", 0, QApplication::UnicodeUTF8));
        port->setText(QApplication::translate("MainWindow", "4002", 0, QApplication::UnicodeUTF8));
        portlabel->setText(QApplication::translate("MainWindow", "Port", 0, QApplication::UnicodeUTF8));
        showStatusMessage_2->setText(QApplication::translate("MainWindow", "state", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
