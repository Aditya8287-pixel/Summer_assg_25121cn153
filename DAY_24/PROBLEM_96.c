#include <stdio.h>

int main()
{
    char str[200];
    char result[200];
    int seen[256] = {0};
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (seen[(int)str[i]] == 0)
        {
            result[j] = str[i];
            j++;
            seen[(int)str[i]] = 1;
        }
    }
    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}
