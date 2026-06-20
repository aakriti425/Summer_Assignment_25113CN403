// Write a program to Bubble sort.

// Bubble Sort -> largest element at their correct position .

// eg -> arr={10,30,40,20}

// first iteration arr = [10,30,20,40]
// 2nd iteration arr=  [10,20,30,40]

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

void bubble_sort(int arr[], int n)
{

    // time complexity => O(n²)

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { // if arr[j] > arr[j+1] if true then swap the values
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    printf("\nSorted Array \n");
    array_display(arr, n);
}

int main()
{
    int n;
    printf("Enter size of Array : ");
    scanf("%d", &n);
    int arr[n];
    array_input(arr, n);
    array_display(arr, n);

    bubble_sort(arr, n);
    return 0;
}