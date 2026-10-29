#include <stdio.h>
int Fib(int input)
{
    int a = 1;
    int b = 1;
    int c = 0;
    while(input >= 3)
    {
       c = a + b;
       a = b;
       b = c;
       input--;
    }
    return c;
}

int main()
{
    int input = 0;
    if(scanf("%d", &input) != 1)//这里加一个防御程序
    {
        printf("非法输入，请重新输入\n");
        return 0;
    }
    printf("%d\n", Fib(input));
    return 0;
}
