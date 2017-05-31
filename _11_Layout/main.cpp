#include "mainwindow.h"
#include <QApplication>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QWidget window;
    window.setWindowTitle("Enter your age");

    QSpinBox *spinBox = new QSpinBox(&window);
    QSlider *slider = new QSlider(Qt::Horizontal, &window);

    spinBox->setRange(0,130);
    slider->setRange(0,130);
    //valuechanged和setvalue相连
    QObject::connect(slider, &QSlider::valueChanged,
                     spinBox,&QSpinBox::setValue);
    /*
     * 由于QSpinBox::valueChanged有两个重载，需要指定
     * 创建一个函数指针，且其参数指定为int
    */
    void(QSpinBox::*spinBoxSignal)(int) = &QSpinBox::valueChanged;
    QObject::connect(spinBox, spinBoxSignal,
                     slider, &QSlider::setValue);

    spinBox->setValue(35);//初始设置为35

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    window.setLayout(layout);

    window.show();

    return a.exec();
}
