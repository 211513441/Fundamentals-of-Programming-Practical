#include <stdio.h>
/*Write a program that accepts an integer number and prints whether the entered number is a 1-digit (0-9),
 two digit (10-99), three digit(100-999), four digit(1000-9999), or a five-or-more digit number.*/
int main()
{
int x;
printf("Enter integer number: ");
scanf("%d",&x);
if (x>=0&&x<10)
printf("The entered number is one digit number");
else if (x>=10&&x<100)
printf("The entered number is two digit number");
else if (x>=100&&x<1000)
printf("The entered number is three digit number");
else if (x>=1000&&x<10000)
printf("The entered number is four digit number");
else
printf("The entered number is five or more digit number");



}