#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float n1, media, soma;
	int qtd;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtd);


	
	for (int i =1; i<qtd+1; i++) {
		
		printf("Digite a nota: \n");
		scanf("%f", &n1);
		
		soma= n1+soma;

	}
	
	media = soma/qtd;
	
	printf("A media aritimetica desta turma e %0.2f", media);
	

	
	return 0;
}
