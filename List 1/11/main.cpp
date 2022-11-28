#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float gato1, gato2, saco;
	
	printf("---CALCULADORA DE RACAO---\n");	
	printf("Quantos kilos possui o saco de racao? ");
	scanf("%f", &saco);
	
	printf("Quantas gramas de racao o primeiro gato come ao dia? ");
	scanf("%f", &gato1);
	
	printf("Quantas gramas de racao o segundo gato come ao dia? ");
	scanf("%f", &gato2);
	
	int gatos= gato1 + gato2;
	float comidagramas = saco * 1000;
	float sobra = comidagramas - (gatos*5);
	int qtddias = sobra/gatos;
	
	if (sobra > 0) {
        printf("A sobra de racao sera de %0.2f gramas em 5 dias.\nNesta constacia, o que sobrar sera suficente para %d dias", sobra, qtddias);
    } else {
        printf("ATENCAO: Quantidade de racao insuficiente!");
    }
	
	return 0;
}
