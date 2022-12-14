#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int qtd=0, num=0, menor=0, maior=0;
	
	printf("Digite a quantidade de numeros: ");
	scanf("%d", &qtd);
	
	for (int i=1; i<=qtd; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &num);
			
		if (menor==0) {
			menor = num;
		} else if (maior==0) {
			maior = num;
		} else if (num <= menor) {
			menor = num;
		} else if (num >= maior) {
			maior = num;
		}
	}
	
	printf("O menor numero digitado e %d e o maior e %d!", menor, maior);
	
	return 0;
}
