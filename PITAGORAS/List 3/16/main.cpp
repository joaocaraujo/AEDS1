#include <iostream>

int main(int argc, char **argv) {

    float smallerbase, largerbase, height, squaremeter;

    printf("Enter the smaller terrain base: ");
    scanf("%f", &smallerbase);

    printf("Enter largest terrain base: ");
    scanf("%f", &largerbase);

    printf("Enter the terrain height: ");
    scanf("%f", &height);
    
    squaremeter = ((smallerbase + largerbase)*height)/2;
    float squaremetermoney = squaremeter*22;

    printf("\n================================\n\nYour plot of %.0f square meters is worth %.2f real.\n\n================================\n", squaremeter, squaremetermoney);



    return 0;
}