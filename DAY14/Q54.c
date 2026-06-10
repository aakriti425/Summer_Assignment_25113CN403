// Write a program to Frequency of an element. 

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
void Frequency_Ele(int arr[],int n , int ele ){
    int count=0;
    for(int i= 0;i <n ;i++){
        if(arr[i] == ele){
            count++;
        }
    }
    if(count == 0){
        printf("%d is not present in array\n",ele);
    }else{
        printf("Frequency of %d is %d",ele,count);
    }
}
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);
    int ele;
    printf("\nEnter Element = ");
    scanf("%d",&ele);
    Frequency_Ele(arr,n,ele);
    return 0;
}