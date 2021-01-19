#include<stdio.h>
/* Write a program that displays whether a number input from the keyboard is even or odd number.
	Use switch and case structure to print the correct output.*/
int main()
{
int x;
printf("Enter integer number\n");
scanf("%d",&x);
switch(x%2)
{
case 0:
printf("The number is even");
break;
case 1:
printf("The number is odd");
break;
default:
printf("Error invalid input");



}


}


