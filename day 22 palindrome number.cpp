#include <stdio.h>

int main() {
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (temp == rev)
        printf("%d is a Palindrome number.\n", temp);
    else
        printf("%d is not a Palindrome number.\n", temp);

    return 0;
}
