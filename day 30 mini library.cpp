#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[MAX];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);
                getchar();

                printf("Enter Book Title: ");
                fgets(b[n].title, sizeof(b[n].title), stdin);
                b[n].title[strcspn(b[n].title, "\n")] = '\0';

                printf("Enter Author Name: ");
                fgets(b[n].author, sizeof(b[n].author), stdin);
                b[n].author[strcspn(b[n].author, "\n")] = '\0';

                n++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nID\tTitle\t\tAuthor\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\n",
                               b[i].id, b[i].title, b[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        printf("\nBook Found!\n");
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Title     : %s\n", b[i].title);
                        printf("Author    : %s\n", b[i].author);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found!\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
