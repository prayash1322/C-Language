#include <stdio.h>

int main()
{
    int i, j;
    for (i = 10; i >= 6; i--)
    {
        for (j = 0; j < 11 - i; j++)
        {
            printf("%d ", i * i);
        }
        printf("\n");
    }
    return 0;
}