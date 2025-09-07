#include <stdio.h>

int main() {
    float x, y, z;
    
    printf("Enter a first number: ");
    scanf("%f", &x);
    printf("Enter a second number: ");
    scanf("%f", &y);
    printf("Enter a third number: ");
    scanf("%f", &z);

    if (x+y < z || x+z < y || y+z < x) {
        printf("Triangle with sides: ");
        printf("%.6g %.6g %.6g", x, y, z); 
        printf(" is impossible");
    }
    else {
        printf("Triangle with sides: ");
        printf("%.6g %.6g %.6g", x, y, z);
        printf(" is possible");
    }

    return 0;
}
