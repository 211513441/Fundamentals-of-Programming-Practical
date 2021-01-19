#include<stdio.h>
 int main()
{ 
int n, count, sum=0; 
printf("Enter the value of n.\n"); 
scanf("%d",&n); 
for(count=1;count<=n;++count)      /* count=count+1 */
 {
sum+=count;                       /* sum=sum+count */
 } 
printf("Sum=%d\n",sum);
printf("Count=%d",count);
return 0;
}
