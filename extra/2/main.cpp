#include <iostream>

/* Enunciado: ler salario fixo de um vendedor e o total de vendas mensal. Sabe-se que ele ganha 15% de comissão sobre venda.
Programa mostra o salario fixo, a comissão que ele ganhara e o salario final. */

float comissao (int salario, int qtdvendas) {
	float comissaofim;
	comissaofim = (salario*0.15) * qtdvendas;
	return comissaofim;
}

int main(int argc, char** argv) {
	float salario, salariofim, cf;
	int qtdvendas;
	
	printf("Digite seu salario fixo e a quantidade de vendas mensal: ");
	scanf("%f %d", &salario, &qtdvendas);
	
	cf = comissao(salario, qtdvendas);
	salariofim = cf + salario;
	
	printf ("\nSalario fixo: R$%.2f\nComissao: R$%.2f\nSalario final: R$%.2f", salario, cf, salariofim);
	
	return 0;
}
