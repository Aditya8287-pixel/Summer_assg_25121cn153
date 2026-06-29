#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student s;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks in 5 Subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &s.m1);
    printf("Subject 2: ");
    scanf("%d", &s.m2);
    printf("Subject 3: ");
    scanf("%d", &s.m3);
    printf("Subject 4: ");
    scanf("%d", &s.m4);
    printf("Subject 5: ");
    scanf("%d", &s.m5);


    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage = s.total / 5.0;

    // Assign grade
    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    // Display Marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %d\n", s.m1);
    printf("Subject 2   : %d\n", s.m2);
    printf("Subject 3   : %d\n", s.m3);
    printf("Subject 4   : %d\n", s.m4);
    printf("Subject 5   : %d\n", s.m5);
    printf("Total Marks : %d\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", s.grade);

    if (s.grade == 'F')
        printf("Result      : Fail\n");
    else
        printf("Result      : Pass\n");

    return 0;
}
