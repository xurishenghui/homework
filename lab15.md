---
layouts: default
title: 智能蛇
======
---
# 智能蛇

```c
/**
让蛇动起来 
放置奖励的食物 
在蛇吃到食物时延长蛇的身体 
设置游戏结束的机制 
让蛇动起来 
先设置一下相应的字符表示：**/

char BLANK_CHAR = ’ ‘; 
char WALL_CHAR = ‘*’; 
char SNAKE_HEAD_CHAR = ‘H’; 
char SNAKE_BODY_CHAR = ‘X’; 
char FOOD_CHAR = ‘′;
//在这里，我们用∗来围成墙体，用′;在这里，我们用∗来围成墙体，用 来表示食物，用 H 来表示蛇头，用 X 来表示蛇的身体。

//绘出一个方形区域，这是蛇身活动的范围。

char map[12][13] = { 
“**”, 
“* *”, 
“* *”, 
“* *”, 
“* *”, 
“* *”, 
“* *”, 
“* *”, 
“* *”, 
“* *”, 
“* *”, 
“**”, 
}; 
//初始化：

int myMin(int array[4]) { 
int i; 
int Min = array[0]; 
for (i = 1; i < 4; i++) { 
if (array[i] < Min) Min = array[i]; 
} 
for (i = 0; i < 4; i++) { 
if (array[i] == Min) break; 
} 
return i; 
}

char whereToGo(int Hx, int Hy, int Fx, int Fy) { 
char direction[4] = { ‘W’, ‘A’, ‘S’, ‘D’ }; 
int distance[4] = { 0, 0, 0, 0 }; 
int result[4][2] = { { Hx, Hy - 1 },{ Hx - 1, Hy },{ Hx, Hy + 1 },{ Hx + 1, Hy } }; 
int i; 
for (i = 0; i < 4; i++) { 
if (map[result[i][1]][result[i][0]] != ‘*’ && map[result[i][1]][result[i][0]] != ‘X’) { 
distance[i] = abs(result[i][0] - Fx) + abs(result[i][1] - Fy); 
} 
else distance[i] = 9999; 
} 
int index_Min = myMin(distance); 
return direction[index_Min]; 
}

oid set_path(char path[]){ 
int count = 0; 
int originalX = snakeX[0]; 
int originalY = snakeY[0]; 
while(snakeX[0] != foodX || snakeY[0] != foodY){ 
path[count] = whereToGo(snakeX[0], snakeY[0], foodX, foodY); 
map[snakeY[0]][snakeX[0]] == ‘X’; 
int x = path[count]; 
switch (x) { 
case ‘A’: 
snakeX[0] = snakeX[0] - 1; 
break; 
case ‘W’: 
snakeY[0] = snakeY[0] - 1; 
break; 
case ‘D’: 
snakeX[0] = snakeX[0] + 1; 
break; 
case ‘S’: 
snakeY[0] = snakeY[0] + 1; 
break; 
}

```

* 根据上次的贪吃蛇制作，关键点就是决定蛇行走的方向函数的伪代码

```
// Hx,Hy: 头的位置
    // Fx,Fy：食物的位置
	function whereGoNext(Hx,Hy,Fx,Fy) {
	// 用数组movable[3]={“a”,”d”,”w”,”s”} 记录可走的方向
	// 用数组distance[3]={0,0,0,0} 记录离食物的距离
	// 分别计算蛇头周边四个位置到食物的距离。H头的位置，F食物位置
	//     例如：假设输入”a” 则distance[0] = |Fx – (Hx-1)| + |Fy – Hy|
	//           如果 Hx-1，Hy 位置不是Blank，则 distance[0] = 9999
	// 选择distance中存最小距离的下标p，注意最小距离不能是9999
	// 返回 movable[p]
	}
```

* 还有智能蛇的整体框架

```
输出字符矩阵
	WHILE not 游戏结束 DO
        wait(time)
		ch＝whereGoNext(Hx,Hy,Fx,Fy)
		CASE ch DO
		‘A’:左前进一步，break 
		‘D’:右前进一步，break    
		‘W’:上前进一步，break    
		‘S’:下前进一步，break    
		END CASE
		输出字符矩阵
	END WHILE
	输出 Game Over!!! 
```

* 解决这两个问题，也就差不多了