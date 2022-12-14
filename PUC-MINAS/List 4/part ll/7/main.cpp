#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,maior,maior2,menor, i = 0, i2,dif;
	int array[99999];
	double cub = 0;
	
	for(;;){
	    printf("\nDigite dois numeros inteiros(para finalizar o programa digite 0 0):\n");
	    scanf("%d %d", &a, &b);
	
	    if(a == 0 && b == 0){
	        printf("\n**Algoritimo finalizado**\n");
	        goto END;
	    }
	
	    if(a > b){
	        maior = a;
	        menor = b;
	    }else{
	        maior = b;
	        menor = a;
	    }
	    dif = maior - menor;
	    for(; maior >= menor; maior--){
	        array[i] = maior;
	        if(maior % 2 == 0){
	            cub = cub + (maior * maior * maior);
	        }
	        i++;
	    }
	
	printf("\n==-O intervalo entre os numeros e--==\n");
	for(i2 = 0; i2 <= dif; i2++){
	    printf(" %d -> ", array[i2]);
	}
	printf("\n==================================\nA soma do cubo dos numeros pares no intervalo foi: %.1lf\n", cub);
	}
	
	END:
	return 0;
}
