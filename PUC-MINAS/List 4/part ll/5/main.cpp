
#include <iostream>
#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1;
	double p, total = 0, calculo;
	
	do {
		printf("Digite um inteiro para N:\n");
		scanf("%d", &n1);
	} while (n1<0);

	
	for(int i = 1; i <= n1; i++){
	    p = pow(i, 2);
	    total = total + p;
	}
	
	calculo = n1*(n1 + 1) * (2 * n1 + 1) / 6;
	
	printf("A Potencia %0.2lf e igual a %0.2lf\n", total, calculo);
	
	return 0;
}
