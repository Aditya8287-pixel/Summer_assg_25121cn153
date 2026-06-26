#include <stdio.h>

int main()
{
    char str[200];
    char result[200];
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("String after removing spaces: %s\n", result);

    return 0;
}
