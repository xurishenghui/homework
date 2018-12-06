```c
void Create_Food()  //在地图上随机产生食物  
{  
 int fx, fy;  
 while(1)  
 {  
  fx = rand()%H;  
     fy = rand()%L;  
     
  if(GameMap[fx][fy] == '.')  //不能出现在蛇所占有的位置  
  {   
   GameMap[fx][fy] = Sfood;  
      break;  
  }  
 }  
}  
void Show()  //刷新显示地图  
{  
 int i, j;  
 while(1)  
 {    
  _sleep(500); //延迟半秒(1000为1s),即每半秒刷新一次地图  
  Button();   //先判断按键在移动  
  Move();  
  if(over)  //自吃或碰墙即游戏结束  
  {   
   printf("\n**游戏结束**\n");  
   printf("     >_<\n");  
   getchar();  
      break;  
  }  
  system("cls");   //清空地图再显示刷新吼的地图  
  for(i = 0; i < H; i++)   
  {   
   for(j = 0; j < L; j++)  
    printf("%c", GameMap[i][j]);  
   printf("\n");  
  }  
     
  printf("\n小小C语言贪吃蛇\n");  
  printf("按任意方向键开始游戏\n");  
 }  
}  
void Check_Border()  //检查蛇头是否越界  
{  
 if(Snake[0].x < 0 || Snake[0].x >= H  
 || Snake[0].y < 0 || Snake[0].y >= L)  
     over = 1;  
}  
void Check_Head(int x, int y)  //检查蛇头移动后的位置情况  
{  
    
 if(GameMap[ Snake[0].x ][ Snake[0].y ] == '.')  //为空  
  GameMap[ Snake[0].x ][ Snake[0].y ] = '@';  
 else 
  if(GameMap[ Snake[0].x ][ Snake[0].y ] == '*')  //为食物  
  {  
   GameMap[ Snake[0].x ][ Snake[0].y ] = '@';    
   Snake[sum].x = x;   //新增加的蛇身为蛇头后面的那个  
      Snake[sum].y = y;  
      Snake[sum].now = Snake[0].now;  
         GameMap[ Snake[sum].x ][ Snake[sum].y ] = '#';   
   sum++;  
   Create_Food();  //食物吃完了马上再产生一个食物  
  }  
  else 
   over = 1;  
}
int main()   
{  
 Initial();  
 Show();  
 return 0;  
}  
```c