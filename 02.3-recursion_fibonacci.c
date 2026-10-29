#include <stdio.h>
int Fib(int input)
{
    if(input <= 2)
    {
        return 1;
    }
    else
    {
        return Fib(input - 1) + Fib(input - 2);
    }
}

int main()
{
    int input = 0;
    scanf("%d", &input);
    printf("%d\n", Fib(input));
    return 0;
}
