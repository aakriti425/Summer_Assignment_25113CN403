// Student Record System using Arrays and Strings

#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[100];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0;
    int choice, i, roll, found;

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll Number : ");
            scanf("%d", &s[n].rollNo);
            getchar();

            printf("Enter Name : ");
            scanf("%[^\n]", s[n].name);

            printf("Enter Marks : ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No records found.\n");
            }
            else
            {
                printf("\n----- Student Records -----\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nRoll No : %d", s[i].rollNo);
                    printf("\nName    : %s", s[i].name);
                    printf("\nMarks   : %.2f\n", s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to Search : ");
            scanf("%d", &roll);

            found = 0;

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

            break;

        case 4:
            printf("Enter Roll Number to Update : ");
            scanf("%d", &roll);

            found = 0;

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

            break;

        case 5:
            printf("Enter Roll Number to Delete : ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    int j;

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