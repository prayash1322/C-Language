#include <stdio.h>

int main() {
    int rows, cols;
    int arr[10][10];
    int row, col;
    int rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);

    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);
    for (int j = 0; j < cols; j++) {
        printf("%d ", arr[row][j]);
        rowSum += arr[row][j];
    }
    printf("\nThe sum of row %d: %d\n", row, rowSum);

    printf("\nEnter column number: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);
    for (int i = 0; i < rows; i++) {
        printf("%d ", arr[i][col]);
        colSum += arr[i][col];
    }
    printf("\nThe sum of column %d: %d\n", col, colSum);

    return 0;
}