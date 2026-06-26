#include <stdio.h>

int main()
{
    char str[200];
    int freq[256] = {0};
    int i;
    int maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character = '%c'\n", maxChar);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}
