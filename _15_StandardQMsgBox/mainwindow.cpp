#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->btnQuestion,&QPushButton::clicked, this, &MainWindow::doQuestion);
    QObject::connect(ui->btnAbout,&QPushButton::clicked, this, &MainWindow::doAbout);
    QObject::connect(ui->btnAboutQt,&QPushButton::clicked, this, &MainWindow::doAboutQt);
    QObject::connect(ui->btnCritical,&QPushButton::clicked, this, &MainWindow::doCritical);
    QObject::connect(ui->btnInfomation,&QPushButton::clicked, this, &MainWindow::doInformation);
    QObject::connect(ui->btnWarning,&QPushButton::clicked, this, &MainWindow::doWarning);

    QObject::connect(ui->btnAskForSave,&QPushButton::clicked, this, &MainWindow::doAskForSave);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doQuestion()
{
    if (QMessageBox::Yes == QMessageBox::question(this, tr("Question"),
                                                  tr("Are you OK?"),
                                                  QMessageBox::Yes | QMessageBox::No,
                                                  QMessageBox::Yes))
    {
        QMessageBox::information(this, tr("Hmmm..."),
                                 tr("I'm glad to hear that!"));
    }
    else {
        QMessageBox::information(this, tr("Hmmm..."), tr("I'm sorry!"));
    }
}

void MainWindow::doAbout()
{
    QMessageBox::about(this, "Title: About", "Text : This is About");
}
void MainWindow::doAboutQt()
{
    QMessageBox::aboutQt(this, "Text : AboutQt");
}
void MainWindow::doCritical()
{
    QMessageBox::critical(this, "Title: Critical", "Text : 严重错误!");
}
void MainWindow::doWarning()
{
    QMessageBox::warning(this, "Title: Warning", "Text : Warning!");
}
void MainWindow::doInformation()
{
    QMessageBox::information(this, "Title: information", "Text : Information!");
}

void MainWindow::doAskForSave()
{
    QMessageBox msgBox;
    msgBox.setText("doc has been modified");
    msgBox.setInformativeText("Do you want to save your changes?");
    msgBox.setDetailedText("Differences here...");//显示详细信息
    msgBox.setStandardButtons(QMessageBox::Save
                              |QMessageBox::Discard
                              |QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    switch (ret)
    {
    case QMessageBox::Save:
        qDebug() << "Save";
        break;
    case QMessageBox::Discard:
        qDebug() << "Discard";
        break;
    case QMessageBox::Cancel:
        qDebug() << "Cancel";
        break;
    }
}
