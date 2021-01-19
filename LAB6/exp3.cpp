#include<stdio.h>
/* sum of even integers from 2 to 100 */
int main()                                                       
{
int x, sum =0;
for(x=2 ; x<= 100; x=x+2)
sum = sum + x;
printf(" sum of even integers from 2 to 100 is: %d", sum);
return 0;
}
