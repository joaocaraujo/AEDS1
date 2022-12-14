#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float balance;
	
	printf("Enter application balance: ");
	scanf("%f", &balance);
	
	float end = balance + (balance*0.02);
	
	printf("With a balance of R$%.2f and a readjustment of 2%%, your final balance is: %.2f", balance, end);
	return 0;
}
