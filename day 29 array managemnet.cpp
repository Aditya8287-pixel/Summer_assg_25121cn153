#include <stdio.h>

int main() {
    int arr[100], n, choice, i, pos, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(1) {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Array elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter position and element to insert: ");
                scanf("%d %d", &pos, &element);

                if(pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    for(i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = element;
                    n++;
                    printf("Element inserted successfully!\n");
                }
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                } else {
                    for(i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully!\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &element);

                for(i = 0; i < n; i++) {
                    if(arr[i] == element) {
                        printf("Element found at position %d\n", i);
                        break;
                    }
                }
                if(i == n) {
                    printf("Element not found!\n");
                }
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
