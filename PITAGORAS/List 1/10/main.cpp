#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float celsius;
	
	printf("Enter the temperature in degrees Celsius: ");
	scanf("%f", &celsius);
	
	float fahrenheit = ( 9 * celsius + 160 ) / 5;
	
	printf("\n%.1f degrees Celsius is %.1f Fahrenheit\n", celsius, fahrenheit);
	
	return 0;
}
