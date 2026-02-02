#include <stdio.h>

void simpleInterest(float p, float r, float t) {
    float si = (p * r * t) / 100;
    printf("Simple Interest = %.2f", si);
}

int main() {
    float p, r, t;
    printf("Enter a Number for p , r , t:- ");
    scanf("%f %f %f", &p, &r, &t);
    simpleInterest(p, r, t);
    return 0;
}
