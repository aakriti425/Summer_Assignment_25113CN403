// Write a program to Create contact management system.

// Contact Management System

#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[100];
    char phone[20];
    char email[100];
};

void addContact(FILE *fptr)
{
    struct Contact c;

    getchar();

    printf("Enter Name : ");
    scanf("%[^\n]", c.name);
    getchar();

    printf("Enter Phone Number : ");
    scanf("%[^\n]", c.phone);
    getchar();

    printf("Enter Email : ");
    scanf("%[^\n]", c.email);

    fwrite(&c, sizeof(c), 1, fptr);

    printf("Contact Added Successfully!\n");
}

void displayContacts(FILE *fptr)
{
    struct Contact c;

    rewind(fptr);

    printf("\n----- Contact List -----\n");

    while (fread(&c, sizeof(c), 1, fptr))
    {
        printf("\nName  : %s", c.name);
        printf("\nPhone : %s", c.phone);
        printf("\nEmail : %s\n", c.email);
    }
}

void searchContact(FILE *fptr)
{
    char name[100];
    struct Contact c;
    int found = 0;

    getchar();

    printf("Enter Name to Search : ");
    scanf("%[^\n]", name);

    rewind(fptr);

    while (fread(&c, sizeof(c), 1, fptr))
    {
        if (strcmp(c.name, name) == 0)
        {
            printf("\nContact Found!");
            printf("\nName  : %s", c.name);
            printf("\nPhone : %s", c.phone);
            printf("\nEmail : %s\n", c.email);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact Not Found!\n");
}

void updateContact(FILE *fptr)
{
    char name[100];
    struct Contact c;
    int found = 0;

    getchar();

    printf("Enter Name to Update : ");
    scanf("%[^\n]", name);

    rewind(fptr);

    while (fread(&c, sizeof(c), 1, fptr))
    {
        if (strcmp(c.name, name) == 0)
        {
            found = 1;

            getchar();

            printf("Enter New Phone Number : ");
            scanf("%[^\n]", c.phone);
            getchar();

            printf("Enter New Email : ");
            scanf("%[^\n]", c.email);

            fseek(fptr, -sizeof(c), SEEK_CUR);
            fwrite(&c, sizeof(c), 1, fptr);

            printf("Contact Updated Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Contact Not Found!\n");
}

int main()
{
    FILE *fptr = fopen("contacts.dat", "r+b");

    if (fptr == NULL)
        fptr = fopen("contacts.dat", "w+b");

    int choice;

    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact(fptr);
            break;

        case 2:
            displayContacts(fptr);
            break;

        case 3:
            searchContact(fptr);
            break;

        case 4:
            updateContact(fptr);
            break;

        case 5:
            fclose(fptr);
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}