#include <stdio.h>

/* Write a program to find the largest of three numbers entered by the user. */

int main( )

{
int x,y,z;
printf("Enter three numbers for x,y,z\n");
scanf("%d%d%d",&x,&y,&z);
if (x>y && x>z)
printf("x is the largest number");
else if(y>x && y>z)
printf("y is the largest number");
else if(z>x && z>y)
printf("z is the largest number");
else
printf("x,y,z are equal");
}