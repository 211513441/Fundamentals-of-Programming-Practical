#include <stdio.h>

int main()

{

 float temp;

 printf("What is the temperature outside?\n");

 scanf("%f",&temp);

 if(temp < 65.0)

 printf(" It's a bit chilly out!\n");

else

 printf("It seems pleasant!");

return 0;

}
