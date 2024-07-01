/*
根据下面问题用if语句实现
        | 1000  y>1000
        | 100   500<=y<=1000
    x = | 10    100<=y<500
        | 1     10<=y<100
        | 0.1   0<=y<10
*/

#include "stdio.h"

int main()
{
    int x;
    float y;
    printf("请输入y的值:");
    scanf("%f", &y);
    if (y > 1000)
    {
        printf("x = 1000");
    }
    else if (y >= 500 && y <= 1000)
    {
        printf("x = 100");
    }
    else if (y >= 100 && y < 500)
    {
        printf("x = 10");
    }
    else if (y >= 10 && y < 100)
    {
        printf("x = 1");
    }
    else if (y >= 0 && y < 0)
    {
        printf("x = 0.1");
    }
    else
    {
    printf("输入错误！");
    }
    return 0;
}
