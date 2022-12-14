#include <iostream>

int main(int argc, char** argv) {

    float num1, num2, sum, stop;
    do {
        printf("\nEnter two numbers: ");
        scanf("%f %f", &num1, &num2);
        sum = num1 + num2;
        printf("\n=================================\nThe sum of %.2f and %.2f is %.2f", num1, num2, sum);
        printf("\n=================================\nDo you wish to continue? (1 = Yes | 0 = No) ");
        scanf("%d", &stop);
    } while (stop != 0);

    return 0;
}