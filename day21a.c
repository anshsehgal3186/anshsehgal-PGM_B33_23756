#include <stdio.h>

// Function to count digits
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Function to swap first and last digits
int swapFirstLast(int num) {
    int digits = countDigits(num);
    int power = 1;
    for (int i = 1; i < digits; i++) {
        power *= 10;  // 10^(digits-1)
    }

    int first = num / power;       // first digit
    int last = num % 10;           // last digit
    int middle = (num % power) / 10; // middle part

    int result = last * power + middle * 10 + first;
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int swapped = swapFirstLast(num);

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
