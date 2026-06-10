// Write a program to Count even and odd elements.

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

void array_even_odd(int arr[],int n){
    int even=0,odd=0;
    for(int i= 0;i <n ;i++){
        if(arr[i]%2==0){
            even++;
        } else {
            odd++;
        }
    }
    printf("\nEven Element in Array = %d",even);
    printf("\nOdd Element in Array = %d",odd);
}

int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);
    array_even_odd(arr,n);
    return 0;
}