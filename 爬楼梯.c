//每次可以爬1阶或者2阶台阶，爬到第n阶有多少种方法
#include<stdio.h>
long long abc(int n)
{
  if(n>=2)
  {
    return abc(n-1)+abc(n-2);
  }
  else if(n<=1)
  {
    return 1;
  }
}
int main()
{
  int n;
  printf("请输入台阶数：\n");
  scanf("%d",&n);
  long long a=abc(n);
  printf("%d介台阶时有%lld种方法\n",n,a);
}
