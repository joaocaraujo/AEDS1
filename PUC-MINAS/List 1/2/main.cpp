#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float atual, novo;
	
	printf("Digite seu salario atual: ");
	scanf("%f", &atual);
	
	novo = atual + (0.10*atual);
	
	printf("Seu salario de R$%0.2f recebeu um ajuste de 10%, resultando em R$%0.2f!", atual, novo);
	
	return 0;
}
