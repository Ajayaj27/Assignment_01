#include<stdio.h>

int main(void)
{
	int year;
	
	printf("Enter year: ");
	scanf("%d", &year);

	if(year % 4 == 0)
	{
		
      if(year %100 != 0)
	  {
	  		
		  printf("leap year. It has 366 days\n");
	
	  }
	  if(year % 400 ==0)
	  {
	  printf("leap year. It has 366 days\n");
	  }

	}						
		else
			{
				printf("Not-leap year. It has 365 day\n");
			}

	return 0;

}
