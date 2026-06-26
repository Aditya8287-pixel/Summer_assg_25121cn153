#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[100];
    int n1, n2, n3, i, j, k;
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
    printf("Enter size of third array: ");
    scanf("%d", &n3);
    printf("Enter %d elements: ", n3);
    for (i = 0; i < n3; i++)
    {
        scanf("%d", &arr3[i]);
    }
    printf("Common elements in all three arrays: ");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                for (k = 0; k < n3; k++)
                {
                    if (arr2[j] == arr3[k])
                    {
                        printf("%d ", arr1[i]);
                        break;
                    }
                }
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
