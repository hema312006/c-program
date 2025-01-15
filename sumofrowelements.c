#include <stdio.h>

int main() {
    int rows, cols;

    // Get the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix and an array to store row sums
    int matrix[rows][cols], rowSum[rows];

    // Initialize row sums to 0
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }

    // Get the elements of the matrix from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; // Add element to the row sum
        }
    }

    // Print the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the sum of elements in each row
    printf("\nSum of elements in each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
