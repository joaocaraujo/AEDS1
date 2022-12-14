#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float time, distance;
	
	printf("Enter the distance (KM/h): ");
	scanf("%f", &distance);
	
	time = (distance/90)*60;
	float hour = time/60;
	printf("\nThe bus will travel the %.1f KM in %.0f minutes (%.2f hours)", distance, time, hour);
	
	return 0;
}
