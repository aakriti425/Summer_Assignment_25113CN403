//  Write a program to Find missing number in array.

#include <stdio.h>

void array_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}

void array_display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void missing_number(int arr[], int n)
{
    printf("\nMISSING NUMBER : ");

    for (int i = 0; i <= n; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int n;
    printf("Enter size of Array : ");
    scanf("%d", &n);
    int arr[n];
    array_input(arr, n);
    array_display(arr, n);

    missing_number(arr, n);
    return 0;
}