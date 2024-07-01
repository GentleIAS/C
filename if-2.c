//从键盘输入三个数，判断这三个数为边能否组成三角形，并且从小到大排列//
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三个数：");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        printf("这三个数可以组成三角形\n");
    }
    else
    {
        printf("这三个数不能组成三角形\n");
    }
    int min=a;
    if(min>b)
    {
        a=b;
        b=min;
        min=a;
    }
    if (min>c)
    {
        a=c;
        c=min;
        min=a;
    }
    if (b>c)
    {
        min=c;
        c=b;
        b=min;/* code */
    }
    printf("这三个数从小到大排列为：%d,%d,%d\n",a,b,c);
    return 0;
}