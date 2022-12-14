#include <iostream>

int main(int argc, char** argv) {

    float num = 0, newnum = 0;

    for(int i = 1; i < 13; i++) {
        printf("\n\nEnter the %d number: ", i);
        scanf("%f", &num);
        newnum += num;
    }
    printf("\nThe total sum of the 12 numbers is %.1f!", newnum);
    return 0;
}