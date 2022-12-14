#include <iostream>

int main(int argc, char **argv) {

    char name[12];
    int amount = 0, age = 0;

    printf("\nEnter, respectively,  your name and age: ");
    scanf("%s %d", name, &age);

    printf("\nHow many times do you want to repeat your information?: ");
    scanf("%d", &amount);

    printf("\n================================================================\n\n");
    printf("\nNow, let's repeat your name(%s) and age(%d) %d times!\n\n", name, age, amount);
    for (int i = 0; i < amount; i++) {
        printf("\nNAME: %s || AGE: %d\n", name, age);
    }
    printf("\n\n================================================================\n");
    return 0;
}