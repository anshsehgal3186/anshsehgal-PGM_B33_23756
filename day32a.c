#include <stdio.h>

int main() {
    int n1, n2, n3, i, j;
    int arr1[100], arr2[100], arr3[200];

    // Input for first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging the arrays
    n3 = n1 + n2;
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }

    // Display merged array
    printf("Merged array:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
