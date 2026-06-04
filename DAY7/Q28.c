// Write a program to Recursive reverse number.

#include <stdio.h>
int rev = 0;
void reverse(int n ){
    if(n == 0){
        return;
    } else {
        int r = n% 10;
        rev = rev * 10+r ;
        reverse(n/10);
    }
}

int main (){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    reverse(num);
    printf("Reverse of the Number = %d",rev);
    return 0;
}