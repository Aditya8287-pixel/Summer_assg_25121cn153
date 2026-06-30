#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[MAX];
int n = 0;

void addStudent();
void displayStudent();
void searchStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}

void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &s[n].roll);
    getchar();

    printf("Enter Name: ");
    fgets(s[n].name, 50, stdin);
    s[n].name[strcspn(s[n].name, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;

    printf("Student Added Successfully!\n");
}

void displayStudent()
{
    int i;

    if (n == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\nRoll\tName\t\tMarks\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               s[i].roll, s[i].name, s[i].marks);
    }
}

void searchStudent()
{
    int roll, i;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Student Not Found!\n");
}
