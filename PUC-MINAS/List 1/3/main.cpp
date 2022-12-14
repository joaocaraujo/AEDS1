#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float num1, raiz;
	
    printf("Digite um numero:\n");
    scanf("%f", &num1);

    raiz = sqrt(num1);
    
    printf("A raiz deste numero e: %0.2f", raiz);
	
	return 0;
}
