```c
#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

char map[12][13] = {	//编辑地图 
	"************",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"*          *",
	"************", 
};
void Move()   //蛇的移动  
{  
 int i, x, y;  
    int t = sum;  //保存当前蛇的长度  
 //记录当前蛇头的位置,并设置为空,蛇头先移动  
 x = Snake[0].x;  y = Snake[0].y;  GameMap[x][y] = '.';  
 Snake[0].x = Snake[0].x + dx[ Snake[0].now ];  
 Snake[0].y = Snake[0].y + dy[ Snake[0].now ];  
 Check_Border();   //蛇头是否越界  
 Check_Head(x, y);  //蛇头移动后的位置情况,参数为: 蛇头的开始位置  
 if(sum == t)  //未吃到食物即蛇身移动哦  
    for(i = 1; i < sum; i++)  //要从蛇尾节点向前移动哦,前一个节点作为参照  
 {  
  if(i == 1)   //尾节点设置为空再移动  
   GameMap[ Snake[i].x ][ Snake[i].y ] = '.';  
     
  if(i == sum-1)  //为蛇头后面的蛇身节点,特殊处理  
  {  
   Snake[i].x = x;  
         Snake[i].y = y;  
      Snake[i].now = Snake[0].now;  
  }  
  else   //其他蛇身即走到前一个蛇身位置  
  {  
   Snake[i].x = Snake[i+1].x;  
         Snake[i].y = Snake[i+1].y;  
      Snake[i].now = Snake[i+1].now;  
  }  
      
  GameMap[ Snake[i].x ][ Snake[i].y ] = '#'; //移动后要置为'#'蛇身   
 }  
}  
int main()   
{  
 Initial();  
 Show();  
 return 0;  
}   
```c