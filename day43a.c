#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, 100, stdin);

    // Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Print in reverse
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
