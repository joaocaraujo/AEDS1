#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x, cont = 0;
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	
	while (cont < 10)
	{
		cont++;
		printf("-------\n");
		printf("%d - %d\n", cont, x);
	}
	return 0;
}
