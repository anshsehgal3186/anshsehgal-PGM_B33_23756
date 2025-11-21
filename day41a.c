#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);   // or use fgets(str,100,stdin);

    while (str[count] != '\0') {   // count until null character
        count++;
    }

    printf("Number of characters = %d", count);

    return 0;
}
