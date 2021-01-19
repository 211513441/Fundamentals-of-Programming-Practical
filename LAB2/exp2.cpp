#include <stdio.h>

void main()
{
       int    a, b;
       a  =  b  =  5;
      
 printf("postfix mode and prefix mode example\n");
 printf("initial value, a = b = 5\n");
 printf("\npostfix mode, a-- = %d  prefix mode, --b = %d", a--, --b);
 printf("\nprefix mode, a-- = %d  postfix mode, --b = %d", --a, b--);
 printf("\npostfix mode, a-- = %d  prefix mode, --b = %d", a--, --b);
 printf("\nprefix mode, a-- = %d  postfix mode, --b = %d", --a, b--);
 printf("\npostfix mode, a-- = %d  prefix mode, --b = %d", a--, --b);
}

