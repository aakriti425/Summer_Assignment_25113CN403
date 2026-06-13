// Write a program to Find pair with given sum. 

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

void pair_sum(int arr[],int n,int sum){
    int found=0;
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n ; j++){
            if(arr[i]+ arr[j] == sum){
                printf("pair found :");
                printf("%d\t%d \n",arr[i],arr[j]);
                found = 1;
                break;
            }
        }
    }
    if(found == 0){
        printf("No Pair found ");
    }
}
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);

    int sum;
    printf("\nEnter the Sum : ");
    scanf("%d",&sum);
    pair_sum(arr,n,sum);
    return 0;
}