#include <iostream>

int main(int argc, char** argv) {

    float size = 0, final = 0, out;
    int i, cont = 0;

    printf("Enter size of bar: ");
    scanf("%f", &size);
    float sizeinitial = size;

    do {
    size -= 3.5;
    printf("\n%.2f", size);
    cont ++;
    } while (size > 3.50);

    printf("\nWith %.2f meters of bar, we get %d pieces and %.2f meters are left over.", sizeinitial, cont, size);

return 0;
}