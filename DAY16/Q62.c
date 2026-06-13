// Write a program to Find maximum frequency element.

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

void maximum_frequency(int arr[],int n){
    int count = 0,mfe;
    
    for(int i=0 ;i<n; i++){
        int fre = 0;
        for(int j= 0; j<n ;j++){
            if(arr[i] == arr[j]){
                fre++;
                
            }
        }
        if(count < fre){
            count = fre;
            mfe = arr[i];
        }
    }
    printf("\nMaximum Frequency Element : %d",mfe);
    printf("\nfrequency : %d",count);
}
int main(){
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    array_input(arr,n);
    array_display(arr,n);

    maximum_frequency(arr,n);
    return 0;
}