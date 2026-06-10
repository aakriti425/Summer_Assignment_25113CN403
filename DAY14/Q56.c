// Write a program to Find duplicates in array. 

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
void Duplicate(int arr[],int n ){
    printf("\nDuplicate Element :");
    int loc=-1;
    for(int i= 0;i <n ;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("%d\t",arr[i]);
                loc=1;
                
            }
        }
    }
    if(loc == -1){
        printf("Not Found \n");
    }
}
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);
    Duplicate( arr,  n);
    return 0;
}