#include <stdio.h>

int main()
{
    int n;
    int a[10];

    printf("Enter the array's size: ");
    scanf("%d", &n);

    printf("\nEnter the array's element: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nNegative elements from a array are: ");

    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
            neg = 1;
        }
    }

    if (!neg)
    {
        printf("No Negative Numbers Found");
    }

    return 0;
}