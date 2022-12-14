#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num1, num2, num3, soma, media;
	
	printf("Digite 3 numeros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	soma = num1 + num2 + num3;
	media = soma/3;
	
	printf("A soma de %d + %d + %d e igual a %d e a media deles e %d!", num1, num2, num3, soma, media);
	return 0;
}
