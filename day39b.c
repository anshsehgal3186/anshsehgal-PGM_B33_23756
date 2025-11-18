#include <stdio.h>

int main() {
    int a[100][100];
    int n, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal (i == j)
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}
