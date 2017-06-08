#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    openAction = new QAction(QIcon(":/img/open"), tr("&Open..."), this);
    //平台的打开
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file"));
    connect(openAction, &QAction::triggered, this, &MainWindow::openFile);

    saveAction = new QAction(QIcon(":/img/save"), tr("&Save..."), this);
    //平台的打开
    saveAction->setShortcuts(QKeySequence::Save);
    saveAction->setStatusTip(tr("Save a new file"));
    connect(saveAction, &QAction::triggered, this, &MainWindow::saveFile);


    QMenu *file = ui->menuBar->addMenu(tr("&File"));
    file->addAction(openAction);
    file->addAction(saveAction);

    QToolBar *toolBarOpen = addToolBar("&Open");
    toolBarOpen->addAction(openAction);

    QToolBar *toolBarSave = addToolBar(tr("&Save"));
    toolBarSave->addAction(saveAction);
    statusBar();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openFile()
{
    qDebug()<<"openFile";
}
void MainWindow::saveFile()
{
    qDebug()<<"openFile";
}

