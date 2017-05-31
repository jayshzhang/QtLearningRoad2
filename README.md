#QT学习之路2的总结

#4 信号槽
connect()函数最常用的一般形式:

`connect(sender, signal, receiver, slot);`

### sender:   

发出信号的对象

### signal:  

发送对象发出的信号

### recerver:
 
接收信号的对象

### slot:

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