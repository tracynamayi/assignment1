#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, digitCount = 0, sum = 0;

    // Count the number of digits in the given number
    while (num != 0) {
        num /= 10;
        digitCount++;
    }

    // Reset num to the original value
    num = originalNum;

    // Calculate the sum of each digit raised to the power of the digit count
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
    }

    return originalNum == sum;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
