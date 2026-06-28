// Write a program to Create student record management system.
#include <stdio.h>
#include <string.h>

// creating student name structure 
struct student 
{
    char name[100];
    int rollno;

    struct DOB // nested structure to store DOB
    {
        int dd;
        int mm;
        int yy;
    } dob;
};

void addStudent(FILE *fptr)
{
    struct student s;

    printf("Enter Name : ");
    scanf(" %[^\n]", s.name); // taking name 

    printf("Enter Roll No : ");
    scanf("%d", &s.rollno); // taking roll no from user 

    printf("Enter DOB (dd mm yyyy) : ");
    scanf("%d%d%d", &s.dob.dd, &s.dob.mm, &s.dob.yy); // taking DOB from user 

    fseek(fptr, 0, SEEK_END); // moving file pointer to the end of the file 
    fwrite(&s, sizeof(struct student), 1, fptr); // writing one record in a file 

    printf("Student Added Successfully.\n");
}

void displayStudents(FILE *fptr)
{
    struct student s;

    rewind(fptr); // moving pointer to the begning 

    printf("\n----- Student Records -----\n");

    while (fread(&s, sizeof(struct student), 1, fptr)) // reading one record at a time from the file 
    {
        printf("\nName    : %s", s.name);
        printf("\nRoll No : %d", s.rollno);
        printf("\nDOB     : %02d/%02d/%04d\n", s.dob.dd, s.dob.mm, s.dob.yy);
    }
}

void searchStudent(FILE *fptr)
{
    struct student s;
    int roll;
    int found = 0;

    printf("Enter Roll No to Search : ");
    scanf("%d", &roll);

    rewind(fptr);

    while (fread(&s, sizeof(struct student), 1, fptr))
    {
        if (s.rollno == roll) // when user given roll no match with the record roll no 
        {
            printf("\nStudent Found\n");

            printf("Name    : %s\n", s.name);
            printf("Roll No : %d\n", s.rollno);
            printf("DOB     : %02d/%02d/%04d\n", s.dob.dd, s.dob.mm, s.dob.yy);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

void updateStudent(FILE *fptr)
{
    struct student s;
    int roll;
    int found = 0;

    printf("Enter Roll No to Update : ");
    scanf("%d", &roll);

    rewind(fptr);

    while (fread(&s, sizeof(struct student), 1, fptr))
    {
        if (s.rollno == roll)
        {
            printf("Enter New Name : ");
            scanf(" %[^\n]", s.name);

            printf("Enter New Roll No : ");
            scanf("%d", &s.rollno);

            printf("Enter New DOB : ");
            scanf("%d%d%d", &s.dob.dd, &s.dob.mm, &s.dob.yy);

            fseek(fptr, -sizeof(struct student), SEEK_CUR);

            fwrite(&s, sizeof(struct student), 1, fptr);

            printf("Record Updated.\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

void deleteStudent(FILE *fptr)
{
    FILE *temp;
    temp = fopen("temp.dat", "wb");

    struct student s;
    int roll;
    int found = 0;

    printf("Enter Roll No to Delete : ");
    scanf("%d", &roll);

    rewind(fptr);

    while (fread(&s, sizeof(struct student), 1, fptr))
    {
        if (s.rollno == roll)
        {
            found = 1;
            continue;
        }

        fwrite(&s, sizeof(struct student), 1, temp);
    }

    fclose(temp);

    remove("student.dat");
    rename("temp.dat", "student.dat");

    if (found)
        printf("Record Deleted.\n");
    else
        printf("Student not found.\n");
}

int main()
{
    int choice;

    while (1)
    {
        FILE *fptr = fopen("student.dat", "rb+");

        if (fptr == NULL)
            fptr = fopen("student.dat", "wb+");

        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(fptr);
            break;

        case 2:
            displayStudents(fptr);
            break;

        case 3:
            searchStudent(fptr);
            break;

        case 4:
            updateStudent(fptr);
            break;

        case 5:
            deleteStudent(fptr);
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