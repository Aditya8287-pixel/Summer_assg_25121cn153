#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, j;
    int isPalin = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    i = 0;
    j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalin = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalin == 1)
    {
        printf("String is a Palindrome\n");
    }
    else
    {
        printf("String is NOT a Palindrome\n");
    }

    return 0;
}
