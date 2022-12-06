#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, n, count = 0;
	
	for (int i = 0; i<=10; i++)
	{
		printf("Digite o %d numero: ", i);
		scanf("%d", &n);
		
		if(n<0){
			count++;
		}
		
	}
	
	printf("Foram digitados %d numeros negativos!", count);
	
	return 0;
}
