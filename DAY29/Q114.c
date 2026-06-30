// Menu-Driven Array Operations System

#include <stdio.h>

int main()
{
    int arr[100], n;
    int choice;
    int pos, value;
    int i, sum = 0;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Find Sum of Elements\n");
        printf("6. Find Maximum Element\n");
        printf("7. Find Minimum Element\n");
        printf("8. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array Elements : ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            printf("Enter position (1 to %d) : ", n + 1);
            scanf("%d", &pos);

            printf("Enter value : ");
            scanf("%d", &value);

            if (pos < 1 || pos > n + 1)
            {
                printf("Invalid Position!\n");
            }
            else
            {
                for (i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                printf("Element Inserted Successfully!\n");
            }
            break;

        case 3:
            printf("Enter position to delete : ");
            scanf("%d", &pos);

            if (pos < 1 || pos > n)
            {
                printf("Invalid Position!\n");
            }
            else
            {
                for (i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;
                printf("Element Deleted Successfully!\n");
            }
            break;

        case 4:
            printf("Enter element to search : ");
            scanf("%d", &value);

            for (i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    printf("Element found at position %d\n", i + 1);
                    break;
                }
            }

            if (i == n)
            {
                printf("Element not found!\n");
            }
            break;

        case 5:
            sum = 0;

            for (i = 0; i < n; i++)
            {
                sum += arr[i];
            }

            printf("Sum = %d\n", sum);
            break;

        case 6:
        {
            int max = arr[0];

            for (i = 1; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }

            printf("Maximum Element = %d\n", max);
            break;
        }

        case 7:
        {
            int min = arr[0];

            for (i = 1; i < n; i++)
            {
                if (arr[i] < min)
                {
                    min = arr[i];
                }
            }

            printf("Minimum Element = %d\n", min);
            break;
        }

        case 8:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 8);

    return 0;
}