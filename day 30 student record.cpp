#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[MAX];
    int n = 0, choice, i, roll, found;

    while (1) {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);
                getchar();

                printf("Enter Name: ");
                fgets(s[n].name, sizeof(s[n].name), stdin);
                s[n].name[strcspn(s[n].name, "\n")] = '\0';

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\nRoll\tName\tMarks\n");
                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("Student Found!\n");
                        printf("Roll: %d\nName: %s\nMarks: %.2f\n",
                               s[i].roll, s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student not found!\n");
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
