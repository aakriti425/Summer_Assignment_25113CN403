// Complete Mini Project: Student Management System

#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[100];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent()
{
    printf("Enter Roll Number : ");
    scanf("%d", &s[n].rollNo);
    getchar();

    printf("Enter Name : ");
    scanf("%[^\n]", s[n].name);

    printf("Enter Marks : ");
    scanf("%f", &s[n].marks);

    n++;
    printf("Student Added Successfully!\n");
}

void displayStudents()
{
    int i;

    if (n == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\n----- Student Records -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].rollNo);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number : ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].rollNo == roll)
        {
            printf("\nStudent Found!");
            printf("\nRoll No : %d", s[i].rollNo);
            printf("\nName    : %s", s[i].name);
            printf("\nMarks   : %.2f\n", s[i].marks);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found!\n");
}

void updateStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number : ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].rollNo == roll)
        {
            getchar();

            printf("Enter New Name : ");
            scanf("%[^\n]", s[i].name);

            printf("Enter New Marks : ");
            scanf("%f", &s[i].marks);

            printf("Record Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found!\n");
}

void deleteStudent()
{
    int roll, i, j, found = 0;

    printf("Enter Roll Number : ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].rollNo == roll)
        {
            for (j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;
            found = 1;

            printf("Record Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Student Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}