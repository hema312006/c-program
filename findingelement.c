#include <stdio.h>

void searchElement(int arr[], int size, int k) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == k) {
            printf("Element %d found at position %d\n", k, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array\n", k);
    }
}

int main() {
    int size, k;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &k);

    searchElement(array, size, k);

    return 0;
}
