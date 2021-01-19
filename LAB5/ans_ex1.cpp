#include<stdio.h>
/* Write a C program to find the sum of all integers between any two numbers x and y
	which are taken as input from the keyboard.*/
int main()
{
int x,y,i,sum=0;
printf("Enter First and second number\n");
scanf("%d%d",&x,&y);
for (i=x+1;i<=y-1;i++)
sum=sum+i;
printf("Sum=%d",sum);

}