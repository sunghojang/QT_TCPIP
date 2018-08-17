/********************************************************************************
** Form generated from reading UI file 'downloadmanager.ui'
**
** Created: Thu Aug 16 17:48:16 2018
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADMANAGER_H
#define UI_DOWNLOADMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadManager
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DownloadManager)
    {
        if (DownloadManager->objectName().isEmpty())
            DownloadManager->setObjectName(QString::fromUtf8("DownloadManager"));
        DownloadManager->resize(400, 300);
        menuBar = new QMenuBar(DownloadManager);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        DownloadManager->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DownloadManager);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DownloadManager->addToolBar(mainToolBar);
        centralWidget = new QWidget(DownloadManager);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        DownloadManager->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DownloadManager);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DownloadManager->setStatusBar(statusBar);

        retranslateUi(DownloadManager);

        QMetaObject::connectSlotsByName(DownloadManager);
    } // setupUi

    void retranslateUi(QMainWindow *DownloadManager)
    {
        DownloadManager->setWindowTitle(QApplication::translate("DownloadManager", "DownloadManager", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DownloadManager: public Ui_DownloadManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADMANAGER_H
