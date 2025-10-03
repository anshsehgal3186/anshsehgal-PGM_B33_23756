#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digits = 0, sum = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // count number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num; // reset temp

    // calculate sum of digits^digits
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // check Armstrong
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
