#include <iostream>

int main(int argc, char** argv) {

    float num;
    do {
        printf("\nEnter a number: ");
        scanf("%f", &num);
        printf("\nYour number is: %.1f", num);
    } while(num < 100);

    return 0;
}