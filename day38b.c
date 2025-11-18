#include <stdio.h>

int main() {
    int a[100][100];
    int n, i, j;
    int isSymmetric = 1;

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
            break;
    }

    if(isSymmetric)
        printf("The matrix is symmetric.");
    else
        printf("The matrix is NOT symmetric.");

    return 0;
}
