#include <stdio.h>

struct Salary {
    int empId;
    char name[50];
    float basic, hra, da, tax, gross, net;
};

int main() {
    struct Salary emp;

    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic);


    emp.hra = emp.basic * 0.20;   
    emp.da = emp.basic * 0.10;    
    emp.tax = emp.basic * 0.05;   

    
    emp.gross = emp.basic + emp.hra + emp.da;
    emp.net = emp.gross - emp.tax;

    
    printf("\n===== Salary Details =====\n");
    printf("Employee ID   : %d\n", emp.empId);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basic);
    printf("HRA           : %.2f\n", emp.hra);
    printf("DA            : %.2f\n", emp.da);
    printf("Gross Salary  : %.2f\n", emp.gross);
    printf("Tax           : %.2f\n", emp.tax);
    printf("Net Salary    : %.2f\n", emp.net);

    return 0;
}
