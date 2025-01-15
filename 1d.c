#include <stdio.h>

void readElements(int arr[], int n);
void displayOddElements(int arr[], int n);
int countEvenElements(int arr[], int n);
void displayReverse(int arr[], int n);
int sumOfArray(int arr[], int n);
int findMaximum(int arr[], int n);
int findMinimum(int arr[], int n);

int main() {
    int n, choice;
    int sum, evenCount, max, min;

    // Prompt user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    do {
        printf("\nMenu:\n");
        printf("1. Insert elements\n");
        printf("2. Display odd elements\n");
        printf("3. Count even elements\n");
        printf("4. Display array in reverse order\n");
        printf("5. Find sum of array elements\n");
        printf("6. Find maximum element\n");
        printf("7. Find minimum element\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                readElements(arr, n);
                break;
            case 2:
                displayOddElements(arr, n);
                break;
            case 3:
                evenCount = countEvenElements(arr, n);
                printf("Number of even elements: %d\n", evenCount);
                break;
            case 4:
                displayReverse(arr, n);
                break;
            case 5:
                sum = sumOfArray(arr, n);
                printf("Sum of the array elements: %d\n", sum);
                break;
            case 6:
                max = findMaximum(arr, n);
                printf("Maximum element in the array: %d\n", max);
                break;
            case 7:
                min = findMinimum(arr, n);
                printf("Minimum element in the array: %d\n", min);
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

void readElements(int arr[], int n) {
    int i;
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayOddElements(int arr[], int n) {
    int i;
    printf("Odd elements in the array are: \n");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int countEvenElements(int arr[], int n) {
    int i, count = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

void displayReverse(int arr[], int n) {
    int i;
    printf("Array in reverse order: \n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumOfArray(int arr[], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int findMaximum(int arr[], int n) {
    int i, max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMinimum(int arr[], int n) {
    int i, min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}