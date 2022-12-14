#include <iostream>

/* 1) Constru um algoritimo que leia dois valores reais e mostre o primeiro com acréscimo de 30% e o segundo com desconto de 25%. */

int main(int argc, char** argv) {
	float num1, num2;
	
	printf("Digite o valor do primeiro e do segundo produto: ");
	scanf("%f %f", &num1, &num2);
	
	num1 += (num1 * 0.30);
	num2 -= (num2 * 0.25);
	
	printf("\nO produto 1, com acrescimo de 30%%, ficara em R$%.2f.\n===========================================\nO produto 2, com desconto de 25%%, ficara em R$%.2f.", num1, num2);
	return 0;
}
