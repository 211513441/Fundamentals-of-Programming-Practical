#include<stdio.h>
/*Write a program that generate Multiplication table This program asks user to enter an integer
 and this program will generate the multiplication table upto 10.*/
int main()
{
int n, i;

printf("Enter an integer to find multiplication table: "); 

scanf("%d",&n); 

for(i=1;i<=10;++i) 
												 /* i=i+1 */
{

 printf("%d * %d = %d\n", n, i, n*i); 

} 

return 0; 

}