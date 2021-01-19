#include<stdio.h>
int main()
{
int age;
printf("Enter age: ");
scanf("%d",&age);
if(age>0 && age<14)
printf("child");
if (age>=14&&age<18)
printf("teenager");
if(age>=18)
printf("adult");
return 0;
}
