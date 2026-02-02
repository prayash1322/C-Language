#include <stdio.h>

void checkArmstrong(int n) {
    int sum = 0, temp = n, r;

    while (temp > 0) {
        r = temp % 10;
        sum = sum + (r * r * r);
        temp = temp / 10;
    }

    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

int main() {
    int n;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    checkArmstrong(n);
    return 0;
}
