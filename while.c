/*
从键盘输入一个非负整数，逆序输出这个非负整数
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("请输入一个非负整数：\n");
    scanf("%d",&n);
    while(n)
    {
        i=n%10;
        n=n/10;
        printf("%d",i);
    }
}