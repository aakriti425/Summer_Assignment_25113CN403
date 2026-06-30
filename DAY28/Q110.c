// Write a program to Create bank account system.

#include <stdio.h>
#include <string.h>

struct Account
{
    int accNo;
    char name[100];
    float balance;
};

void createAccount(FILE *fptr)
{
    struct Account a;

    printf("Enter Account Number : ");
    scanf("%d", &a.accNo);
    getchar();

    printf("Enter Account Holder Name : ");
    scanf("%[^\n]", a.name);

    printf("Enter Initial Balance : ");
    scanf("%f", &a.balance);

    fwrite(&a, sizeof(a), 1, fptr);
    printf("Account Created Successfully!\n");
}

void displayAccounts(FILE *fptr)
{
    struct Account a;

    rewind(fptr);

    printf("\n----- Account Details -----\n");

    while (fread(&a, sizeof(a), 1, fptr))
    {
        printf("\nAccount Number : %d", a.accNo);
        printf("\nName           : %s", a.name);
        printf("\nBalance        : %.2f\n", a.balance);
    }
}

void searchAccount(FILE *fptr)
{
    int accNo;
    struct Account a;
    int found = 0;

    printf("Enter Account Number : ");
    scanf("%d", &accNo);

    rewind(fptr);

    while (fread(&a, sizeof(a), 1, fptr))
    {
        if (a.accNo == accNo)
        {
            printf("\nAccount Found");
            printf("\nAccount Number : %d", a.accNo);
            printf("\nName           : %s", a.name);
            printf("\nBalance        : %.2f\n", a.balance);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Account Not Found!\n");
}

void deposit(FILE *fptr)
{
    int accNo;
    float amount;
    struct Account a;
    int found = 0;

    printf("Enter Account Number : ");
    scanf("%d", &accNo);

    rewind(fptr);

    while (fread(&a, sizeof(a), 1, fptr))
    {
        if (a.accNo == accNo)
        {
            found = 1;

            printf("Enter Deposit Amount : ");
            scanf("%f", &amount);

            a.balance += amount;

            fseek(fptr, -sizeof(a), SEEK_CUR);
            fwrite(&a, sizeof(a), 1, fptr);

            printf("Amount Deposited Successfully!\n");
            printf("New Balance : %.2f\n", a.balance);
            break;
        }
    }

    if (!found)
        printf("Account Not Found!\n");
}

void withdraw(FILE *fptr)
{
    int accNo;
    float amount;
    struct Account a;
    int found = 0;

    printf("Enter Account Number : ");
    scanf("%d", &accNo);

    rewind(fptr);

    while (fread(&a, sizeof(a), 1, fptr))
    {
        if (a.accNo == accNo)
        {
            found = 1;

            printf("Enter Withdrawal Amount : ");
            scanf("%f", &amount);

            if (amount > a.balance)
            {
                printf("Insufficient Balance!\n");
            }
            else
            {
                a.balance -= amount;

                fseek(fptr, -sizeof(a), SEEK_CUR);
                fwrite(&a, sizeof(a), 1, fptr);

                printf("Withdrawal Successful!\n");
                printf("Remaining Balance : %.2f\n", a.balance);
            }
            break;
        }
    }

    if (!found)
        printf("Account Not Found!\n");
}

int main()
{
    FILE *fptr = fopen("bank.dat", "r+b");

    if (fptr == NULL)
        fptr = fopen("bank.dat", "w+b");

    int choice;

    while (1)
    {
        printf("\n===== Bank Account Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createAccount(fptr);
            break;

        case 2:
            displayAccounts(fptr);
            break;

        case 3:
            searchAccount(fptr);
            break;

        case 4:
            deposit(fptr);
            break;

        case 5:
            withdraw(fptr);
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