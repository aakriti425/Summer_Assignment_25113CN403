// Write a program to Remove duplicates from Array.

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

void Remove_duplicate(int arr[],int n){
    for(int i= 0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if(arr[i] == arr[j]){
                for(int k= j; k <n; k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\n");
    array_display(arr,n);
}
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);

    Remove_duplicate(arr,n);
    return 0;
}