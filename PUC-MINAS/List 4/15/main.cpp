#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num;
	
	do {
		printf("Digite um numero inteiro, positvo ou negativo: ");
		scanf("%d", &num);
		
		if (num>0) {
			printf("POSITIVO\n");
		} else if (num<0) {
			printf("NEGATIVO\n");
		}
	} while (num!=0);
	
	return 0;
}
