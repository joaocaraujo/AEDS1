#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float num1, num2, num3;
	
	printf("Enter three numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	float sum = num1 + num2 + num3;
	float average = sum/3;
	
	if(average > 20) {
		printf("\nThe sum of the numbers is %.1f, their average %.1f is *greater* than 20!\n", sum, average);
	} else {
		printf("\nThe sum of the numbers is %.1f, their average %.1f is *less than or equal* to 20!\n", sum, average);
	}
	return 0;
}
