// Q1 ->Write a program to Calculate sum of first N natural numbers.

#include<stdio.h>

int main(){
    int N,sum;
    printf("Enter the number : ");
    scanf("%d",&N);

    for(int i=1 ;i<=N;i++){
        sum += i;
    }
    printf("Sum of N natural number :%d",sum);
    return 0;
}
