#include <stdio.h>
int main()
{
    int a[15]={52,60,514,48,56,95,32,15,89,65,75,156,896,352,458};
    int i;
    for(i=0;i<14;i++)
    {
        for(int n=0;n<14-i;n++)
        {
            if(a[n]>a[n+1])
            {
                int temp=a[n];
                a[n]=a[n+1];
                a[n+1]=temp;
            }
        }
    }
    for(i=0;i<15;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
