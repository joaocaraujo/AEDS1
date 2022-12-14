#include <iostream>

int main(int argc, char **argv) {

    int num;

   do {
    printf("\nEnter a integer number even to write: ");
    scanf("%d", &num);
    if (num%2 == 0){
        printf("\nIntroduction to Computing II is a piece of cake!\n");
    }
   } while (num%2 == 0);

    return 0;
}