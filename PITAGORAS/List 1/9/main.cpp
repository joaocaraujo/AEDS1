#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int bottles, crate;
	
	printf("Enter how many soda bottles you have: ");
	scanf("%d", &bottles);
	
	if (bottles%24 == 0) {
		crate = bottles/24;
	} else if (bottles%24 <= 24 || bottles%24 > 0) {
		crate = bottles/24;
		crate++;
	} else {
		int aux = (bottles%24)/24;
		crate = bottles/24 + aux;
	}
		
	printf("\nTo store %d bottles, you need %d crates with 24 compartments each\n", bottles, crate);
	return 0;
}
