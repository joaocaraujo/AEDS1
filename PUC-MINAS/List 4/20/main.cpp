#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float num1 = 0, num2 = 0, divisao = 0;
	char continuar = '\n';
	
	do {
		printf("Digite o primeiro e o segundo numero: \n");
		scanf("%f %f", &num1, &num2);
				
		if(num2 == 0){
			printf("---------------\n");
			printf("VALOR INVALIDO\n");
			printf("---------------\n");
		} else {
			divisao = num1/num2;
			printf("O valor da divisao de %0.1f por %0.1f e igual a %0.1f\n", num1, num2, divisao);
			printf("-------------------------------------------\n");
		}
		
		do {
			printf("Voce deseja calcular outros numeros? [S ou N]: \n");
			scanf("%s", &continuar);
		}	while (continuar != 'N' && continuar != 'n' && continuar != 'S' && continuar != 's');

	} while (continuar != 'N' && continuar != 'n');
	
	
return 0;
}
