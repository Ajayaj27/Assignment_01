//Write a program to accept two numbers and display division of the two numbers. Check fordivide by zero error.
//If divider is zero then display appropriate error message.

#include<stdio.h>

int main(void)
{
	float op1, op2, res;
	char ch, opr;
	printf("Enter op1 opr op2: ");
	scanf("%f %c %f", &op1, &opr, &op2);

	if(opr == '/' && op2 != 0)
	{
		res = op1 / op2;
	printf("res = %f\n", res);
	}
	
	else
		printf("Divided by zero error\n");
	return 0;
	

}
