#include <iostream>

int main(int argc, char** argv) {

    float num;

    printf("\n\n===============================\nEnter a negative number to stop program!\n===============================\n");
    do {
        printf("\n\nEnter a number: ");
        scanf("%f", &num);
        float end = num/2;
        printf("\n======================\nHalf part of %.2f is %.2f\n======================\n", num, end);
    } while (num >= 0);

    return 0;
}