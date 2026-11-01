//const修饰指针
#include <stdio.h>
int main()
{
  //1.引例:const修饰自变量
    int n1 = 0;
    n1 = 10;
    printf("n1 = %d\n", n1);//打印结果为10
    const int n2 = 10;
    // n2 = 10;(这里有这一条代码会报错，因为有const修饰的变量，任何试图修改他的行为都是非法的)
    printf("n2 = %d\n", n2);//这里打印仍为0，因为const修饰变量n2使其具有常属性
  //同时，即使变量n2被修饰之后有常属性，但其本质仍为变量
    int arr[n2] = {0};
    printf("%d ", arr[0]);//但是在鸿蒙终端里面，因为我前面用const修饰了n2，所以在终端里他只是警告，同时帮我将n2当做了一个常量(这里是10)来处理
    return 0;
}
