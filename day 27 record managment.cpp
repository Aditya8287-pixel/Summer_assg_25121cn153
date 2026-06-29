#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, searchRoll, found = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    
    printf("\n----- Student Records -----\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++) {
        if(s[i].roll == searchRoll) {
            printf("\nStudent Found!\n");
            printf("Roll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Student Record Not Found.\n");
    }

    return 0;
}
