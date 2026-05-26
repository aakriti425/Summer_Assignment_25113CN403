// Q7 ->Write a program to Find product of digits. 
#include<stdio.h>

int main(){
    int num,r,prd =1;
    printf("Enter the number:");
    scanf("%d",&num);

    while(num != 0){
        r= num % 10;
        prd *= r;
        num /= 10;
    }
    printf("Product of Digits of Number : %d",prd);
    return 0;
}