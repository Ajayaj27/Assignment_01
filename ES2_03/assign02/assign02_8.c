//Write a program that will calculate the price for a quantity entered from the keyboard, giventhat the unit price is Rs 5
//and there is a discount of 10 percent for quantities over 30 and a 15 percent discount for quantities over 50.

#include<stdio.h>

int main(void)
{
	int unit_price = 5, quantity;
	double final_price, price, discount_1, discount_2;
	

	printf("Enter quantity from user: ");
	scanf("%d", &quantity);

	price = unit_price * quantity;

	discount_1 = price - (price * 10/100);
	final_price = discount_1;

	discount_2 = price - (price * 15/100);
	final_price = discount_2;

	if(quantity > 30)
	{
		printf("final_price = %.2lf\n", final_price);
	}
		else if(quantity > 50)
	{
		printf("final_price = %.2lf\n", final_price);
	}	
		else
		printf("final_price = %.2lf\n", price);

return 0;

}



