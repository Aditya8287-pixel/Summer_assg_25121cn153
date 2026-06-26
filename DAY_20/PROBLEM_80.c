#include <stdio.h>

int main()
{
    int a[10][10];
    int r, col, i, j;
    int sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Column-wise sum:\n");
    for (j = 0; j < col; j++)
    {
        sum = 0;
        for (i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, sum);
    }

    return 0;
}
