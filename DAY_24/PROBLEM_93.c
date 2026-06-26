#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[200], temp[400];
    int len1, len2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("Second string is NOT a rotation of first string\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
    {
        printf("Second string IS a rotation of first string\n");
    }
    else
    {
        printf("Second string is NOT a rotation of first string\n");
    }

    return 0;
}
