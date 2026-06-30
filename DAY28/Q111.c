// Write a program to Create ticket booking system.

#include <stdio.h>
#include <string.h>

struct Ticket
{
    int ticketNo;
    char name[100];
    int seatNo;
    int booked; // 0 = Available, 1 = Booked
};

void bookTicket(FILE *fptr)
{
    struct Ticket t;

    printf("Enter Ticket Number : ");
    scanf("%d", &t.ticketNo);
    getchar();

    printf("Enter Passenger Name : ");
    scanf("%[^\n]", t.name);

    printf("Enter Seat Number : ");
    scanf("%d", &t.seatNo);

    t.booked = 1;

    fwrite(&t, sizeof(t), 1, fptr);
    printf("Ticket Booked Successfully!\n");
}

void displayTickets(FILE *fptr)
{
    struct Ticket t;

    rewind(fptr);

    printf("\n----- Ticket Details -----\n");

    while (fread(&t, sizeof(t), 1, fptr))
    {
        printf("\nTicket Number : %d", t.ticketNo);
        printf("\nPassenger Name : %s", t.name);
        printf("\nSeat Number : %d", t.seatNo);

        if (t.booked)
            printf("\nStatus : Booked\n");
        else
            printf("\nStatus : Cancelled\n");
    }
}

void searchTicket(FILE *fptr)
{
    int ticketNo;
    struct Ticket t;
    int found = 0;

    printf("Enter Ticket Number : ");
    scanf("%d", &ticketNo);

    rewind(fptr);

    while (fread(&t, sizeof(t), 1, fptr))
    {
        if (t.ticketNo == ticketNo)
        {
            printf("\nTicket Found");
            printf("\nPassenger Name : %s", t.name);
            printf("\nSeat Number : %d", t.seatNo);

            if (t.booked)
                printf("\nStatus : Booked\n");
            else
                printf("\nStatus : Cancelled\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Ticket Not Found!\n");
}

void cancelTicket(FILE *fptr)
{
    int ticketNo;
    struct Ticket t;
    int found = 0;

    printf("Enter Ticket Number : ");
    scanf("%d", &ticketNo);

    rewind(fptr);

    while (fread(&t, sizeof(t), 1, fptr))
    {
        if (t.ticketNo == ticketNo)
        {
            found = 1;

            if (!t.booked)
            {
                printf("Ticket Already Cancelled!\n");
            }
            else
            {
                t.booked = 0;

                fseek(fptr, -sizeof(t), SEEK_CUR);
                fwrite(&t, sizeof(t), 1, fptr);

                printf("Ticket Cancelled Successfully!\n");
            }
            break;
        }
    }

    if (!found)
        printf("Ticket Not Found!\n");
}

int main()
{
    FILE *fptr = fopen("ticket.dat", "r+b");

    if (fptr == NULL)
        fptr = fopen("ticket.dat", "w+b");

    int choice;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bookTicket(fptr);
            break;

        case 2:
            displayTickets(fptr);
            break;

        case 3:
            searchTicket(fptr);
            break;

        case 4:
            cancelTicket(fptr);
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