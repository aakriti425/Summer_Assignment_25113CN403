#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter a string : ");
    scanf("%[^\n]", str1);

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("Length = %d\n", (int)strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String : %s\n", str2);
            break;

        case 3:
            printf("Enter another string : ");
            scanf("%[^\n]", str2);
            getchar();

            strcat(str1, str2);

            printf("Concatenated String : %s\n", str1);
            break;

        case 4:
            printf("Enter another string : ");
            scanf("%[^\n]", str2);
            getchar();

            if (strcmp(str1, str2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Both strings are not equal.\n");
            break;

        case 5:
        {
            char temp[100];
            strcpy(temp, str1);

            int len = strlen(temp);

            for (int i = len - 1; i >= 0; i--)
            {
                printf("%c", temp[i]);
            }
            printf("\n");
            break;
        }

        case 6:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}