#include <stdio.h>

float calculateDiscount(int billAmount) {
    if (billAmount > 500) {
        return billAmount * 0.10f;
    }
    return 0;
}

int main() {
    int billAmount;
    printf("Enter bill amount: ");
    scanf("%d", &billAmount);
    float discount = calculateDiscount(billAmount);
    printf("Discount: %.2f\n", discount);
    return 0;
}
