// Mini Library System

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[100];
    char author[100];
    int issued; // 0 = Available, 1 = Issued
};

int main()
{
    struct Book b[100];
    int n = 0;
    int choice, id, found, i;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID : ");
            scanf("%d", &b[n].id);
            getchar();

            printf("Enter Book Title : ");
            scanf("%[^\n]", b[n].title);
            getchar();

            printf("Enter Author Name : ");
            scanf("%[^\n]", b[n].author);

            b[n].issued = 0;
            n++;

            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Books Available!\n");
            }
            else
            {
                printf("\n----- Book List -----\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nBook ID : %d", b[i].id);
                    printf("\nTitle   : %s", b[i].title);
                    printf("\nAuthor  : %s", b[i].author);

                    if (b[i].issued)
                        printf("\nStatus  : Issued\n");
                    else
                        printf("\nStatus  : Available\n");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search : ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    printf("\nBook Found!");
                    printf("\nTitle  : %s", b[i].title);
                    printf("\nAuthor : %s", b[i].author);

                    if (b[i].issued)
                        printf("\nStatus : Issued\n");
                    else
                        printf("\nStatus : Available\n");

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");

            break;

        case 4:
            printf("Enter Book ID to Issue : ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;

                    if (b[i].issued)
                    {
                        printf("Book Already Issued!\n");
                    }
                    else
                    {
                        b[i].issued = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");

            break;

        case 5:
            printf("Enter Book ID to Return : ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;

                    if (!b[i].issued)
                    {
                        printf("Book is Already Available!\n");
                    }
                    else
                    {
                        b[i].issued = 0;
                        printf("Book Returned Successfully!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");

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