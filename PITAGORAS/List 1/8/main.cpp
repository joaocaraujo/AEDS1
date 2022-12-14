#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float costprice, profit;
	
	printf("Enter cost price of product: ");
	scanf("%f", &costprice);
	
	printf("Enter the profit percentage you want to earn: ");
	scanf("%f", &profit);
	
	float percentprofit = profit/100;
	float finalprice = costprice + (percentprofit*costprice);
	
	printf("\nTo earn %.0f%% on the R$%.2f product, you need to sell it for R$%.2f\n", profit, costprice, finalprice);
	
	return 0;
}
