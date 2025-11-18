#include <stdio.h>

int main() {
    int a[100][100];
    int rows, cols;
    int rowSum[100];

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate row sums
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += a[i][j];
        }
        rowSum[i] = sum;  // store sum of row i
    }

    // Print row sums
    printf("Row-wise sum array:\n");
    for(int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
