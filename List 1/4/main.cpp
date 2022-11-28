#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n1,n2,n3,n4,soma;
	
	printf("Digite 4 numeros: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	soma=n1+n2+n3+n4;
	
	printf("A soma de %d + %d + %d + %d e igual a %d", n1, n2, n3, n4, soma);
	return 0;
}
