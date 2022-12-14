#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float num1, square, cube;
	
	printf("Enter a number: ");
	scanf("%f", &num1);
	
	square = num1 * num1;
	cube = num1 * num1 * num1;
	
	printf("\nThe square of the number '%.2f' is %.2f and the cube is %.2f", num1, square, cube);
	return 0;
}
