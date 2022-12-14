#include <iostream>

int main(int argc, char **argv) {

    float num = 0, min, max, aux = 1;

    while (aux <= 11)
    {
        printf("Enter the %.0f° number: ", aux);
        scanf("%f", &num);

        if (aux == 1) {
            max = num;
            min = num;
        }
        if (num > max) {
            max = num;
        } else if (num < min) {
            min = num;
        }

        aux++;
    }
    

    printf("\n=======================\nIts maximum value is %.1f.\nIts minimum value is %.1f.\n=======================\n", max, min);

    return 0;
}