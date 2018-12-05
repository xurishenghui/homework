---
layouts: default
title: 贪吃蛇
======
--- 

# 贪吃蛇报告

* 伪代码实现

* 输出字符矩阵
	WHILE not 游戏结束 DO
		ch＝等待输入
		CASE ch DO
		‘A’:左前进一步，break 
		‘D’:右前进一步，break    
		‘W’:上前进一步，break    
		‘S’:下前进一步，break    
		END CASE
		输出字符矩阵
	END WHILE
	输出 Game Over!!! 

* IF 蛇碰到墙壁或身体
    输出 Game over!!!
  else 
    继续运行    
* 详细请看snake_move.c

* 详细请看snake_eat.c 