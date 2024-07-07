/*
从键盘输入两个整数，求出这两个整数的最大公约数和最小公倍数
*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        int t=a;
        a=b;
        b=t;
    }
    for(int i=b;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            c=i;
            break;
        }
    }
    for(int i=b; ;i++)
    {
        if(i%a==0&&i%b==0)
        {
            d=i;
            break;
        }
    }
    printf("%d和%d的最大公约数是%d,最小公倍数是%d\n",a,b,c,d);
}