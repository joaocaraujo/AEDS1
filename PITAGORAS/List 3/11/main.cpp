#include <iostream>

int main( int argc, char **argv ) {

    int num, sum = 0;

    printf("\n================WELCOME================\n*Enter a even number to stop program*\n\n");
    do {
        printf("\nEnter a integer number: ");
        scanf("%d", &num);
        sum += num;
    }while (num%2 == 1);

    if (sum*2 < 100) {
        printf("\nTwice the sum of the entered numbers is less than one hundred!\n");
    } else if (sum*2 > 100 && sum*2 < 500) {
        printf("\nTwice the sum of the entered numbers is between one hundred and five hundred!\n");
    } else {
        printf("\nTwice the sum of the entered numbers is not in the range, nor below one hundred, it is greater than five hundred!\n");
    }
    

    return 0;
}