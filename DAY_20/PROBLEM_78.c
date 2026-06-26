#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int isSymmetric = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric == 1)
    {
        printf("Matrix is Symmetric\n");
    }
    else
    {
        printf("Matrix is NOT Symmetric\n");
    }

    return 0;
}
