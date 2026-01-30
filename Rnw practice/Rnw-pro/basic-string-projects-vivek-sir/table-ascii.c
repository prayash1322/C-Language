#include <stdio.h>

int main()
{
    printf("ASCII Table is :- \n\n");
    for (int i = 33; i <= 126; i++)
    {
        printf("ASCII number :- %d = ASCII Value:-  %c\n", i, i);
    }

    return 0;
}