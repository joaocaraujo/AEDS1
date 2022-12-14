#include <stdio.h>

int main(){

int numeroprodutos,i,lucbaixo = 0, lucmedio = 0, lucalto = 0;
double codigo, comprapreco, vendapreco, lucro = 0, precototal = 0, compratotal = 0, vendatotal = 0; 

for(;;){
    printf("Digite a quantidade de produtos ou digite 0 para sair do programa:\n");
    scanf("%d", &numeroprodutos);

    if(numeroprodutos == 0){
        printf("Programa finalizado!\n");
        goto LEAVE;
    }

    for(i = 0; i < numeroprodutos; i++){
        printf("Digite o codigo do produto, preco de compra e preco de venda:\n");
        scanf("%lf %lf %lf", &codigo, &compratotal, &vendatotal);

        lucro = vendatotal - compratotal;

        if(lucro < compratotal * 0.1){
            lucbaixo++;
        }
        else if(lucro >= compratotal * 0.1 && lucro <= compratotal * 0.2){
            lucmedio++;
        }
        else if(lucro > compratotal * 0.2){
            lucalto++;
        }
        precototal = precototal + lucro;
        compratotal = compratotal + comprapreco;
        vendatotal = vendatotal + vendapreco;

    }
    printf(" Menor que 10%% de lucro: %d\n Lucro entre 10%% e 20%%: %d\n Mais de 20%% de lucro: %d\n", lucbaixo, lucmedio, lucalto);
    printf("====--------------------------------------------====\n");
    printf("-Lucro total: %0.1lf\n-Considerando o preco de compra total: %0.1lf\n-Preco total de venda: %0.1lf\n", precototal, compratotal, vendatotal);
}

LEAVE:

return 0;
}
