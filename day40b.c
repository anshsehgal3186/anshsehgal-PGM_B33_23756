#include<stdio.h>

int main() {
    int r, c, r2, c2;

    printf("Enter number of rows for first matrix: ");
    scanf("%d", &r);
    printf("Enter number of columns for first matrix: ");
    scanf("%d", &c);

    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element [%d][%d] of first matrix: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter number of rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &c2);

    int brr[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Enter element [%d][%d] of second matrix: ", i + 1, j + 1);
            scanf("%d", &brr[i][j]);
        }
    }

    if (c != r2) {
        printf("Matrix cannot be multiplied.\n"); 
        return 0;
    }

    int res[r][c2];
    // Initialize result matrix to 0
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c2; j++)
            res[i][j] = 0;
    // Matrix multiplication
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c; k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
