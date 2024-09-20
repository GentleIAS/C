#include <stdio.h>
int huiwen(int x)
{
    int b=0,i;
    int y[100]={0};
    for (i = 0;  ; i++)
    {
        y[i] = x % 10;
        x = x / 10;
        if(x==0)
        {
            break;
        }
    }
    for(int m=0;m<=i;m++)
    {
        b=b*10+y[m];
    }
    return b;
}
int main()
{
    int z,n,k;
    printf("1.范围内所以回文数\n2.一个数判断是否为回文数\n");
    printf("请输入1或2: ");
    scanf("%d",&z);
    if(z==1)
    {
        printf("请输入范围: ");
        scanf("%d",&n);
        for(int t=1;t<=n;t++)
        {
            k=huiwen(t);
            if(k==t)
            {
                printf("%d\t",t);
            }
        }
        printf("\n");
    }
    else if(z==2)
    {
        printf("请输入一个整数n: ");
        scanf("%d", &n);
        k=huiwen(n);
        if(k==n)
        {
            printf("%d是回文数\n",n);
        }
        else
        {
            printf("%d不是回文数\n",n);
        }
    }
    else
    {
        printf("输入错误\n");
    }
}
