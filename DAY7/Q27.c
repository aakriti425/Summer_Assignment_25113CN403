// Write a program to Recursive sum of digits.
// The sum of digits is obtained by adding all the digits of a number.
// for 1234 |  1 + 2 + 3 + 4 = 10 

#include <stdio.h>

int SOD(int n ){
    if ( n== 0){
        return 0;
    }
    else {
        int r = n % 10;
        return SOD(n / 10) + r;
    }
}

int main (){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    printf("Sum of Digits = %d",SOD(num));
    return 0;
}