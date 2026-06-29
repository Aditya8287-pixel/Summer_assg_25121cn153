#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i, searchId, found = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    
    printf("\n----- Employee Records -----\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++) {
        if(emp[i].id == searchId) {
            printf("\nEmployee Found!\n");
            printf("Employee ID   : %d\n", emp[i].id);
            printf("Employee Name : %s\n", emp[i].name);
            printf("Salary        : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Employee Record Not Found.\n");
    }

    return 0;
}
