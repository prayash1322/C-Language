#include <stdio.h>

void add(int a, int b)
{
    int sum = a + b;
    printf("The sum is = %d", sum);
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    add(x, y);
    return 0;
}