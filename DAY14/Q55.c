// Write a program to Second largest element. 

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

void second_largest(int arr[],int n){
    int largest = arr[0];
    int secondLarg = arr[0];
    for(int i=0 ;i < n; i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
         if(arr[i] > secondLarg && arr[i] < largest){
                secondLarg= arr[i];
        }
    }
    printf("\nLargest element = %d",largest);
    printf("\nSecond Largest element = %d",secondLarg);

}
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);
    second_largest(arr,n);
    return 0;
}