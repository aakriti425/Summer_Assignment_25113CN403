// Write a program to Bubble sort.

// Selection Sort is an in - place, comparison - based sorting algorithm that sorts an array by
// repeatedly finding the minimum element from the unsorted portion and swapping it to the front.

// eg -> arr=[64,25,12,22,11]

// how it work?
// step1 => Find Minimum: Scan the unsorted region of the list to locate the smallest value.
// Step2 =>Swap Elements: Swap this minimum value with the first element of the unsorted region.
// Step3 =>Shift Boundary: Move the imaginary boundary between the sorted and unsorted regions one step to the right.
// step4=> Repeat: Continue these steps until the entire array is processed.

// first iteration : swaping 11 with 66
//  arr =[11,25,12,22,64]

// placing 12, the smallest element of the unsorted part, at its correct position
// arr = [11,12,25,22,64]

// and so on until the full array is sorted .

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

void selection_sort(int arr[], int n)
{

    // time complexity => O(n²)
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++) //  arr = {64,25,12,22,11}
        {
            if (arr[j] < arr[min])    // finding minumum value 
            {
                min = j; // minimum value index update 
            }
        }
        if (min != i) // if minmum is not equal to current index then swap 
        {
            int t= arr[i];
            arr[i]= arr[min];
            arr[min]=t;
        }
    }
    printf("\nSorted Array \n");
    array_display(arr, n);
}

int main()
{
    int n ;
    printf("Enter size of Array : ");
    scanf("%d", &n);
    int arr[n];
    array_input(arr, n);
    array_display(arr, n);

    selection_sort(arr, n);
    return 0;
}