// Write a program to Linear search. 

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
void linear_search(int arr[],int n , int key ){
    int loc=-1;
    for(int i= 0;i <n ;i++){
        if(arr[i] == key){
            loc++;
            printf("%d is found at %d index\n",key,i);
        }
    }
    if(loc == -1){
        printf("%d is not found\n",key);
    }
}
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);
    int key;
    printf("\nEnter key = ");
    scanf("%d",&key);
    linear_search(arr,n,key);
    return 0;
}