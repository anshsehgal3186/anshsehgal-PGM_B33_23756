#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // to store frequency of each digit (0–9)
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // handle negative numbers
    if (num < 0)
        num = -num;

    // count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // find digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most times is %d (appears %d times)\n", maxDigit, maxCount);

    return 0;
}
