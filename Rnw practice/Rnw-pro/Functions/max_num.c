#include <stdio.h>

void max(int a, int b) {
    if (a > b)
        printf("Maximum = %d", a);
    else
        printf("Maximum = %d", b);
}

int main() {
    int x, y;
    printf("Enter two numbers:- ");
    scanf("%d %d", &x, &y);
    max(x, y);
    return 0;
}
