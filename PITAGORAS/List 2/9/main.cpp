#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num >= 0) {
		printf("\nThe number %d is positive!", num);
	} else {
		printf("\nThe number %d is negative!", num);
	}
	return 0;
}
