#include <stdio.h>

int main() {
    int n, i, j;
    int A[10][10];
    int principal = 0, secondary = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        principal += A[i][i];
        secondary += A[i][n - 1 - i];
    }

    printf("Sum of principal diagonal = %d\n", principal);
    printf("Sum of secondary diagonal = %d\n", secondary);

    return 0;
}
