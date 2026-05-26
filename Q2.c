// Q2 ->Write a program to Print multiplication table of a given number.

#include<stdio.h>

int main(){
    int num ;
    printf("enter the num :");
    scanf("%d",&num);

    for (int i=1; i<11; i++){
        printf("%d * %d = %d \n",num,i,num*i);
    }
    return 0;
}