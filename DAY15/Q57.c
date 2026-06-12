// Write a program to Reverse array. 

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
void array_reverse(int arr[],int n){
    int beg,end,t,rev_arr[n];
    printf("\nReversed Array :");
    for(int i= 0;i <= n/2; i++){
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
    array_display(arr,n);
}

int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);
    array_reverse(arr,n);
    return 0;
}