#include <stdio.h>

int reverse(int num)
{
    int a, b, c;
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;
    return c * 100 + b * 10 + a;
}

int main()
{
    int num;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    printf("Reversed number: %d\n", reverse(num));

    return 0;
}