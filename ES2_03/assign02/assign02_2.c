//Input a number and display whether number is Even or Odd.

#include<stdio.h>

int main(void)
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);

	if(num % 2 == 0)
	{
 		printf("Number is Even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
	return 0;
}
