#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
double n1 = 100, fat = 1, total = 0, calculo;

for(int i = 0; i <= 20; i++){
    if(i == 0){
        fat = 1;
    }else{
        fat = fat * i;
    }
    
    calculo = n1 / fat;
    total = total + calculo;
    n1 = n1 - 1;
}

printf("O somatorio da sequencia e: %0.3lf", total);

return 0;
	
	return 0;
}
