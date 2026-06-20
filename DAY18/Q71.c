// Write a program to Bubble sort.

// Binary search is an efficient algorithm that finds a target value within a
// sorted array by repeatedly dividing the search space in half

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

void binary_search(int arr[], int n, int key)
{
    // time complexity => O(n²)
    int beg = arr[0], end= arr[n-1],found=0;
    while (beg<end){
        int mid= (beg+end)/2;  // finding middle index of the array
        if(arr[mid] == key){ // if middle index value is equal to key 
            printf("\n%d is found at %d index\n",key,mid); // printing the key wit index if found
            found =1;
            break; // element found then breaking from the loop
        } else if(key < arr[mid]){ // if element is in first half then end updated
            end = mid-1;
        } else{ 
            beg= mid+1;  // if element is in second half then beg updated 
        }
    }
    if(found == 0){
        printf("\nElement is not found\n");
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

    int key ;
    printf("\nEnter the element to search :");
    scanf("%d",&key);
    binary_search(arr, n , key);
    return 0;
}