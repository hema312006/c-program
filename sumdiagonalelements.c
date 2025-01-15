#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);

            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

 
    printf("\nMatrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of primary diagonal elements: %d\n", sum);

    return 0;
}
