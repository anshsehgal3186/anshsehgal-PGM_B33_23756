#include <stdio.h>

int main() {
    int n = 4; // number of rows in the upper half
    int i, j, space, stars;

    // Upper half
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++) {
            printf(" ");
        }
        for (stars = 1; stars <= (2 * i - 1); stars++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--) {
            printf(" ");
        }
        for (stars = 1; stars <= (2 * i - 1); stars++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
