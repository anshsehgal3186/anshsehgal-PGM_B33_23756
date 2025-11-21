#include <stdio.h>

int main() {
    char str[100];
    int left = 0, right = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);   // or use fgets(str,100,stdin)

    // Find string length manually
    while (str[right] != '\0') {
        right++;
    }
    right--;  // move to last valid character

    // Check palindrome
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.");
    else
        printf("The string is NOT a palindrome.");

    return 0;
}
