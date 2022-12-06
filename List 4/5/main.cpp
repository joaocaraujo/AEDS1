#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x;
	char palavra[99];
	
	printf("Digite quantas vezes deseja repetir uma palavra: ");
	scanf("%d", &x);
	
	printf("Digite a palavra que deseja repetir: ");
	scanf("%s", &palavra);
	
	for (int i = 1; i<=x; i++) {
		printf("%d - %s\n", i, palavra);
	}
	
	return 0;
}
