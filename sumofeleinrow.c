#include <stdio.h>

void readMatrix(int matrix[][10], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printRowSums(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of elements in row %d is: %d\n", i + 1, sum);
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];
    readMatrix(matrix, rows, cols);

    printRowSums(matrix, rows, cols);

    return 0;
}
