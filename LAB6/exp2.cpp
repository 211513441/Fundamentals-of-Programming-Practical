#include<stdio.h>
/* display all numbers in the range 5-100 which are multiples of 7 */
int main()
{		
int i;
     for(i = 5; i < 100; i++) {                           
      if(!( i % 7 )) {
      printf("%d ", i);
                       }
}
return 0;
}
