#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double frequencia, totalaulas, frequenciafinal, notaprova, notaexerc, notatotal;
	
	printf("--CALCULADORA DE APROVACAO PITAGORAS--\n");
	printf("Digite o numero total de aulas do semestre e em seguida a quantidade de aulas que voce faltou: ");
	scanf("%lf %lf", &totalaulas, &frequencia);
	frequenciafinal = totalaulas - frequencia;
	printf("Digite o sua total em provas e sem seguida sua nota total em exercicios: ");
	scanf("%lf %lf", &notaprova, &notaexerc);
	notatotal = notaprova + notaexerc;
	
	if(notatotal >=60)
	{
		if(frequenciafinal >= frequencia*0.75) {
			printf("Aprovado");
		} else {
			printf("Reprovado!");
		}
	} else if(notatotal <60) {
		if(frequenciafinal >= frequencia*0.75) {
			printf("Sera necessario fazer o exame de reavaliacao!");
		} else {
			printf("Reprovado!");
		}
	} else {
		printf("Reprovado!");
	}
	
	
	
	return 0;
}
