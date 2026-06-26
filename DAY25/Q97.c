// Write a program to Merge two sorted arrays.
// arr1 = {1, 3, 5}
// arr2 = {2, 4, 6}

// output => {1, 2, 3, 4, 5, 6}

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

void array_merge(int arr1[], int n1, int arr2[], int n2, int arr[], int n)
{
    for (int i = 0; i < n1; i++)
    {
        arr[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        arr[n1 + i] = arr2[i];
    }

    printf("\nMerged array\n");
    array_display(arr, n1 + n2);
}

void sort_array(int arr[], int n)
{
    printf("\nSorted Array\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    array_display(arr, n);
}
int main()
{
    int n1;
    printf("Enter size of Array : ");
    scanf("%d", &n1);
    int arr1[n1];
    array_input(arr1, n1);
    array_display(arr1, n1);

    int n2;
    printf("\nEnter size of Array : ");
    scanf("%d", &n2);
    int arr2[n2];
    array_input(arr2, n2);
    array_display(arr2, n2);

    int arr[n1 + n2];
    array_merge(arr1, n1, arr2, n2, arr, n1 + n2);
    sort_array(arr, n1 + n2);
    return 0;
}