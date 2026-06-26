#include <stdio.h>

int main()
{
    char str[200];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (freq[(int)str[i]] == 1)
        {
            printf("First non-repeating character = '%c'\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");

    return 0;
}
