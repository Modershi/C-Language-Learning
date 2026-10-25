#include <stdio.h>
//例二：顺序打印一个正整数
void print(size_t input)
{
    if(input > 9)//输入的数为两位及以上时进入这里
    {
        print(input / 10);
    }
    printf("%zu ", input % 10);//因为两种情况最后都要打印所以这里直接一起打印了
}

int main()
{
    size_t input = 0;
    scanf("%zu", &input);
    print(input);
    return 0;
}
