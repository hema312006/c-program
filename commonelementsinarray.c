#include <stdio.h>

void findCommonElements(int a[], int b[], int sizeA, int sizeB) {
    printf("Common elements in both arrays are: ");
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;  // 
            }
        }
    }
    printf("\n");
}

int main() {
    int sizeA, sizeB;
    
    printf("Enter the number of elements in array A: ");
    scanf("%d", &sizeA);
    int arrayA[sizeA];
    printf("Enter the elements of array A:\n");
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &arrayA[i]);
    }

    printf("Enter the number of elements in array B: ");
    scanf("%d", &sizeB);
    int arrayB[sizeB];
    printf("Enter the elements of array B:\n");
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &arrayB[i]);
    }

    findCommonElements(arrayA, arrayB, sizeA, sizeB);

    return 0;
}
