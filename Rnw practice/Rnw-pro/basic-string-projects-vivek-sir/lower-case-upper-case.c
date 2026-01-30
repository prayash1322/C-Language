#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= 65 && c <= 90)
        printf("Uppercase letter");
    else if (c >= 97 && c <= 122)
        printf("Lowercase letter");
    else
        printf("Not an alphabet");

    return 0;
}