#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x, y;
	
	printf("Digite um inteiro: ");
	scanf("%d", &y);
	
	for (x=1; x<=y; x++)
	{
		printf("%d\n", x);
	}
	return 0;
}
