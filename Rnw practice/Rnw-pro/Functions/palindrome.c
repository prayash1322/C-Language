#include <stdio.h>

void checkPalindrome(int n) {
    int rev = 0, temp = n, r;

    while (temp > 0) {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }

    if (rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

int main() {
    int n;
    printf("Enter a Number:- ");
    scanf("%d", &n);
    checkPalindrome(n);
    return 0;
}
