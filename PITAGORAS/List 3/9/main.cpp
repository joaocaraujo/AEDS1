#include <iostream>

int main(int argc, char **argv) {

    int num, square = 0;

    do {
        printf("\n\n================================================\n\n");
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num%2 == 0) {
            square = num * num;
            printf("\nThe square of %d is %d!", num, square);
        } else if (num%2 == 1) {
            printf("\nIt will not be possible to calculate the square of this number because it is odd!");
        } else {
            printf("\nERROR\n");
        }
    } while (num > 1);

    return 0;
}