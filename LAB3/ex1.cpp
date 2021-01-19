#include <stdio.h>

/* Write a program that accepts an integer number input from the user and checks that number is positive, negative or zero. */

int main( )

{
int x;
printf("Enter integer number: ");
scanf("%d",&x);
if (x>0)
printf("%d is positive");
else if (x<0)
printf("%d is negative");
else
printf("%d is zero");
}