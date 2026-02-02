#include <stdio.h>

void checkPrime(int n) {
    int i, flag = 1;

    if (n <= 1) flag = 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Prime");
    else
        printf("Not Prime");
}

int main() {
    int n;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    checkPrime(n);
    return 0;
}
