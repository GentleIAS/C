/*
从键盘输入一个整数n，计算n的阶乘（使用do while）
*/

#include<stdio.h>
int main()
{
    int i=1,n,s=1;
    printf("请输入一个整数：");
    scanf("%d",&n);
    do
    {
        s=s*i;
        i++;
    } while (i<=n);
    printf("%d的阶乘为%d\n",n,s);
}
