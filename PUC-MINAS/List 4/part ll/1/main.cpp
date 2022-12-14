#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

//primeira forma:
 void forbin(int n) {
 	if(n==0) {
 		printf("%d", n);
	 } else {
	 	forbin(n/2);
	 	printf("%d", n%2);
	 }
 } 
	
//segunda forma: 
long transforbin(int decimal){

	long binario = 0;
    int r, t = 1;

    while (decimal!=0){
        r = decimal % 2;
        decimal = decimal / 2;
        binario = binario + r*t;
        t = t * 10;
    }
    return binario;
}

int main(){
    int n, binariofinal;
    
    printf("Digite um Decimal:\n");
    scanf("%d", &n);
    
    binariofinal = transforbin(n);
    
    printf("O decimal %d em binario equivale a: %ld\n", n, binariofinal);
    return 0;
}
