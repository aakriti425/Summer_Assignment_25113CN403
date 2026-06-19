// Write a program to Merge arrays.

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
void merge_array(int arr1[], int n1, int arr2[], int n2)
{
    int arr[n1+n2];
    for (int i = 0; i < n1; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr[n1+i] = arr2[i];
    }
    printf("\n Merged Array \n");
    array_display(arr, n1+n2);
}

int main()
{
    int n1;
    printf("Enter size of Array 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    array_input(arr1, n1);
    array_display(arr1, n1);

    int n2;
    printf("\nEnter size of Array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    array_input(arr2, n2);
    array_display(arr2, n2);

    merge_array(arr1, n1, arr2, n2);

    return 0;
}