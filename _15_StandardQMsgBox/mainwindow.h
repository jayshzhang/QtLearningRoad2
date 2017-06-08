#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void doQuestion();
    void doAbout();
    void doAboutQt();
    void doCritical();
    void doWarning();
    void doInformation();
    void doAskForSave();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
