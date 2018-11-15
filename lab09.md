---
layouts: default
title: 自顶向下，逐步求精
======
---
# 自顶向下，逐步求精

* 自顶向下

* 一种程序开发技术，其中问题被分解成更容易处理的子问题，这些子问题的解决方案组合起来构成整体问题的解决方案。自顶向下设计最初把问题分解成一套子问题，然后把子问题分解成子问题。这一过程将一直持续到每个子问题足够基础，不再需要进一步分解为止。我们创造了一种分层结构来表示问题和子问题（称为模块）之间的关系，这种结构也称为树形结构。在树形结构中，每一层的模块都可以调用下层模块的服务。这些模块是算法的基本构件。


* 逐步求精

* 将现实问题经过几次抽象（细化）处理，最后到求解域中只是一些简单的算法描述和算法实现问题。即将系统功能按层次进行分解，每一层不断将功能细化，到最后一层都是功能单一、简单易实现的模块。求解过程可以划分为若干个阶段，在不同阶段采用不同的工具来描述问题。在每个阶段有不同的规则和标准，产生出不同阶段的文档资料。

![图片](http://a4.qpic.cn/psb?/V135Vm5X0FNlv2/pq310PU4KZUSV..jzEKzLTa4SZf8cgzw5KCEaE8wwuA!/c/dFMBAAAAAAAA&ek=1&kp=1&pt=0&bo=CQSAAgAAAAARF68!&tl=3&vuin=2762935451&tm=1542268800&sce=60-2-2&rf=0-0)

# 洗衣机自顶向下方法

* 基本过程

* 注水，浸泡，洗涤，漂洗，甩干

#  伪代码表示

* water_in_switch(open_close) // open 打开上水开关，close关闭

water_out_switch(open_close) // open 打开排水开关，close关闭

get_water_volume() //返回洗衣机内部水的高度

motor_run(direction) // 电机转动。left左转，right右转，stop停

time_counter() // 返回当前时间计数，以秒为单位

halt(returncode) //停机，success 成功 failure 失败

* 伪代码

turn on the switch

read the depth(输入水位)

    while  get_water_volume()<depth

    water_in_switch(open)

end while
  
    water_in_switch(close)(进水)

then while time_counter()<time

    motor_run(right)

    motor_run(left)

end while

    halt() (洗涤)

while get_water_volume()>0

    motor_run(right)

    motor_run(left)


end while

    halt() (脱水)

