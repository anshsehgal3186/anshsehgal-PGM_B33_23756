#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store the original number

    // reverse the number
    while (num > 0) {
        digit = num % 10;             // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;               // remove last digit
    }

    // check palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
