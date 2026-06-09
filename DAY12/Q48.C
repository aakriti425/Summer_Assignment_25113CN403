// Write a program to Write function for perfect number.
#include<stdio.h>
int perfect_Num(int n){
    int sum=0;
    for(int i= 1;i <n;i++){
        if( n % i == 0){
            sum += i;
        }
    }
    printf("sum of factors = %d \n",sum);
    return sum;
}
int main(){
    int num ;
    printf("Enter the Number :");
    scanf("%d",&num);
    if(num == perfect_Num(num)){
        printf("%d is a Perfect Number ",num);
    } else {
        printf("%d is a not a Perfect Number ",num);
    }
    return 0;
}