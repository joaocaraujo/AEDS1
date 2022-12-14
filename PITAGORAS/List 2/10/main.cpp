#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float salary = 0, financing = 0;
	
	printf("Enter your salary: ");
	scanf("%f", &salary);
	
	printf("\nEnter intended funding: ");
	scanf("%f", &financing);
	
	if (financing <= salary * 5) {
		printf("\nFinancing granted!");
		printf("\n========================\nThank you for consulting us!");
	} else {
		printf("\nFinancing denied!");
		printf("\n========================\nThank you for consulting us!");
	}
	return 0;
}
