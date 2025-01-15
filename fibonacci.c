#include <stdio.h>

void printFibonacci(int limit) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: %d, %d", a, b);
    next = a + b;

    while (next <= limit) {
        printf(", %d", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
}

int main() {
    int limit;
    printf("Enter the limit for the Fibonacci series: ");
    scanf("%d", &limit);

    printFibonacci(limit);

    return 0;
}
