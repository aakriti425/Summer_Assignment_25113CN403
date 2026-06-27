// Write a program to Create voting eligibility system.

#include<stdio.h>

int main(){
    int age ;
    printf("Enter your age :");
    scanf("%d",&age);
    if (age < 0)
    {
        printf("Invalid age!");
    }
    else if(age >= 18){
        printf("\nYou are Eligible for Voting");
    }else {
        printf("\nYou are Not Eligible for Voting");
    }
    return 0;
}