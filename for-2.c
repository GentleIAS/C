/*
从键盘输入一个整数，判断该数是否为素数
*/
#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d是不素数\n",n);
            break;
        }
        else
        {
            printf("%d是素数\n",n);
            break;
        }
    }
}