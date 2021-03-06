#QT学习之路2的总结

#4 信号槽
connect()函数最常用的一般形式:

`connect(sender, signal, receiver, slot);`

- sender:

	发出信号的对象

- signal:  

	发送对象发出的信号

- recerver:
 
	接收信号的对象

- slot:

	接收对象在接收到信号之后所需要的调用的函数

#11 布局管理器

`void(QSpinBox:: *spinBoxSignal)(int) = QSpinBox::valueChanged;`

`QObject::connect(spinBox, spinBoxSignal, slider, &QSlider::setValue);`

当使用overload的signal，有两种方式：

1. 使用QT4的SLGNAL和SLOT宏，因为这两个宏已经指定了参数信息，所以不存在这个问题
2. 使用函数指针显示指定使用了哪个一个信号

有时候，使用 Qt 4 的语法更简洁。但是需要注意的是，Qt 4 的语法是没有编译期错误检查的。这也是同 Qt 5 的信号槽新语法不同之处之一。

Qt 提供了几种布局管理器供我们选择： 

- QHBoxLayout：按照水平方向从左到右布局； 
- QVBoxLayout：按照竖直方向从上到下布局； 
- QGridLayout：在一个网格中进行布局，类似于 HTML 的 table；
- QFormLayout：按照表格布局，每一行前面是一段文本，文本后面跟随一个组件（通常是输入框），类似 HTML 的 form；
- QStackedLayout：层叠的布局，允许我们将几个组件按照 Z 轴方向堆叠，可以形成向导那种一页一页的效果。

#13 对话框简介

QDialog（及其子类，以及所有Qt::Dialog类型的类）的对于其 parent 指针都有额外的解释：如果 parent 为 NULL，则该对话框会作为一个顶层窗口，否则则作为其父组件的子对话框（此时，其默认出现的位置是 parent 的中心）。顶层窗口与非顶层窗口的区别在于，顶层窗口在任务栏会有自己的位置，而非顶层窗口则会共享其父组件的位置。

- `QDialog::exec()`实现应用程序级别的模态对话框
- 使用`QDialog::open()`实现窗口级别的模态对话框
- 使用`QDialog::show()`实现非模态对话框

#14 对话框数据传递

模态对话框使用`exec()`函数显示,其真正含义是开启一个新的事件循环.在`exec()`函数之后直接从对话框的对象获取数据值.
如果是非模态对话框,使用信号槽机制来获取数据