/*
水仙花数：三位整数，各位数字的立方和等于该数本身
*/
#include<stdio.h>
int main()
{
    int a,b,c,i=100;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=i/10%10;
        c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)
        {
            printf("%d\n",i);
        }
    }
}
