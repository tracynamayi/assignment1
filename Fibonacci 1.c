#include <stdio.h>

void generateFibonacci(int n) {
    int a = 0, b = 1, nextTerm;

    printf("Fibonacci Series up to %d: %d, %d", n, a, b);

    for (int i = 2; i < n; i++) {
        nextTerm = a + b;
        printf(", %d", nextTerm);
        a = b;
        b = nextTerm;
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
