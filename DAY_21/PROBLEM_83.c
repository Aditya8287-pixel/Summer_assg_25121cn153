#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int vowels = 0;
    int consonants = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
