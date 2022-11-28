#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	float valor, taxa, taxafim, rendimento, total;
	
	printf("\n----------BANCO DO BRASIL----------\n");
	printf("Digite o valor do seu deposito: \n");
	scanf("%f", &valor);
	printf("Digite o a procentagem da taxa de juros que deseja receber(ex: 17): \n");
	scanf("%f", &taxa);
	
	taxafim= taxa/100;
	rendimento = valor*taxafim;
	total= rendimento + valor;
	
	printf("Seu deposito de %0.2f rendera %0.2f ao mes.\nEm 1 mes o valor total sera: %0.2f", valor, rendimento, total);
	return 0;
}
