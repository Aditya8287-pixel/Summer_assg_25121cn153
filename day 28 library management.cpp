#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n, i, searchId, found = 0;

    printf("===== Library Management System =====\n");

    printf("Enter the number of books: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author Name: ");
        scanf("%s", book[i].author);
    }

    
    printf("\n===== Book Records =====\n");
    printf("ID\tTitle\tAuthor\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%s\n",
               book[i].bookId,
               book[i].title,
               book[i].author);
    }

    
    printf("\nEnter Book ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++) {
        if(book[i].bookId == searchId) {
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", book[i].bookId);
            printf("Title   : %s\n", book[i].title);
            printf("Author  : %s\n", book[i].author);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Book Record Not Found.\n");
    }

    return 0;
}
