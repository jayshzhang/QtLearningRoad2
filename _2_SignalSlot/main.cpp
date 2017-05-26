#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QPushButton button("Quit");
//    QObject::connect(&button, &QPushButton::clicked,
//                     &QApplication::quit);

    //将一个对象的信号连接到Lambda表达式
    QPushButton button("Quit");
    QObject::connect(&button, &QPushButton::clicked,
                     [](bool){qDebug() << "You clicked me!";
    });

    button.show();
    return a.exec();
}
