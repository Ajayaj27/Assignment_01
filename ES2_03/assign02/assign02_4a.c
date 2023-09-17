//Write a program to find maximum of two numbers using

#include<stdio.h>
	
int main(void)
{
	int num1, num2;

	printf("Enter two number: ");
	scanf("%d %d", &num1, &num2);

	if(num1 > num2)
	printf("Maximum number num1 = %d", num1);

	else
	printf("maximum number num2 = %d", num2);
	
	printf("\n");
	return 0;

}
