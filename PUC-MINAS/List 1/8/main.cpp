#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int base, altura, area;
	
	printf("---AREA DE UM TRINAGULO---\n");
	printf("Digite, consecutivamente, a base e a altura do seu triangulo: ");
	scanf("%d %d", &base, &altura);
	
	area= (base*altura)/2;
	
	printf("Um triangulo de base = %d e altura = %d tem a area de %d", base, altura, area);
	return 0;
}
