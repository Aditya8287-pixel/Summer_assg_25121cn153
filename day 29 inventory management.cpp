#include <stdio.h>

#define MAX 100

int main() {
    int id[MAX], qty[MAX], n = 0;
    int choice, i, searchId, found;

    while (1) {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (n < MAX) {
                    printf("Enter Item ID: ");
                    scanf("%d", &id[n]);
                    printf("Enter Quantity: ");
                    scanf("%d", &qty[n]);
                    n++;
                    printf("Item added successfully!\n");
                } else {
                    printf("Inventory Full!\n");
                }
                break;

            case 2:
                if (n == 0) {
                    printf("No items in inventory.\n");
                } else {
                    printf("\nID\tQuantity\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%d\n", id[i], qty[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (id[i] == searchId) {
                        printf("Item Found! Quantity = %d\n", qty[i]);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Item not found!\n");
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
