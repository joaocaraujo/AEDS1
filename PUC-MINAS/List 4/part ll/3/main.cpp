#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int expoente = 0, n1 = 15;
	double calculo, p, calculoTotal = 0, div;
	
	for(n1 = 15; n1 > 0 ; n1--){
	    p = pow(2 , expoente);
	    div = pow(n1, 2);
	    calculo = p / div;
	    calculoTotal = calculoTotal + calculo;
	    expoente++;
	}
	
	printf("O somatorio da sequencia e: %0.2lf\n", calculoTotal);

return 0;
}
