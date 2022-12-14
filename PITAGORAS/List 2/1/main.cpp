#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int total;
	
	printf("Enter the total amount of tickets: ");
	scanf("%d", &total);
	
	int	principal = (total/9)*7;
	int	visitor = (((total/9)*2)/4)*3;
	int	courtesy = (((total/9)*2)/4)*1;
	
	printf("\n%d tickets will be split as follows:\nPrincipal: %d\nVisitor: %d\nCourtesy: %d", total, principal, visitor, courtesy);
	return 0;
}
