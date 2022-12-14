#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float num1, num2, num3, num4, num5, num6;
	
	printf("Ente Antonio's numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	printf("Ente Fabiana's numbers: ");
	scanf("%f %f %f", &num4, &num5, &num6);
	
	float sumA = num1 + num2 + num3;
	float sumF = num4 + num5 + num6;
	
	float averageA = sumA/3;
	float averageF = sumF/3;
	float sumAverage = averageA + averageF;
	float averageTotal = sumAverage/2;
	
	printf("\n\n==========================\nFabiana's average: %.2f\nAntonio's average: %.2f\n\nSum of averages: %.2f\n\nAverage of averages: %.2f", averageF, averageA, sumAverage, averageTotal);
	
	return 0;
}
