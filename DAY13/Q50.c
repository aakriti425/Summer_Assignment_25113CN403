// Write a program to Find sum and average of array.
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

int array_sum(int arr[],int n){
    int sum =0;
    for(int i= 0;i <n ;i++){
        sum += arr[i];
    }
    return sum;
}

float array_avg(int arr[],int n){
    int sum = array_sum(arr,n);
    float avg= sum/n;
    return avg;
}

int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);
    printf("\nSum of array = %d",array_sum(arr,n));
    printf("\nAverage of Array = %f", array_avg(arr,n));
    return 0;
}