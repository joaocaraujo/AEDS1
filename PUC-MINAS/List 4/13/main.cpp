#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num, cont, cont2;
		
	for (int i = 1;  i <= 10; i++) {
		printf("Digite o %d numero: ", i);
		scanf("%d", &num);
		
		if(num>10 && num<20){
			cont++;
		} else {
			cont2++;
		}
	}
	
	printf("%d numeros estao entre 10 e 20, enquanto %d numeros estao fora do intervalo!", cont, cont2);
	return 0;
}
