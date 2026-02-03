#include <stdio.h>

void makeCoffee(int sugar) {
    printf("Coffee is ready with %d spoons of sugar!\n", sugar);
}

int main() {
    int sugar;
    printf("Enter number of sugar spoons: ");
    scanf("%d", &sugar);
    makeCoffee(sugar);
    return 0;
}