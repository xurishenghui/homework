---
layout: default
title: 无境之巅
======
---
# 活着

* 游戏背景

埃雷利小时双腿麻痹，后来偶遇贵人相助，有了这可以驱动的快速轮椅，从此开始不平凡的人生之路。
一次，埃雷利突然闯入一片无境之地，面对源源不断的怪物，埃雷利能否化险为夷呢？

* 玩法简介

游戏的player埃雷利由玩家操控，点击鼠标左键即可发射子弹，且可以通过上下左右控制移动，埃雷利将跟随玩家的鼠标而改变方向。

游戏中有怪物monster，有3条命.

每一发子弹击中怪物将会使其掉落一点生命，并且产生爆炸效果，直至怪物性命为零，怪物即被摧毁。

玩家不能让埃雷利被怪物碰触，否则将直接死亡。

* 游戏CRC卡片设计

埃雷利

Object name: 埃雷利

Collaborator：Sprite

Events & Actions：射出子弹，消灭怪物

Attribute:![图片](http://a4.qpic.cn/psb?/V135Vm5X0FNlv2/l3.H.l65msZSymf5aulg1zGMcYb6joAOZ*4YXljBR*s!/c/dFMBAAAAAAAA&ek=1&kp=1&pt=0&bo=bABnAAAAAAARFys!&tl=3&vuin=2762935451&tm=1542196800&sce=60-2-2&rf=0-0)

MONSTER

Object name: monster

Collaborator：Sprite

Events & Actions：消灭主角

Attribute:![图片](http://a3.qpic.cn/psb?/V135Vm5X0FNlv2/CEGqrYEnEySnwTF7C20uX2kel9SS*ikJdnwWgTcT8EI!/c/dDYBAAAAAAAA&ek=1&kp=1&pt=0&bo=kQBkAAAAAAARF9U!&tl=3&vuin=2762935451&tm=1542196800&sce=60-2-2&rf=0-0)

BULLET

Object name: bullet

Collaborator：Sprite

Events & Actions：直线移动，使怪物丧失生命

Attribute:![图片](http://a3.qpic.cn/psb?/V135Vm5X0FNlv2/XfchGwxiUFWXB0KRsmSRs.dzjydim3pccIYBSh18cvw!/c/dC4BAAAAAAAA&ek=1&kp=1&pt=0&bo=GQAQAAAAAAARFyk!&tl=3&vuin=2762935451&tm=1542196800&sce=60-2-2&rf=0-0)

EXPLODE

Object name: explode

Collaborator：Sprite

Events & Actions：代表怪物被子弹击中

Attribute:![图片](http://a3.qpic.cn/psb?/V135Vm5X0FNlv2/Y0oUxa74xNUER*23KuxCZt2Ibdh0dWpucfJXCMk7gw0!/c/dFIBAAAAAAAA&ek=1&kp=1&pt=0&bo=dgBlAAAAAAARFzM!&tl=3&vuin=2762935451&tm=1542196800&sce=60-2-2&rf=0-0)

* 游戏编码

![图片](http://a3.qpic.cn/psb?/V135Vm5X0FNlv2/HU96ZvkuwPTcS2n*GJ0lE13XGh6Dm2sLs3FTulgAWnk!/c/dFIBAAAAAAAA&ek=1&kp=1&pt=0&bo=OgTdAgAAAAARF8E!&tl=3&vuin=2762935451&tm=1542196800&sce=60-2-2&rf=0-0)

* 效果展示

![图片](https://github.com/xurishenghui/swi-homework/blob/gh-pages/%E6%B8%B8%E6%88%8F..gif?raw=true)