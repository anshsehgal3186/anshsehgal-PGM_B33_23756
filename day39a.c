#include <stdio.h>

int main() {
    int a[100][100];
    int n;
    int distinct = 1;   // assume distinct
    int diag[100];      // store diagonal elements

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Store diagonal elements in an array
    for(int i = 0; i < n; i++) {
        diag[i] = a[i][i];
    }

    // Check if any two diagonal elements are same
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct)
            break;
    }

    if(distinct)
        printf("All diagonal elements are DISTINCT.");
    else
        printf("Diagonal elements are NOT distinct.");

    return 0;
}
