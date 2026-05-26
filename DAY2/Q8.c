// Q8 -> Write a program to Check whether a number is palindrome.
#include<stdio.h>

int main(){
    int num,r,rev =0;
    printf("Enter the number:");
    scanf("%d",&num);

    int n = num;

    while(num != 0){
        r= num % 10;
        rev = rev * 10+ r;
        num /= 10;
    }
    printf("reverse of Digits of Number : %d \n",rev);

    if(n == rev){
        printf("Number is Pallindrom \n");
    } else{
        printf("Number is not Pallindrom \n");
    }
    return 0;

}