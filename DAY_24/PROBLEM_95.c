#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char word[100];
    char longestWord[100];
    int i, j;
    int maxLen = 0;
    int len;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0')
        {
            word[j] = str[i];
            i++;
            j++;
        }
        word[j] = '\0';

        len = strlen(word);
        if (len > maxLen)
        {
            maxLen = len;
            strcpy(longestWord, word);
        }

        if (str[i] == ' ')
        {
            i++;
        }
    }

    printf("Longest word = %s\n", longestWord);
    printf("Length = %d\n", maxLen);

    return 0;
}
