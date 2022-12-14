#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[10];
	int n1 = 0, n2 = 0, n3 = 0; 
	
	printf("Enter the student name: ");
	scanf("%s", &name);
	
	printf("Enter this student's three grades: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	int total = n1+n2+n3;
	
	int	percent = 1000/100 * total/100;
	
	printf("\n\n%s, your notes are:\nNote 1: %d points in 200\nNote 2: %d points in 300\nNote 3: %d points in 500\n\nTotal: %d points in 1000, with the average of %d%%", name, n1, n2, n3, total, percent);
	return 0;
}
