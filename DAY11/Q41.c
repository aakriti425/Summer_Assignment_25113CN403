// Write a program to Write function to find sum of two numbers.

#include<stdio.h>

int sum(int a,int b){
    return a+b;
}

int main(){
    int x,y;
    printf("Enter two number:");
    scanf("%d %d",&x,&y);
    printf("Sum of Two Numbers = %d",sum(x,y));
    return 0;
}