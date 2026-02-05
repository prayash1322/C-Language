#include <stdio.h>

int main() {
    int row, cols , max;
    int a[50][50];

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];   

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("\nThe largest element is: %d", max);

    return 0;
}