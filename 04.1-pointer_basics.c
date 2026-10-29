//因为指针的英文是pointer，所以后面指针变量都有一个p，或仅用p表示

//指针：取地址操作符&
#include <stdio.h>
int main()
{
    int a = 10;//此时a的地址在内存中是以16进制的形式存储：0a 00 00 00
    printf("%p\n", &a);//%p是专门用来打印地址的，&是取地址操作符
    //此时在鸿蒙终端上打印a的地址是0x7f7f0dd8f8

//指针变量
    int b = 12;
    int* p1 = &b;//这里*表示p为指针变量，int是p指向的对象的类型:这里是变量a的类型(int)
    printf("a = %d\n", b);
    printf("*p = %d\n", *p1);//这里两次打印的结果是一样的
    *p1 = 100;// *p相当于a,所以这里a也会跟着改变
    printf("*p = %d\n", *p1);
    printf("a = %d\n", b);//打印100


    int a2 = 100;
    int *p2 = &a;
    printf("%d\n", *p2);
    printf("%d\n", a2);//虽然两种打印结果是一样的，但是我觉得这并不是多此一举，这反而给我们提供了一种新的思路



//指针变量的大小:实际是取决于其机器是32位还是64位
    printf("%zu\n", sizeof(char*));
    printf("%zu\n", sizeof(short*));
    printf("%zu\n", sizeof(int*));
    printf("%zu\n", sizeof(long*));
    printf("%zu\n", sizeof(long long*));
    printf("%zu\n", sizeof(float*));
    printf("%zu\n", sizeof(double*));
    printf("%zu\n", sizeof(long double*));
    //最终全部打印的是:8,所以鸿蒙终端是64位的，即:x64

//指针类型的意义
//1.指针的解引用
    int a3 = 0x11223344;//4字节
    int *pd = &a3;
    *pd = 0;//当该表达式没有时a的地址在内存中是:44 33 22 11
             //而加了这个表达式之后a的地址变为:00 00 00 00

    int a4 = 0x11223344;
    char *p4 = &a4;//这样写会警告，但是这样仅仅是为了更清晰的了解指针类型的意义
    *p4 = 0;//此时a在内存中的的地址变为:00 33 22 11
//有上面两个例子可得:其类型决定指针解引用是的访问权限  char是1字节  int是4字节


//2.指针加减整数
    int a5 = 0x11223344;
    int *pa5 = &a5;
    char *pc5 = &a5;//一般是不可以这样字写的会警告，这里仅是为了了解指针的意义
    printf("pa5 = %p\n", pa5);//0x7ed3d378f8
    printf("pc5 = %p\n", pc5);//0x7ed3d378f8
    printf("pa5 + 1 = %p\n", pa5 + 1);//pa + 1 = 0x7ed3d378fc  与原先差了4个字节
    printf("pc5 + 1 = %p\n", pc5 + 1);//pc + 1 = 0x7ed3d378f9  与原先差了1个字节
//以上情况都是由于指针的类型不同导致的，所以:指针类型在其与整数加减的时候决定了其向前、向后进一步是多大


//void*指针:指无具体类型的指针(泛型指针),可接受任意类型的指针
    int a6 = 10;
    void *pa6 = &a6;
    char c = 'w';
    void *pc = &c;
    return 0;
}




