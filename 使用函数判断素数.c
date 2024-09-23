#include <stdio.h>
void ss1(int a)
{
    int i;
    if(a==1)
    {
        printf("不是素数\n");
    }
    else
    {
        for(i = 2;i<a;i++)
        {
            if(a%i==0)
            {
                printf("不是素数\n");
                break;
            }
        }
        if(a==i)
        {
            printf("是素数\n");
        }
    }
}

char *ss2(int a)
{
    int i;
    if(a==1)
    {
        return "不是素数";
    }
    else
    {
        for(i = 2;i<a;i++)
        {
            if(a%i==0)
            {
                return "不是素数";
                break;
            }
        }
        if(a==i)
        {
            return "是素数";
        }
    }
}

int ss3(int a)
{
    int i;
    if(a==1)
    {
        return 1;
    }
    else
    {
        for(i = 2;i<a;i++)
        {
            if(a%i==0)
            {
                return 1;
                break;
            }
        }
        if(a==i)
        {
            return 0;
        }
    }
}

void ss4(int a,char **s)
{
    int i;
    if(a==1)
    {
        *s="不是素数";
    }
    else
    {
        for(i = 2;i<a;i++)
        {
            if(a%i==0)
            {
                *s="不是素数";
                break;
            }
        }
        if(a==i)
        {
            *s="是素数";
        }
    }
}

int main()
{
    int a;
    char *s;
    scanf("%d",&a);
    ss1(a);
    ss4(a,&s);
    printf("%s\n",ss2(a));
    printf("%s\n",ss3(a)==0?"是素数":"不是素数");
    printf("%s\n",s);
    return 0;
}
