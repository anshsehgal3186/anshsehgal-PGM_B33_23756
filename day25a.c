#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) { // starting number of each row
        for (int j = i; j <= rows; j++) { // print numbers up to 5
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
