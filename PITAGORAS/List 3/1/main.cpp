#include <iostream>

int main(int argc, char** argv) {
	
    int i = 0, cont;
    float num = 0;

    printf("Enter a number: ");
    scanf("%f", &num);

    for(num; num > 2; i++) {
        num = num - (num * 0.10);
        printf("\n->%.2f", num);
    }
    printf("\n\nNow the number is: %.2f!\n->This operation was performed %d times.", num, i);

	return 0;
}