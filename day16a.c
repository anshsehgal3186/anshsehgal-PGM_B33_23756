#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    printf("Binary: ");
    // Loop from the highest bit (31) down to 0
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;  // extract the ith bit
        if (bit) {                 // print only after the first 1 is found
            for (int j = i; j >= 0; j--) {
                printf("%d", (num >> j) & 1);
            }
            break;
        }
    }
    printf("\n");

    return 0;
}
