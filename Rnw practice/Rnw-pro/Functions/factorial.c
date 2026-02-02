#include <stdio.h>

void factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %d", fact);
}

int main() {
    int n;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    factorial(n);
    return 0;
}
