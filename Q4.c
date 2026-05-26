// Q4 -> Write a program to Count digits in a number. 

#include<stdio.h>

int main(){
    int num , count=0,i;
    printf("enter the number :");
    scanf("%d",&num);

    while (num!=0)
    {
        count++;
        num /=10;
    }
    printf("digits in a number :%d",count);
    return 0;
}