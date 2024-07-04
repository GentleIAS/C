/*
从键盘输入一个成绩，判断成绩等级
*/

#include<stdio.h>
int main()
{
    int a;
    printf("请输入成绩：\n");
    scanf("%d",&a);
    if(a>100 || a<0)
    {
        printf("输入错误\n");
    }
    else
    {
        switch(a/10)
        {
            case 10:
            case 9:printf("成绩为A\n");break;
            case 8:printf("成绩为B\n");break;
            case 7:printf("成绩为C\n");break;
            case 6:printf("成绩为D\n");break;
            default:printf("成绩为E\n");
        }
    }
}