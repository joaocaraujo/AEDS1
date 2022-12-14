#include <iostream>

int main(int argc, char **argv) {

    int num = 0, i = 1; 

    printf("Enter the number of times you want to write the sentence: ");
    scanf("%d", &num);

    for (i; i <= num; i++) {
        printf("\nThe Algorithms test is papaya with sugar!\n");
    }

    printf("\n*The sentence was write %d times!\n\n", i-1);

    return 0;
}