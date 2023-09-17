//Write a program to find maximum of three numbers using if-else.

#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	int max;

	printf("Enter three numbers : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 > num2)
	{
		// num1 maximum
		if(num1 > num3)
			max = num1;
		else
			max = num3;
	}
	else
	{
		// num2 maximum
		if(num2 > num3)
			max = num2;
		else
			max = num3;
	}
		printf("max = %d\n", max);
		printf("\n");
	return 0;
}
