#include <stdio.h>

void max3(int a, int b, int c) {
    if (a > b && a > c)
        printf("Maximum = %d", a);
    else if (b > c)
        printf("Maximum = %d", b);
    else
        printf("Maximum = %d", c);
}

int main() {
    int x, y, z;
    printf("Enter any three number:- ");
    scanf("%d %d %d", &x, &y, &z);
    max3(x, y, z);
    return 0;
}
