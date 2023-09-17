// Write a program to accept number and check whether the number is +ve, -ve and zero.
#include<stdio.h>

int main(void)
{	
	int	num;

	printf("Accept number from user: ");
	scanf("%d", &num);

	if(num > 0)
	printf("Number is +ve = %d\n", num);
	else if(num < 0)
	printf("Number is -ve = %d\n", num);
	else
	printf("Number is zero = %d\n", num);

	return 0;
}
