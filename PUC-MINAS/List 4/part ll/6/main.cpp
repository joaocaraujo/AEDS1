#include <iostream>
#include <math.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x1,x2,y1,y2;
	float total;

	LOOP:
    printf("Digite o X1 e Y1 (caso queira parar o progragama, digite 0 nas coordenadas):\n");
	scanf("%d",&x1);
	scanf("%d",&y1);
    printf("Digite o X2 e Y2:\n");
	scanf("%d",&x2);
	scanf("%d",&y2);

	while(x1 != 0 || x2 != 0 || y1 != 0 || y2 != 0){
		total = (float)sqrt(pow((x2-x1),2) + pow((y2-y1),2));

		printf("A distancia entre (%d,%d) e (%d,%d) e igual a %.2f\n",x1,y1,x2,y2,total);
		goto LOOP;
	}

		return 0;
}
