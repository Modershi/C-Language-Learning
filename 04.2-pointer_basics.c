#include <stdio.h>
#include <string.h>
size_t my_strlen(char *p)
{
    char *start = p;
    while(*p != '\0')//当元素不是\0时
       p++;          //地址加1
    return p - start;
}

int main()
{
    char arr[] = "abcdef";
    size_t len = my_strlen(arr);
    printf("%zu\n", len);
    return 0;
}
