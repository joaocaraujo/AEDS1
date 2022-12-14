// 17. Faça um algoritmo em C++ que, em um array, leia e imprima 12 números digitados pelo usuário.
// 17. Write an algorithm in C++ that, in an array, reads and prints 12 numbers entered by the user.

#include <iostream>

int main(int argc, char** argv) {

    int i = 0, aux = 1, array[13];

    for (int i = 1; i < 13; i++) {
        printf("Enter the %d° number: ", i);
        scanf("%d", &array[i]);
    }

    for (int x = 1; x < 13; x++) {
        printf("\n%d° number: %d", x, array[aux]);
        aux++;
    }

    return 0;
}