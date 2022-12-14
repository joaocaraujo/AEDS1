#include <iostream>

int main(int argc, char **argv) {

    float num, average, sum;
    int i;

    for (i = 1; i <= 11; i++) {
        printf("Enter the %d number: ", i);
        scanf("%f", &num);
        sum += num;
    }

    average = sum/i;

    if(average = 10) {
        printf("\nThe average equals ten!\n");
    } else if (average > 10) {
        printf("\nThe average is greater than ten!\n");
    } else {
        printf("\nThe average is less than ten!\n");
    }
    
    return 0;
}