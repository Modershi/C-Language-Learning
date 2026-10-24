#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{
    int a = rand() % 100 + 1;
    int guess = 0;
    int count = 5;
    time_t start = time(NULL);
    while(count > 0)//其实这里也可以直接写成：count
    {
         printf("还有%d次机会\n", count);
         if(scanf("%d", &guess) != 1)
         {
             printf("非法输入，即将退出游戏\n");
             return;
         }
         if(guess > a)
         {
             printf("猜大了\n");
         }
         else if(guess < a)
         {
             printf("猜小了\n");
         }
         else
         {
             printf("猜对了\n");
             time_t end = time(NULL);
             printf("游戏耗时:%ld秒\n", (long)(end - start));
             return;
         }
         
         count--;
    }

    printf("很遗憾，机会用完了，游戏结束\n");
}

int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    while(1)
    {
       printf("------------------\n");
       printf("------1.play------\n");
       printf("------0.exit------\n");
       printf("------------------\n");
       printf("请选择\n");
       if(scanf("%d", &input) != 1)
       {
           printf("非法输入，退出游戏\n");
           return 0;
       }
       switch(input)
       {
           case 1:
             printf("开始游戏\n");
             game();
             break;
           case 0:
             printf("退出游戏\n");
             return 0;
           default:
             printf("输入错误，请重新输入\n");
             break;
       }
    }
    return 0;
}
