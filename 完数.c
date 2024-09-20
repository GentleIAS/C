#include <stdio.h>
int wanshu(int x)
{
    int b=0,c=0;
    int y[100]={0};
    for (int i = 1;i<x;i++)
    {
        if(x%i==0)
        {
            y[c]=i;
            c++;
        }
    }
    for(int i=0;i<=c;i++)
    {
        b+=y[i];
    }
    return b;
}
int main()
{
    int z,n,k;
    printf("1.范围内所以完数\n2.一个数判断是否为完数\n");
    printf("请输入1或2: ");
    scanf("%d",&z);
    if(z==1)
    {
        printf("请输入范围: ");
        scanf("%d",&n);
        for(int t=1;t<=n;t++)
        {
            k=wanshu(t);
            if(k==t)
            {
                printf("%d\t",t);
            }
        }
        printf("\n");
    }
    else if(z==2)
    {
        printf("请输入一个整数: ");
        scanf("%d", &n);
        k=wanshu(n);
        if(k==n)
        {
            printf("%d是完数\n",n);
        }
        else
        {
            printf("%d不是完数\n",n);
        }
    }
    else
    {
        printf("输入错误\n");
    }
}
