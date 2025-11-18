#include <stdio.h>

int main() {
    int a[100][100], b[100][100], c[100][100];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix A
    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add the matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    printf("Resultant Matrix (A + B):\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
