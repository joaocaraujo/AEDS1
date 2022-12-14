#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float salario, final;
	
	printf("Digite seu salario atual: ");
	scanf("%f", &salario);
	
	final= salario - (salario*0.07);
	
	printf("Considerando sua gratificacao de 5%, seu salario atual de R$ %0.2f  e os impostos de 7 %, seu salario final e R$ %0.2f", salario, final);
	return 0;
}
