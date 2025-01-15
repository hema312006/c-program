#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int evenCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            evenCount++;
        }
    }

    printf("The count of even elements in the array is: %d\n", evenCount);

    return 0;
}
