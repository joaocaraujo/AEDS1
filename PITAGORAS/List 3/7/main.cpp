#include <iostream>

int main(int argc, char **argv) {

    float num = 0, sum = 0, average = 0;
    int i = 1, amount = 0;

    printf("\nEnter the amount of numbers you want to average: ");
    scanf("%d", &amount);

    for (i; i < amount+1; i++) {
        printf("\nEnter the %d value: ", i);
        scanf("%f", &num);
        sum += num;
    }
    average = sum / amount;

    printf("\n\n============\nAverage: %.1f\n============\n\n", average);

    return 0;
}