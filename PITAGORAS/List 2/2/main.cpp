#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float num = 0;
	
	printf("Enter a number: ");
	scanf("%f", &num);
	
	if(num >50){
		printf("%.0f is greater than fifty!", num);
	} else {
		printf("%.0f is less than or equal to fifty!", num);
	}
	
	return 0;
}
