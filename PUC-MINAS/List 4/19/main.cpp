#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int alunos, i, acount = 0, pcount = 0, alunos2, pctcount = 0;
	char letra, presenca;
	double codigo, faltas;
	
	for(i = 1; i <= 14; i++){
	    printf("Qual a letra de identificacao da turma %d? (ex: A,B,C,D...) \n", i);
	    scanf(" %c", &letra);
	    printf("Quantos alunos tem nessa turma? \n");
	    scanf("%d", &alunos);
	    alunos2 = alunos;
	
	    for(;alunos > 0; alunos--){
	        printf("Digite o codigo de registro do aluno:\n");
	        scanf("%lf", &codigo);
	        printf("Digite o status do aluno-> A ou a para 'Ausente' || P ou p para 'Presente':\n");
	        scanf(" %c", &presenca);
	        
	        if(presenca == 'A' || presenca == 'a'){
	            acount++;
	        }
	        else if(presenca == 'P' || presenca == 'p'){
	            pcount++;
	        }
	        else{
	            printf("Digite um caracter valido: P, p, A ou a.\n");
	        }
	    }
	    faltas = 100 * acount / alunos2;
	    printf("A tumra %c teve %0.1lf%% de faltas!\n", letra, faltas);
	    if(faltas > 5){
	        pctcount++;
	    }
	    acount = 0;
	    pcount = 0;
	}
	printf("O numero de turmas com mais de 5%% de faltas e: %d\n", pctcount);
	
	return 0;
}
