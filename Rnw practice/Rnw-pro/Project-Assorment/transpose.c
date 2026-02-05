#include <stdio.h>

int main() {
    int rows, cols;
    int arr[10][10];

    printf("Enter the array's row & column size: ");
    scanf("%d %d", &rows, &cols);

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe transpose matrix of an array:\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}