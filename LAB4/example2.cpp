#include <stdio.h>

int main()
{
    int grade;
    printf("Enter grade of student (between 0 and 4) : ");
    scanf("%d", &grade);

    switch (grade) {
	  case 4:  printf("Excellent");
				  break;
	  case 3:  printf("Good");
	           break;
	  case 2:  printf("Average");
	           break;
	  case 1:  printf("Poor");
	           break;
	  case 0:  printf("Failing");
	           break;
	  default: printf("Illegal grade");
	           break;
	}
       
	

    return 0;
}
 

