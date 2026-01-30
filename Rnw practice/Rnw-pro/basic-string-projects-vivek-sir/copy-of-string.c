#include <stdio.h>

int main()
{
    char a[50], cp[50];
    int i = 0;

    printf("Enter a string:- ");
    scanf("%s", a);

    while (a[i] != '\0')
    {
        cp[i] = a[i];
        i++;
    }

    cp[i] = '\0';

    printf("Copied string is :- %s", cp);

    return 0;
}