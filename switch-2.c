/*
从键盘输入一个日期，计算距离年末还有多少天
*/

#include<stdio.h>
int main()
{
    int year,month,day,feb,rema_days;
    printf("请输入年月日(xxxx xx xx)：\n");
    scanf("%d%d%d",&year,&month,&day);
    if(( month>0 && month<=12) && (day>0 && day<=31))
    {
        if((year%4==0 && year%100!=0) || (year%400==0))
        {
            feb=29;
        }
        else
        {
            feb=28;
        }
        switch(month)
        {
            case 1:rema_days=337+feb-day;printf("距离年末还有%d天\n",rema_days);break;
            case 2:rema_days=306+feb-day;printf("距离年末还有%d天\n",rema_days);break;
            case 3:rema_days=306-day;printf("距离年末还有%d天\n",rema_days);break;
            case 4:rema_days=275-day;printf("距离年末还有%d天\n",rema_days);break;
            case 5:rema_days=245-day;printf("距离年末还有%d天\n",rema_days);break;
            case 6:rema_days=214-day;printf("距离年末还有%d天\n",rema_days);break;
            case 7:rema_days=184-day;printf("距离年末还有%d天\n",rema_days);break;
            case 8:rema_days=153-day;printf("距离年末还有%d天\n",rema_days);break;
            case 9:rema_days=122-day;printf("距离年末还有%d天\n",rema_days);break;
            case 10:rema_days=92-day;printf("距离年末还有%d天\n",rema_days);break;
            case 11:rema_days=61-day;printf("距离年末还有%d天\n",rema_days);break;
            case 12:rema_days=31-day;printf("距离年末还有%d天\n",rema_days);break;
            default:printf("输入错误\n");break;
        }
    }
    else
    {
        printf("输入错误\n");
    }
}

//偷学别人的↓↓↓//
// #include<stdio.h>
// int main()
// {
//     int year,month,day;
//     int rema_days=0;
//     printf("请输入年月日(xxxx xx xx)：\n");
//     scanf("%d%d%d",&year,&month,&day);
//     switch (month)
//     {
//     case 1:rema_days+=31;
//     case 2:rema_days+=28;
//         if((year%4==0 && year%100!=0) || (year%400==0))
//         {
//             rema_days+=1;
//         }
//     case 3:rema_days+=31;
//     case 4:rema_days+=30;
//     case 5:rema_days+=31;
//     case 6:rema_days+=30;
//     case 7:rema_days+=31;
//     case 8:rema_days+=31;
//     case 9:rema_days+=30;  
//     case 10:rema_days+=31;
//     case 11:rema_days+=30;
//     case 12:rema_days+=31;
//     default:printf("输入错误\n");break;
//     }
//     rema_days-=day;
//     printf("距离年末还有%d天\n",rema_days);
// }