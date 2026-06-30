// Write a program to Create salary management system.

// Gross Salary = Base Salary + HRA(House Rent Allowance)+DA(Dearness Allowance)+ Bonuses
// Total Deductions = Provident Fund(PF) + Professional Tax + Leave Deductions
// Net Salary(Take - Home) = Gross Salary - Total Deductions

// Salary Management System in C

#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
    float basicSalary;
    float hra;
    float da;
    float deductions;
    float netSalary;
};

int main()
{
    struct Employee e;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basicSalary);

    // Calculate salary components
    e.hra = e.basicSalary * 0.20;         // 20% HRA
    e.da = e.basicSalary * 0.10;          // 10% DA
    e.deductions = e.basicSalary * 0.08; // 8% deduction

    // Calculate net salary
    e.netSalary = e.basicSalary + e.hra + e.da - e.deductions;

    // Display salary slip
    printf("\n======= Salary Slip =======\n");
    printf("Employee ID      : %d\n", e.id);
    printf("Employee Name    : %s\n", e.name);
    printf("Basic Salary     : %.2f\n", e.basicSalary);
    printf("HRA              : %.2f\n", e.hra);
    printf("DA               : %.2f\n", e.da);
    printf("Deductions       : %.2f\n", e.deductions);
    printf("Net Salary       : %.2f\n", e.netSalary);
    printf("===========================\n");

    return 0;
}