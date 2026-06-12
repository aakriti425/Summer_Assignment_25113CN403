// Write a program to Rotate array left. 
#include<stdio.h>

void array_input(int arr[],int n){
    for(int i= 0;i <n ;i++){
        printf ("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
}

void array_display(int arr[],int n){
    for(int i= 0;i <n ;i++){
        printf ("%d\t",arr[i]);
    }
}

void array_rotate_left(int arr[], int n, int rot) {
    rot = rot % n;      // handles rot > n

    int temp[rot];

    // Store first rot elements
    for (int i = 0; i < rot; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements left
    for (int i = 0; i < n - rot; i++) {
        arr[i] = arr[i + rot];
    }

    // Copy stored elements to the end
    for (int i = 0; i < rot; i++) {
        arr[n - rot + i] = temp[i];
    }

    array_display(arr, n);
}
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);

    int rot;
    printf("\nRotate Array by :");
    scanf("%d",&rot);
    array_rotate_left(arr,n,rot);
    return 0;
}