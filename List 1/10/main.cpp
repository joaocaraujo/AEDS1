#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int idade, anoat, anofut, idadefut;
	
	printf("---SUA IDADE NO ANO X---\n");
	printf("Quantos anos voce tem? ");
	scanf("%d", &idade);
	
	printf("Em qual ano estamos? ");
	scanf("%d", &anoat);
	
	printf("Voce quer saber quantos anos tera em qual ano? ");
	scanf("%d", &anofut);
	
	idadefut= idade+(anofut-anoat);
	
	printf("No ano de %d voce tera %d anos!", anofut, idadefut);
	
	return 0;
}
