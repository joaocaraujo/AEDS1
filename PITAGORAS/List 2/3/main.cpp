#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num1, num2;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	int sum = num1 + num2;
	printf("\nsum = %d\n", sum);
	
	if (sum > 123) {
		printf("\nThe sum of these numbers is GREATER than one hundred and twenty-three!");
	} else {
		printf("\nThe sum of these numbers is LESS than one hundred and twenty-three");
	}
	return 0;
}
