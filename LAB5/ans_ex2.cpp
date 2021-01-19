#include<stdio.h>
/* Write a program to find the number of positive, negative and zeros in 10 numbers
	which are input from the keyboard.*/
int main()
{
int i,x,a=0,b=0,c=0;
for (i=1;i<=10;i++)
  {                                                   /* a: counter for positive number to find the number of positive numbers*/
  printf("Enter Number(%d): \n",i);                   /* b: counter for negative number to find the number of negative numbers*/
  scanf("%d",&x);                                     /* c: counter for zero number to find the number of zeros numbers*/
  if (x>0)                            {
  a=a+1;
  printf("The number is positive\n"); }
  else if (x<0)                       {
  b=b+1;
  printf("The number is negative\n"); }
  else                                {
  c=c+1;
  printf("The number is zero\n");     }

  }
printf("Number of positive numbers are %d\n",a);
printf("Number of negative numbers are %d\n",b);
printf("Number of zeros numbers are %d\n",c);
}