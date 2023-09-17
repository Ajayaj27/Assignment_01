//Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If reversed number is same as entered number
//it is called palindrome).

#include<stdio.h>

int main(void)
{
	int num, original_num, reverse_num = 0, rem = 0;

	printf("Enter a 5-digit number: ");
	scanf("%d", &num);

	original_num = num;

	if(num < 10000 || num > 99999)
	{
		printf("Invalid input. Please enter a 5-digit number: \n");
		return 1;
		}

	while (num != 0)
	{
		rem = num % 10;
		reverse_num = reverse_num * 10 + rem;
		num /= 10;
	}	

	if(reverse_num == original_num)
	{
		printf("%d is a numerical Palindrome.\n", original_num);
	}
	else
	{	
		printf("%d is not a numerical Palindrome.\n", original_num);
	}
	return 0;
}
