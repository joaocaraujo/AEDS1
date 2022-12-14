#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int primeiro, diferenca,n,i,final;

	printf("====--PROGRESSAO ARITIMETICA--====\n\n");
    printf("Digite o primeiro termo e a razao da progressao: \n");
    scanf("%d %d", &primeiro, &diferenca);

    printf("\nDigite o termo N de vezes que a progressao seguira: \n");
    scanf("%d", &n);


    printf("%d termos na sequencia solicitada, sao:\n", n);
    for(i = 1; i <= n; i++){
        final = primeiro + (i - 1)*diferenca;
        printf("%d: %d\n", i, final);
    }
    
return 0;
}
