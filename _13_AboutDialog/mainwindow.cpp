#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    openAction = new QAction(QIcon(":/image/doc-open"), tr("&Open..."), this);
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file"));

    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

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
    /*顶层窗口*/
//    QDialog dlg;
//    dlg.setWindowTitle(tr("Hello, dlg!"));
//    dlg.exec();
    /*非顶层窗口*/
//    QDialog dlg(this);
//    dlg.setWindowTitle(tr("Hello, dlg!"));
//    dlg.exec();
    /* 一闪而过，因为show()不会阻塞当前线程，dialog建立在栈上*/
//    QDialog dlg(this);
//    dlg.setWindowTitle(tr("Hello, dlg!"));
//    dlg.show();
    /* 改为在堆上建立dialog*/
    QDialog *dlg = new QDialog;
    dlg->setWindowTitle(tr("Hello, dlg!"));
    dlg->show();

}
