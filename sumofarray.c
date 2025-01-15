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

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
