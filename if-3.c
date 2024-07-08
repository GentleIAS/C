/*
从键盘输入一个字符，如果字符为大写字母则转换为小写输出，如果为小写字母则转换为大写输出，不是则不转换输出
*/

#include<stdio.h>
int main()
{
    char c;
    printf("请输入一个字符：");
    scanf("%c",&c);
    if(c>='a'&&c<='z')
    {
        printf("%c\n",c-32);
    }
    else if(c>='A'&&c<='Z')
    {
        printf("%c\n",c+32);
    }
    else
    {
        printf("%c\n",c);
    }
}
