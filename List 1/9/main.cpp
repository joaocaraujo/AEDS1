#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float raio, pi=3.14, area;
	
	printf("---AREA DE UM CIRCULO---\n");
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area=pi*(raio*raio);
	
	printf("Em um circulo de raio %0.2f, considerando pi = 3.14, temos a area de %0.2f", raio, area);
	
	return 0;
}
