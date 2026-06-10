// Write a program to Find largest and smallest element.

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

void array_small(int arr[],int n){
    int small_ele= arr[0];
    for(int i=0 ;i <n; i++){
        if(arr[i] < small_ele){
            small_ele = arr[i];
        }
    }
    printf("\nSmallest Element = %d ",small_ele);
}

void array_large(int arr[],int n){
    int large_ele= arr[0];
    for(int i=0 ;i <n; i++){
        if(arr[i] > large_ele){
            large_ele = arr[i];
        }
    }
    printf("\nLargest Element = %d ",large_ele);
}

int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);
    array_small(arr,n);
    array_large(arr,n);
    return 0;
}