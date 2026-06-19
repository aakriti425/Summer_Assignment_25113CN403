// Write a program to Union of arrays.

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

void union_array(int arr1[], int n1, int arr2[], int n2)
{
    int uni[n1+n2];
    for (int i = 0; i < n1; i++)
    {
        uni[i] = arr1[i];
    }
    int k=n1;
    for (int i = 0; i < n2; i++)
    {
        int found = 0;
        for (int j = 0; j < n1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found++;
                break;
            }
        }
        if (found == 0)
        {
            uni[k] = arr2[i];
            k++;
        }
    }
    printf("\nUnion of Array\n");
    array_display(uni, k);
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
    union_array(arr1, n1, arr2, n2);
    return 0;
}