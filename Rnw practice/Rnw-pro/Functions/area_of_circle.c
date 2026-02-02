#include <stdio.h>

void areaCircle(float r) {
    printf("Area = %.2f", 3.14 * r * r);
}

int main() {
    float r;
    printf("Enter a Number:- ");
    scanf("%f", &r);
    areaCircle(r);
    return 0;
}
