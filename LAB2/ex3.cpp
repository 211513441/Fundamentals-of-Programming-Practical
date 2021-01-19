#include<stdio.h>
main()
{
int days,mn,years,week;
printf("Enter number of days: ");
scanf("%d",&days);
years=days/365;
mn=days/30;
week=days/7;
printf("years=%d\t,mn=%d\t,week=%d\t,days=%d\t",years,mn,week,days);
return 0;


}
