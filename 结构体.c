//结构体输入学生信息，求平均值并查找小于90分的人并输出
#include<stdio.h>
struct student 
{
    char name[10];
    int num;
    int age;
    char group;
    float score;
}class[5];
int main()
{
    int a=0,i;
    for(i=0;i<5;i++)
    {
        printf("请输入第%d个学生信息：\n",i+1);
        scanf("%s %d %d %c %f",class[i].name,&class[i].num,&class[i].age,&class[i].group,&class[i].score);
    }
    for(i=0;i<5;i++)
    {
        a+=class[i].score;
    }
    printf("平均成绩为%f\n",a/5.0);
    for(i=0;i<5;i++)
    {
        if(class[i].score<90)
        {
            c[b]=i;
            b++;
        }
    }
    printf("不及格的学生有%d个\n分别是：",b);
    for(i=0;i<b;i++)
    {
        printf("%s ",class[c[i]].name);
    }
    printf("\n");
}
