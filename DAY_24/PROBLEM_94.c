#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int count;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Compressed string: ");

    i = 0;
    while (str[i] != '\0')
    {
        count = 1;
        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        printf("%c", str[i]);
        if (count > 1)
        {
            printf("%d", count);
        }
        i++;
    }
    printf("\n");

    return 0;
}
