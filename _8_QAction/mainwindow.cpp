#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle(tr("Main Window QAction"));
    openAction = new QAction(QIcon(":/images/doc-open"), tr("&Open..."), this);
    //QAction的快捷键,QKeySequencene内置了很多快捷键
    openAction->setShortcuts(QKeySequence::Open);
    //closeAction->setShortcuts(QKeySequence::Close);
    //鼠标划过这个Action时在主窗口下方显示提示
    openAction->setStatusTip(tr("Open an existing file"));
    //触发信号和Open连接
    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);
    //file->addAction(closeAction);
    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);

    statusBar();

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::open()
{
    QMessageBox::information(this,tr("Information"),tr("Open"));
}
