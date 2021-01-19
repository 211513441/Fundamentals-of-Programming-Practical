#include<stdio.h>
/*2.	Write a program that accepts a three digit number (e.g. 121) as input and prints whether the number is palindrome or not.
A number is palindrome if it reads the same forward and backward (e.g. 121, 131, 232).
Hint: you can use the division and remainder operators to find out the right-most and left-most digits.
Comparing the right-most and left-most digits would provide the answer.*/
int main()
{
int num;
printf("Enter number of three digit\n");
scanf("%d",&num);
if (num/100==num%10)                   /* num/100 integer divison the answer will be integer*/
printf("The number is palindrome");
else
printf("The number is not palindrome");

}                                                    /* 135%10=5 */