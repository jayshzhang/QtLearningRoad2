#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button("Quit");
    QObject::connect(&button, &QPushButton::clicked,
                     &QApplication::quit);
    button.show();

    return a.exec();
}
