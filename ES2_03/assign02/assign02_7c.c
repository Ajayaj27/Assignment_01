#include<stdio.h>

int main(void)
{
	int year;

	printf("Enter year: ");
	scanf("%d", &year) ;

	int days = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? printf("leap year. It has 366 days\n") : printf("Not-leap year. It has 365 days\n");
	return 0;
}
