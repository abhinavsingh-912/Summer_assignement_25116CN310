#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float basicSalary, hra, da, grossSalary;
};

int main() {
    struct Employee emp;
    
    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    emp.hra = emp.basicSalary * 0.20;  // 20% HRA
    emp.da = emp.basicSalary * 0.10;   // 10% DA

    // Calculate Gross Salary
    emp.grossSalary = emp.basicSalary + emp.hra + emp.da;

    printf("\n===== Salary Details =====\n");
    printf("Employee ID    : %d\n", emp.empId);
    printf("Employee Name  : %s\n", emp.name);
    printf("Basic Salary   : %.2f\n", emp.basicSalary);
    printf("HRA (20%%)      : %.2f\n", emp.hra);
    printf("DA (10%%)       : %.2f\n", emp.da);
    printf("Gross Salary   : %.2f\n", emp.grossSalary);

    return 0;
}