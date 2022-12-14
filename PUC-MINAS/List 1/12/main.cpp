#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float num;
	printf("Digite um numero real: ");
	scanf("%f", &num);
	
	printf("A parte inteiro do numero real %f e: %0.0f", num, num);
	return 0;
}
