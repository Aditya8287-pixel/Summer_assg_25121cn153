#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int freq1[256] = {0};
    int freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        freq1[(int)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        freq2[(int)str2[i]]++;
    }

    printf("Common characters: ");
    for (i = 0; i < 256; i++)
    {
        if (freq1[i] > 0 && freq2[i] > 0)
        {
            printf("'%c' ", i);
        }
    }
    printf("\n");

    return 0;
}
