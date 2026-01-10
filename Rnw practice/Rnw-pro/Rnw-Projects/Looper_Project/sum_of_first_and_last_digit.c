#include <stdio.h>

int main()
{
    int num, first, end;
    printf("Enter any number: ");
    scanf("%d", &num);
    end = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }

    first = num;
    printf("Sum of first and end digit = %d", first + end);
    return 0;
}