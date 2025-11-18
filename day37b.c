#include <stdio.h>

int main() {
    int a[100][100], t[100][100];
    int rows, cols;

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

    // Find transpose
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            t[j][i] = a[i][j];   // Swap rows and columns
        }
    }

    // Print transpose
    printf("Transpose of the matrix:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
