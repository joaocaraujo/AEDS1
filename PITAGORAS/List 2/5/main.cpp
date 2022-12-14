#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num1, num2;
	
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	int sum = num1 + num2;
	int average = sum/2;
	
	if (average > 15) {
		printf("\nThe average (%d) is greater than 15!", average);
	} else {
		printf("\nThe average (%d) is less than or equal to 15!", average);
	}
	
	return 0;
}
