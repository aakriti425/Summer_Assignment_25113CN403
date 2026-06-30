// Mini Employee Management System

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[100];
    char department[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n = 0;
    int choice, id, found, i;

    do
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID : ");
            scanf("%d", &e[n].id);
            getchar();

            printf("Enter Employee Name : ");
            scanf("%[^\n]", e[n].name);
            getchar();

            printf("Enter Department : ");
            scanf("%[^\n]", e[n].department);

            printf("Enter Salary : ");
            scanf("%f", &e[n].salary);

            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Employee Records Found!\n");
            }
            else
            {
                printf("\n----- Employee Records -----\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee ID : %d", e[i].id);
                    printf("\nName        : %s", e[i].name);
                    printf("\nDepartment  : %s", e[i].department);
                    printf("\nSalary      : %.2f\n", e[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search : ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    printf("\nEmployee Found!");
                    printf("\nEmployee ID : %d", e[i].id);
                    printf("\nName        : %s", e[i].name);
                    printf("\nDepartment  : %s", e[i].department);
                    printf("\nSalary      : %.2f\n", e[i].salary);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

            break;

        case 4:
            printf("Enter Employee ID to Update : ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    getchar();

                    printf("Enter New Name : ");
                    scanf("%[^\n]", e[i].name);
                    getchar();

                    printf("Enter New Department : ");
                    scanf("%[^\n]", e[i].department);

                    printf("Enter New Salary : ");
                    scanf("%f", &e[i].salary);

                    printf("Employee Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

            break;

        case 5:
            printf("Enter Employee ID to Delete : ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    int j;

                    for (j = i; j < n - 1; j++)
                    {
                        e[j] = e[j + 1];
                    }

                    n--;
                    found = 1;

                    printf("Employee Deleted Successfully!\n");
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

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