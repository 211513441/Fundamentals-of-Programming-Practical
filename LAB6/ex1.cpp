#include <stdio.h>
/* Write a program which takes two numbers x and y as input from the keyboard.
	The program then computes and displays x to the power y (x^y).
	You can run a loop y number of times to compute the answer.*/
int main(void)
{
int x,y,i,result=1;
printf("Enter X value: ");
scanf("%d",&x);
printf("Enter y value: ");
scanf("%d",&y);
for (i=1;i<=y;i++)
result=result*x;

printf("result is %d",result);


}
