#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    gets(str);   // or use fgets(str,100,stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // Convert to uppercase
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}
