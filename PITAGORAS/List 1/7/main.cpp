#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float price, discount;
	
	printf("Enter a price of your product: ");
	scanf("%f", &price);
	
	printf("Enter the product discount(ex: 10): ");
	scanf("%f", &discount);
	
	float discountpercent = discount/100;
	
	float end = price - (price*discountpercent);
	
	printf("\n===========================\n\nThe final price of your product is -> R$%.2f\n\n===========================\n\n", end);
	
	return 0;
}
