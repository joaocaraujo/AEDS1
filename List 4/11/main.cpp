#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x, multi = 0;
	
	printf("Digite um numero entre 1 e 10: ");
	scanf("%d", &multi);
	
	while (multi <1 || multi>10) {
		printf("O numero deve estar entre 1 a 10, digite novamente: ");
		scanf("%d", &multi);
	}

	
	for(x =1; x<=10; x++)
	{
		printf("%d x %d = %d\n", multi, x, x*multi);
	}
	return 0;
}
