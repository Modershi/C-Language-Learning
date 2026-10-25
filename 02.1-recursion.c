#include <stdio.h>
//例一：求n的阶乘
int Fac(int num)
{
    if(num == 0)
    {
       return 1;
    }
    else if(num > 0)
    {
       return Fac(num - 1) * num;
    }
    else
    {
       return 0;//这里只是因为if的所有情况都要有返回值所以这里给它一个返回值0
    }
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    int a = Fac(num);
    printf("%d\n", a);//其实这里可以直接写Fac(num)的
    return 0; 
}

