#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1 = 0, num2 = 0;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	if (num1 > num2) {
		printf("\n%d is greater than %d\n", num1, num2);
	} else if (num2 > num1) {
		printf("\n%d is less than %d\n", num1, num2);	
	} else {
		printf("You entered two same numbers! %d and %d", num1, num2);
	}
	return 0;
}
