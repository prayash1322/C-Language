#include <stdio.h>

void squareCube(int n) {
    printf("Square = %d\n", n * n);
    printf("Cube = %d", n * n * n);
}

int main() {
    int n;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    squareCube(n);
    return 0;
}
