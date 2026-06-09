// Write a program to Write function for palindrome.

#include<stdio.h>

int palindrom(int n){
    int rev = 0;
    while(n != 0){
        int r = n % 10 ;
        rev = rev * 10 + r;
        n /= 10;
    }
    return rev;
}
int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    int rev_Num = palindrom(num);

    if(rev_Num == num){
        printf("%d is palindrom Number \n",rev_Num);
    } else {
        printf("%d is not a palindrom Number \n",num);
    }
    return 0;
}