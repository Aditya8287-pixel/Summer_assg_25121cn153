#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[MAX];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);
                getchar();

                printf("Enter Employee Name: ");
                fgets(emp[n].name, sizeof(emp[n].name), stdin);
                emp[n].name[strcspn(emp[n].name, "\n")] = '\0';

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\nID\tName\t\tSalary\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%.2f\n",
                               emp[i].id, emp[i].name, emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        printf("\nEmployee Found!\n");
                        printf("ID     : %d\n", emp[i].id);
                        printf("Name   : %s\n", emp[i].name);
                        printf("Salary : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee not found!\n");

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
