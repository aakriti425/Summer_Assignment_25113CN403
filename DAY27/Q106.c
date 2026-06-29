// Write a program to Create employee management system.

#include <stdio.h>
#include <string.h>

// creating employee name structure

struct employee
{
    int id;
    char name[100];
    char department[50];
    float salary;
};

void addEmployee(FILE *fptr)
{
    struct employee e;

    printf("Enter Name : ");
    scanf(" %[^\n]", e.name); // taking name

    printf("Enter Employee ID : ");
    scanf("%d", &e.id); // taking ID from user

    printf("Enter Department : ");
    scanf(" %[^\n]", &e.department); // taking Department from user

    printf("Enter Salary of Employee :");
    scanf("%f", &e.salary);

    fseek(fptr, 0, SEEK_END);                     // moving file pointer to the end of the file
    fwrite(&e, sizeof(struct employee), 1, fptr); // writing one record in a file

    printf("Employee Added Successfully.\n");
}

void displayEmployee(FILE *fptr)
{
    struct employee e;

    rewind(fptr); // moving pointer to the begning

    printf("\n----- Employee Records -----\n");

    while (fread(&e, sizeof(struct employee), 1, fptr)) // reading one record at a time from the file
    {
        printf("\nName       : %s", e.name);
        printf("\nID         : %d", e.id);
        printf("\nDepartment : %s", e.department);
        printf("\nSalary     : %f", e.salary);
    }
}

void searchEmployee(FILE *fptr)
{
    struct employee e;
    int id;
    int found = 0;

    printf("Enter ID to Search : ");
    scanf("%d", &id);

    rewind(fptr);

    while (fread(&e, sizeof(struct employee), 1, fptr))
    {
        if (e.id == id) // when user given roll no match with the record roll no
        {
            printf("\nEmployee Found\n");

            printf("\nName       : %s", e.name);
            printf("\nID         : %d", e.id);
            printf("\nDepartment : %s", e.department);
            printf("\nSalary     : %f", e.salary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee not found.\n");
}

void updateEmployee(FILE *fptr)
{
    struct employee e;
    int id;
    int found = 0;

    printf("Enter ID to Update : ");
    scanf("%d", &id);

    rewind(fptr);

    while (fread(&e, sizeof(struct employee), 1, fptr))
    {
        if (e.id == id)
        {
            printf("Enter New Name : ");
            scanf(" %[^\n]", e.name); // taking name

            printf("Enter New Employee ID : ");
            scanf("%d", &e.id); // taking ID from user

            printf("Enter New Department : ");
            scanf(" %[^\n]", e.department); // taking Department from user

            printf("Enter New Salary of Employee :");
            scanf("%f", &e.salary);

            fseek(fptr, -sizeof(struct employee), SEEK_CUR);

            fwrite(&e, sizeof(struct employee), 1, fptr);

            printf("Record Updated.\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee not found.\n");
}

void deleteEmployee(FILE *fptr)
{
    FILE *temp;
    temp = fopen("temp.dat", "wb");

    struct employee e;
    int id;
    int found = 0;

    printf("Enter ID to Delete : ");
    scanf("%d", &id);

    rewind(fptr);

    while (fread(&e, sizeof(struct employee), 1, fptr))
    {
        if (e.id == id)
        {
            found = 1;
            continue;
        }

        fwrite(&e, sizeof(struct employee), 1, temp);
    }

    fclose(temp);

    remove("Employee.dat");
    rename("temp.dat", "Employee.dat");

    if (found)
        printf("Record Deleted.\n");
    else
        printf("Employee not found.\n");
}

int main()
{
    int choice;

    while (1)
    {
        FILE *fptr = fopen("Employee.dat", "rb+");

        if (fptr == NULL)
            fptr = fopen("Employee.dat", "wb+");

        printf("\n\n1. Add Employee");
        printf("\n2. Display Employee");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee(fptr);
            break;

        case 2:
            displayEmployee(fptr);
            break;

        case 3:
            searchEmployee(fptr);
            break;

        case 4:
            updateEmployee(fptr);
            break;

        case 5:
            deleteEmployee(fptr);
            break;

        case 6:
            fclose(fptr);
            return 0;

        default:
            printf("Invalid Choice\n");
        }

        fclose(fptr);
    }

    return 0;
}
