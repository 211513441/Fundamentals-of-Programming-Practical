#include<stdio.h>
int main()
{
int i,x,y,sum=0;
printf("Enter Two numbers\n");
scanf("%d%d",&x,&y);
x=x+1;
for (i=x;i<y;i++)
{
sum+=i;
}
printf("sum is %d",sum);
return 0;
}

