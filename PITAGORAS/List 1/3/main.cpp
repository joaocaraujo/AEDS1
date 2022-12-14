#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float salary, water, light, phone, rent, end;
	
	printf("Enter your salary: ");
	scanf("%f", &salary);
	
	printf("Enter your monthly expenses for water, light, phone and rent: ");
	scanf("%f %f %f %f", &water, &light, &phone, &rent);
	
	float expense = water + light + phone + rent;
	end = salary - expense;
	
	printf("Receiving R$%.2f and with monthly expenses of %.2f, your total balance will be %.2f", salary, expense, end);
	return 0;
}
