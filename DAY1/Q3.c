// Q3 -> Write a program to Find factorial of a number. 

#include<stdio.h>

int main(){
    int num,fact = 1;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=1;i<=num; i++){
        fact *=i;
    }
    printf("factorial of the number : %d",fact);
    return 0;
}