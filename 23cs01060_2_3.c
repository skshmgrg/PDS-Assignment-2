#include<stdio.h>
int main()
{   int total,years,months,weeks,days;
    printf("enter the number of days");
    scanf("%d",&total);
    years=total/365;
    total=total%365;
    months=total/30;
    total=total%30;
    weeks=total/7;
    total=total%7;
    days=total;
    printf ("Years:%d\nMonths:%d\nWeeks=%d\nDays=%d\n",years,months,weeks,days);
}