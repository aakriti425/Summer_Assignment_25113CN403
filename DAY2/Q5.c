// Q5 ->Write a program to Find sum of digits of a numbers.
#include<stdio.h>

int main(){
    int num,r,sum =0;
    printf("Enter the number:");
    scanf("%d",&num);

    while(num != 0){
        r= num % 10;
        sum += r;
        num /= 10;
    }
    printf("Sum of Digits of Number : %d",sum);
    return 0;
}