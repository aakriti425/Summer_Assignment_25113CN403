// Q6. -> Write a program to Reverse a number. 
#include<stdio.h>

int main(){
    int num,r,rev =0;
    printf("Enter the number:");
    scanf("%d",&num);

    while(num != 0){
        r= num % 10;
        rev = rev * 10+ r;
        num /= 10;
    }
    printf("reverse of Digits of Number : %d",rev);
    return 0;
}