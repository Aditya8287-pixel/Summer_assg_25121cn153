#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n, i, found = 0;
    char searchName[50];

    printf("===== Contact Management System =====\n");

    printf("Enter the number of contacts: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Phone Number: ");
        scanf("%s", c[i].phone);
    }

    
    printf("\n===== Contact List =====\n");
    printf("Name\t\tPhone Number\n");

    for(i = 0; i < n; i++) {
        printf("%s\t\t%s\n", c[i].name, c[i].phone);
    }

    
    printf("\nEnter Name to Search: ");
    scanf("%s", searchName);

    for(i = 0; i < n; i++) {
        int j = 0;
        while(c[i].name[j] == searchName[j] &&
              c[i].name[j] != '\0' &&
              searchName[j] != '\0') {
            j++;
        }

        if(c[i].name[j] == '\0' && searchName[j] == '\0') {
            printf("\nContact Found!\n");
            printf("Name : %s\n", c[i].name);
            printf("Phone: %s\n", c[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Contact Not Found.\n");
    }

    return 0;
}
