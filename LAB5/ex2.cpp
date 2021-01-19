#include<stdio.h>
int main()
{
int i,num,c=0,positive=0,negative=0;
for (i=1;i<=10;i++)
	{
	printf("Enter number(%d): \n",i);
	scanf("%d",&num);
	if (num>0)
	positive=positive+1;
	else if (num==0)
	c=c+1;
	else if (num<0)
	negative=negative+1;
	}
printf("Number of positive numbers are %d\n",positive);
printf("number of negative numbers are %d\n",negative);
printf("Number of zeros numbers are %d",c);
}