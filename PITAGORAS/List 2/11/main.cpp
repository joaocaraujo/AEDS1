#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char name[12];
	char gender;
	float salary;
	int age;
	
	printf("\nEnter your name: ");
	scanf("%s", name);
	getchar();

	printf("\nEnter your gender (M or F): ");
	scanf("%c", &gender);
	getchar();

	printf("\nEnter your age: ");
	scanf("%d", &age);
	getchar();

	printf("\nEnter your salary: ");
	scanf("%f", &salary);
	getchar();
	
	float differencemasc = salary - 2500;
	float differencefem = salary - 1500;
	
	if (gender = 'M' && salary>=2500) {
		printf("\n%s, your is greater than or equal to the average salary of the company.\nYour salary is %.2f difference from the general average of R$ 2,500.00!", name, differencemasc);
	} else if (gender = 'M' && salary<2500) {
		printf("\n%s, your salary is less than the company's average salary.\nYour salary is %.2f different from the general average of R$ 2,500.00!", name, differencemasc);
	} else if  (gender = 'F' && salary>=1500) {
		printf("\n%s, your is greater than or equal to the average salary of the company.\nYour salary is %.2f difference from the general average of R$ 1,500.00!", name, differencefem);
	} else if (gender = 'F' && salary<1500) {
		printf("\n%s, your salary is less than the company's average salary.\nYour salary is %.2f different from the general average of R$ 1,500.00!", name, differencefem);
	}
	return 0;
}
