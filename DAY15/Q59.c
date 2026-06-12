// Write a program to Rotate array right . 
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

void array_rotate_right(int arr[], int n, int rot) {
    rot = rot % n;

    int temp[rot];

    // Store last rot elements
    for (int i = 0; i < rot; i++) {
        temp[i] = arr[n - rot + i];
    }

    // Shift remaining elements right
    for (int i = n - rot - 1; i >= 0; i--) {
        arr[i + rot] = arr[i];
    }

    // Put stored elements at the beginning
    for (int i = 0; i < rot; i++) {
        arr[i] = temp[i];
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
    array_rotate_right(arr,n,rot);
    return 0;
}