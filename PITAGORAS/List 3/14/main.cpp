#include <iostream>

int main(int argc, char **argv) {

    int protester = 0, policemen = 0;

    printf("Enter the expected amount of protesters: ");
    scanf("%d", &protester);

    if (protester <= 1054) {
        policemen = 1;
    } else {
        policemen = protester/1054; 
        if (policemen%protester != 0) {
            policemen++;
        } else {
            policemen = policemen;
        }
    }

    printf("For %d protesters will need %d cops!", protester, policemen);


    return 0;
}