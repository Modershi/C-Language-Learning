//逗号表达式练习
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    for(a = 1, b = 2; a < 5 && b < 8; a += 2, b += 3)
    {   //这里是a、b先赋值，后判断<5,<8，再执行printf，再上去分别+2，+3，然后判断，循环往复直到不符合条件
        printf("%d %d\n", a, b);//1 2 (换行) 3 5
    }
    return 0;
}

//例2
/*
int main()
{
    a = get_val();
    count_val(a);
    while(a > 0)
    {
        a = get_val();     while(a = get_val(), count_val(a), a > 0)
        count_val(a);      {
    }                      }
    return 0;              和左边的一样的效果
}



*/
