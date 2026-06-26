#include <stdio.h>

int main()
{
    char name[100];
    int age;
    char hasIdCard;

    printf("=== Voting Eligibility System ===\n");

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    getchar();

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();

    printf("Do you have a valid ID card? (y/n): ");
    scanf("%c", &hasIdCard);

    printf("\n--- Result for %s ---\n", name);

    if (age < 18)
    {
        printf("Sorry, you are NOT eligible to vote.\n");
        printf("You need to be at least 18 years old.\n");
    }
    else if (hasIdCard != 'y' && hasIdCard != 'Y')
    {
        printf("Sorry, you are NOT eligible to vote.\n");
        printf("You need a valid ID card.\n");
    }
    else
    {
        printf("Congratulations! You are ELIGIBLE to vote.\n");
    }

    return 0;
}
