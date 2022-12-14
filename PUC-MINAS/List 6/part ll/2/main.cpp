#include <iostream>

float somaTermos (int inicio, int diferenca, int n) {
	float s = 0, ultimo = 0;
	
	for (int i = 1; i <= n; i++) {
		ultimo = inicio + (i-1)*diferenca;
		s = (inicio + ultimo)*n/2.0;
	}
	
	return s;
}

int main(int argc, char** argv) {
		
	int inicio = 0, diferenca = 0, n = 0, s = 0;
	
	printf("Digite o primeiro termo e a diferenca entre os termos da progressao: ");
	scanf("%d %d", &inicio, &diferenca);
	
	printf("Digite a quantitade de termos da sequencia: ");
	scanf("%d", &n);
	
	s = somaTermos(inicio, diferenca, n);
	printf("A soma dos termos e: %.2lf", s);
		
	return 0;
}
