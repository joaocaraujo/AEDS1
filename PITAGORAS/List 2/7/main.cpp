#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num1 = 0, num2 = 0, smaller = 0;
	
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	int sum = num1 + num2;
	
	if(num1 > num2) {
		smaller = num2 * 2;
	} else {
		smaller = num1 * 2;
	}
	
	if(sum > smaller) {
		printf("\nThe sum of the numbers is(%d) *greater than the smallest entered(%d)!", sum, smaller);
	} else if (sum < smaller) {
		printf("\nThe sum of the numbers(%d) is *less than twice the smallest entered(%d)!", sum, smaller);
	} else {
		printf("\nThe sum of the numbers(%d) *equals twice the smallest entered(%d)!", sum, smaller);
	}
	return 0;
}
