#include <stdio.h>

void displayArrayInReverse(int arr[], int size) {
    printf("Array elements in reverse order are: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    displayArrayInReverse(array, size);

    return 0;
}
