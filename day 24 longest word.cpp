#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0, max = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            longest[len++] = str[i];
        } else {
            if (len > max) {
                max = len;
                longest[len] = '\0';
                strcpy(longest, longest);
            }
            len = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }


    i = 0;
    len = 0;
    char temp[100];

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            temp[len++] = str[i];
        } else {
            temp[len] = '\0';
            if (len == max)
                strcpy(longest, temp);
            len = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}
