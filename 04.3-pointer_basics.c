//指针的关系运算符
#include <stdio.h>
int main()
{
    //1
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* pa1 = arr1;
    while(pa1 < &arr1[10])//当p是数组元素中地址小于下标为10的地址时进入循环
    {//(这里仅仅只是取下标为10的元素的地址用一下，不会报错)
	printf("arr1 = {%d }", *pa1);
        pa1++;//这里是向后跳4个字节，就是跳到下一个元素
    }
    //最终打印结果是:1 2 3 4 5 6 7 8 9 10

    //2
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* pa2 = &arr2[10];
    int i = 0;
    int sz = sizeof(arr2) / sizeof(arr2[0]);
    for(i = 1; i < sz; i++)
    {
        pa2--;
        printf("arr2[] = {%d }", *pa2);
    }

    //3
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* pa3 = &arr3[0];
    int sz2 = sizeof(arr3) / sizeof(arr3[0]);
    while(pa3 < &arr3[sz2])
    {
        printf("arr3[] = {%d }", *pa3);
        pa3++;
    }
    return 0;
}
