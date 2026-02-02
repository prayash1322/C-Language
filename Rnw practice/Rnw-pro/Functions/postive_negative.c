#include <stdio.h>

void checkNumber(int n) {
    if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");
}

int main() {
    int n;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    checkNumber(n);
    return 0;
}
