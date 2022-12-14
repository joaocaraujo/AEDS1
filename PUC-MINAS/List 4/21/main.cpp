#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int senha;
	char user[50];
	
	do {
		printf("---LOGIN KROTON---\n\n");
		printf("Digite seu user: ");
		scanf("%s", user);
		
		printf("Digite sua senha: ");
		scanf("%d", &senha);
		
		if (senha != 1234) {
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
			printf("Ola %s, sua senha esta invalida!\n", user);
			printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
		} else {
			printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
			printf("Bem-vindo de volta %s, seu acesso foi permitido!\n", user);
			printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
		}
		
	} while (senha != 1234);
	
	return 0;
}
