#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int cod=0, al=0, gs =0, ds=0;
	
	do {
		do {
		printf("\n==-CALC COMBUSTIVEL-==\n");
		printf("1.Alcool\n2.Gasolina\n3.Diesel\n4.Fim\n\n");
		printf("Digite o codigo do combustivel: ");
		scanf("%d", &cod);
	} while (cod<1 || cod>4);
	
		if (cod == 1) {
			printf("\nAlcool\n");
			al++;
		} else if (cod == 2) {
			printf("\nGasolina\n");
			gs++;
		} else if (cod == 3) {
			printf("\nDiesel\n");
			ds++;
		} else if (cod == 4){
			printf("\n==MUITO OBRIGADO==\n");
			printf("\nQuantidade de clientes que abasteceram com determinado combustivel: \n->Alcool = %d\n->Gasolina = %d\n->Diesel = %d\n", al, gs, ds);
		}
	} while (cod != 4);

	
	return 0;
}
