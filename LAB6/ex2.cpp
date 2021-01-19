#include <stdio.h>
/* Write a C program that reads N integers and finds the number of integers that are larger than 50
  (for example N=10;    56, 70, 20, 35, 63, 48, 74, 22, 83, 18 has 5 integers larger than 50) */
int main(void)
{
int x,N,count=0,num;
printf("How many numbers you wnat to enter: \n");
scanf("%d",&N);
for (x=1;x<=N;x++)
  {
  printf("Number (%d) is: ",x);
  scanf("%d",&num);
  if (num>50)
  count=count+1;
  }
printf("There are %d numbers larger than 50",count);
}

