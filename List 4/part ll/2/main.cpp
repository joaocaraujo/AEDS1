#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  
  int num  = 0, num1 = 0, aux = 0, soma = 0, cont = 0;
  double med = 0.0, defaultdesvio = 0.0, desvio = 0.0, desviodois = 0.0;

  printf("\nDigite o primeiro numero: ");
  scanf("%d", &num1);
  
  do {
    printf("\nDigite o numero: ");
    scanf("%d", &num);
    aux = aux + num; 
    cont++;
  } while (num != 0);

  soma = num1 + aux;
  med = (double)soma/((double)cont);
  desvio = soma + pow(num1 - med, 2);
  desviodois = desvio/cont;
  defaultdesvio = sqrt(desviodois);
  
  printf("\n==---------------------==\n");
  printf("ESTATISTICAS: \n");
  	printf("\nSoma total: %d\n", soma);
	printf("Media aritimetica: %0.1lf\n", med);
 	printf("Desvio padrao: %.1lf", defaultdesvio);
  printf("\n==---------------------==\n");
  return 0;
}
