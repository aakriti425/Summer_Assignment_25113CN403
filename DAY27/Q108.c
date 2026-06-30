// Write a program to Create marksheet generation system.

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[100];
    float marks[5];
    float total;
    float percentage;
    char grade;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number : ");
    scanf("%d", &s.rollNo);

    printf("Enter Name : ");
    scanf(" %[^\n]", s.name);

    // Input marks of 5 subjects
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of Subject %d : ", i + 1);
        scanf("%f", &s.marks[i]);
    }

    // Calculate total
    s.total = 0;
    for (int i = 0; i < 5; i++)
    {
        s.total += s.marks[i];
    }

    // Calculate percentage
    s.percentage = s.total / 5;

    // Assign grade
    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 80)
        s.grade = 'B';
    else if (s.percentage >= 70)
        s.grade = 'C';
    else if (s.percentage >= 60)
        s.grade = 'D';
    else
        s.grade = 'F';

    // Display marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d   : %.2f\n", i + 1, s.marks[i]);
    }

    printf("Total       : %.2f / 500\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", s.grade);
    printf("================================\n");

    return 0;
}