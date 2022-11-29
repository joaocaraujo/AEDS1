#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int qtd, novo = 0, antigo = 1;

printf("Digite um numero:\n");
scanf("%d", &qtd);


if(qtd == 0){
    novo = 1;
}

for(qtd > 0; qtd--;){
    if(novo == 0){
        novo = 1;
    }
    else{
        novo = novo + antigo;
        antigo = novo - antigo;
    }
    printf("--\n");
    printf("%d\n", novo);
}

return 0;
}

