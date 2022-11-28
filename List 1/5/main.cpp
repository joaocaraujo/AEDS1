#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n1, n2, n3, p1, p2, p3, pondera, total, peso;
	
	printf ("Digite as 3 notas do semestre: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf ("Digite respectivamente o peso dessas 3 notas: \n");
	scanf("%d %d %d", &p1, &p2, &p3);
	
	pondera= (n1*p1) + (n2*p2) + (n3*p3);
	peso= p1+p2+p3;
	total= pondera/peso;
	
	printf("A media ponderada de %d, %d e %d e igual a: %d", n1, n2, n3, total);
	
	
	return 0;
}
