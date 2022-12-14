#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num;
		
		for (;;) {
		printf("\n");
		printf("===-> STOP = 0 <-===\n");
		printf("Digite numeros inteiros positivos: \n");
		scanf("%d", &num);
		
		if ( num <= 0) {
			system("PAUSE");
		} else if (num %2 == 0) {
			printf("=====---------------=====\n");
			printf("O numero '%d' e PAR! \n", num);
			printf("=====---------------=====\n");
		} else {
			printf("=====---------------=====\n");
			printf("O numero '%d' e IMPAR!! \n", num);
			printf("=====---------------=====\n");
		}
		
		}
		

	
	return 0;
}
