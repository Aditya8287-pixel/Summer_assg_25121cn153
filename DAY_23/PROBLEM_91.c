#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        freq[(int)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        freq[(int)str2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Strings are NOT Anagrams\n");
            return 0;
        }
    }

    printf("Strings are Anagrams\n");

    return 0;
}
