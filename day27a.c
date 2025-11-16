#include <stdio.h>

int main() {
    int n = 5;  // number of lines in the upper half
    int i, j, k;

    // Upper half (increasing part)
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (decreasing part)
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
