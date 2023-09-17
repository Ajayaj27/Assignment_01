/Write a program to find maximum of two numbers using conditional operator

#include<stdio.h>

int main(void)
{
	int num1, num2;
	
	printf("Enter two number: ");
	scanf("%d %d", &num1, &num2);

	num1 > num2 ? printf("num1 is maximum = %d\n", num1) : printf("num2 is maximum = %d\n", num2);

	return 0;
}
