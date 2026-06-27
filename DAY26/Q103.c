// Write a program to Create ATM simulation.

#include <stdio.h>

int main()
{
    float balance = 00;
    float deposit;
    float withdraw;

    int choice = 0;
    while (choice != 4)
    {
        printf("\n1. Check Balance \n2. Deposit \n3. Withdraw \n4. Exit \n");

        printf("Enter choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Balance : %.2f\n", balance);
            break;
        case 2:
            printf("Enter Deposit : ");
            scanf("%f", &deposit);
            if (deposit < 0)
            {
                printf("Enter Valid Amount\n");
            }
            else
            {
                balance += deposit;
                printf("Balance : %.2f\n", balance);
            }
            break;
        case 3:
            printf("Enter Withdraw Amount :");
            scanf("%f", &withdraw);
            if (withdraw <= 0)
            {
                printf("Enter Valid Amount\n");
            }else if (withdraw > balance){
                printf("Insufficient Balance\n");
            }
            else
            {
                balance -= withdraw;
                printf("Balance : %.2f", balance);
            }
            break;
        case 4:
            printf("Thank you for using the ATM!\n");
            break;
        default:
            printf("Enter Valid Choice\n");
            break;
        }
    }
    return 0;
}