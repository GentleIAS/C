#include <stdio.h>
#define n 7
int max(int *pn)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(pn[i]>max)
		{
			max=pn[i];
		}
	}
	return max;
}
int main()
{
    int num[n]={0};
	printf("请输入7个整数：\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("最大值为：%d\n",max(num));
}
