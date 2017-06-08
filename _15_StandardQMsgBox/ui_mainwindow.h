/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnQuestion;
    QPushButton *btnAbout;
    QPushButton *btnAboutQt;
    QPushButton *btnCritical;
    QPushButton *btnWarning;
    QPushButton *btnInfomation;
    QPushButton *btnAskForSave;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnQuestion = new QPushButton(centralWidget);
        btnQuestion->setObjectName(QStringLiteral("btnQuestion"));
        btnQuestion->setGeometry(QRect(10, 10, 93, 28));
        btnAbout = new QPushButton(centralWidget);
        btnAbout->setObjectName(QStringLiteral("btnAbout"));
        btnAbout->setGeometry(QRect(10, 50, 93, 28));
        btnAboutQt = new QPushButton(centralWidget);
        btnAboutQt->setObjectName(QStringLiteral("btnAboutQt"));
        btnAboutQt->setGeometry(QRect(10, 90, 93, 28));
        btnCritical = new QPushButton(centralWidget);
        btnCritical->setObjectName(QStringLiteral("btnCritical"));
        btnCritical->setGeometry(QRect(140, 10, 93, 28));
        btnWarning = new QPushButton(centralWidget);
        btnWarning->setObjectName(QStringLiteral("btnWarning"));
        btnWarning->setGeometry(QRect(140, 50, 93, 28));
        btnInfomation = new QPushButton(centralWidget);
        btnInfomation->setObjectName(QStringLiteral("btnInfomation"));
        btnInfomation->setGeometry(QRect(140, 90, 93, 28));
        btnAskForSave = new QPushButton(centralWidget);
        btnAskForSave->setObjectName(QStringLiteral("btnAskForSave"));
        btnAskForSave->setGeometry(QRect(10, 140, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnQuestion->setText(QApplication::translate("MainWindow", "Question", 0));
        btnAbout->setText(QApplication::translate("MainWindow", "About", 0));
        btnAboutQt->setText(QApplication::translate("MainWindow", "AboutQt", 0));
        btnCritical->setText(QApplication::translate("MainWindow", "Critical", 0));
        btnWarning->setText(QApplication::translate("MainWindow", "Warning", 0));
        btnInfomation->setText(QApplication::translate("MainWindow", "Infomation", 0));
        btnAskForSave->setText(QApplication::translate("MainWindow", "AskForSave", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
