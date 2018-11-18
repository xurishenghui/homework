---
layouts: default
title: 机器指令编程
======
---

# Program 1

* 1.
PC用来自动存储并读取下一位地址

IR用来存储当前的地址的指令

* 2.
ACC全称为accumulator register，用于存储中间结果的处理器寄存器

* 3.
IR获取memory中的地址，交由decode进行解码，解码后decode将数据经MUX传入ALU，而将操作指令直接输入ALU，完成后将数据暂存在ACC中。

* 4.
IR获取地址，交由decode解码，运算传入ALU中，数据通过MUX传入ALU，ALU将ACC中暂存的数据与M进行加法，在存入ACC中

* 5.
ADD W需要通过W的地址，进一步访问W地址中的数据，操作更多

* binary

* 1.00010100 00000111

前八位代表输入一个数据，即LOD，后八位代表数字是7

* 2.RAM中地址均为8位存储，但二进制首位1或0决定了其是否为变量数据地址

* 3.8位

* 4.int w = 3; int x = 7; int y = x + w;

# Program 2

* 一句话总结

* 1.将X不断减1，直到为0为止

* 2.
int x=2;
while(x){
    x--;
}

* 实现10+9+8...+1

* 1.
int x,y;

x=10;y=0;

while(x){

    y=y+x;

    x--;
}

* 2.
0 LOD #10

2 STO X

4 LOD Y

6 ADD X

8 STO Y

10 LOD X

12 SUB #1

14 STO X

16 CPZ X

18 JMZ 4

20 HLT

* 3.高级语言与机器语言的联系和区别

高级语言主要是为了人的阅读，而机器语言是为了电脑能够理解并运行

机器语言相当于加密的高级语言

# 小结

理解CPU中简单的运行结构，对于汇编语言和机器语言有了一定的了解