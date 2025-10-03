#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0; // flag to check if there is any odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;   // extract last digit
        if (digit % 2 == 1) {  // check if odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;  // remove last digit
    }

    if (hasOdd) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
