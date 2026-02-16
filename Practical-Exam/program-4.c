#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Square of elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");

    return 0;
}