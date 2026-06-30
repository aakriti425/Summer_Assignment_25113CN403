// Write a program to Create library management system.

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[100];
    char author[100];
    int issued; // 0 = Available, 1 = Issued
};

void addBook(FILE *fptr)
{
    struct Book b;

    printf("Enter Book ID : ");
    scanf("%d", &b.id);
    getchar();

    printf("Enter Book Title : ");
    scanf("%[^\n]", b.title);
    getchar();

    printf("Enter Author Name : ");
    scanf("%[^\n]", b.author);

    b.issued = 0;

    fwrite(&b, sizeof(b), 1, fptr);
    printf("Book Added Successfully!\n");
}

void displayBooks(FILE *fptr)
{
    struct Book b;

    rewind(fptr);

    printf("\n----- Book List -----\n");

    while (fread(&b, sizeof(b), 1, fptr))
    {
        printf("\nBook ID : %d", b.id);
        printf("\nTitle : %s", b.title);
        printf("\nAuthor : %s", b.author);

        if (b.issued == 0)
            printf("\nStatus : Available\n");
        else
            printf("\nStatus : Issued\n");
    }
}

void searchBook(FILE *fptr)
{
    int id;
    struct Book b;
    int found = 0;

    printf("Enter Book ID : ");
    scanf("%d", &id);

    rewind(fptr);

    while (fread(&b, sizeof(b), 1, fptr))
    {
        if (b.id == id)
        {
            printf("\nBook Found");
            printf("\nTitle : %s", b.title);
            printf("\nAuthor : %s", b.author);

            if (b.issued == 0)
                printf("\nStatus : Available\n");
            else
                printf("\nStatus : Issued\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book Not Found!\n");
}

void issueBook(FILE *fptr)
{
    int id;
    struct Book b;
    int found = 0;

    printf("Enter Book ID : ");
    scanf("%d", &id);

    rewind(fptr);

    while (fread(&b, sizeof(b), 1, fptr))
    {
        if (b.id == id)
        {
            found = 1;

            if (b.issued == 1)
            {
                printf("Book Already Issued!\n");
            }
            else
            {
                b.issued = 1;

                fseek(fptr, -sizeof(b), SEEK_CUR);
                fwrite(&b, sizeof(b), 1, fptr);

                printf("Book Issued Successfully!\n");
            }
            break;
        }
    }

    if (!found)
        printf("Book Not Found!\n");
}

void returnBook(FILE *fptr)
{
    int id;
    struct Book b;
    int found = 0;

    printf("Enter Book ID : ");
    scanf("%d", &id);

    rewind(fptr);

    while (fread(&b, sizeof(b), 1, fptr))
    {
        if (b.id == id)
        {
            found = 1;

            if (b.issued == 0)
            {
                printf("Book is already available.\n");
            }
            else
            {
                b.issued = 0;

                fseek(fptr, -sizeof(b), SEEK_CUR);
                fwrite(&b, sizeof(b), 1, fptr);

                printf("Book Returned Successfully!\n");
            }
            break;
        }
    }

    if (!found)
        printf("Book Not Found!\n");
}

int main()
{
    FILE *fptr = fopen("library.dat", "r+b");

    if (fptr == NULL)
        fptr = fopen("library.dat", "w+b");

    int choice;

    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook(fptr);
            break;

        case 2:
            displayBooks(fptr);
            break;

        case 3:
            searchBook(fptr);
            break;

        case 4:
            issueBook(fptr);
            break;

        case 5:
            returnBook(fptr);
            break;

        case 6:
            fclose(fptr);
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}