#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        
        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }
        printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
    }

    return 0;
}