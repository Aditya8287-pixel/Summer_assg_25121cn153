#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, i, j, k;
    int isPresent;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    k = 0;
    for (i = 0; i < n1; i++)
    {
        isPresent = 0;
        for (j = 0; j < k; j++)
        {
            if (unionArr[j] == arr1[i])
            {
                isPresent = 1;
                break;
            }
        }
        if (isPresent == 0)
        {
            unionArr[k] = arr1[i];
            k++;
        }
    }
    for (i = 0; i < n2; i++)
    {
        isPresent = 0;
        for (j = 0; j < k; j++)
        {
            if (unionArr[j] == arr2[i])
            {
                isPresent = 1;
                break;
            }
        }
        if (isPresent == 0)
        {
            unionArr[k] = arr2[i];
            k++;
        }
    }
    printf("Union of arrays: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}
