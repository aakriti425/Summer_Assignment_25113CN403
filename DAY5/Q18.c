// Write a program to strong perfect number. 
// perfect number => A Strong Number is a number whose value is equal to the sum of the factorials of its digits.
// ex-> 145 | 1! + 4! + 5! == 145 | 1+24+125 == 145
#include <stdio.h>

int main(){
    int num ,sum =0,fact = 1;    // number input 
    printf("Enter the number: ");
    scanf("%d",&num);

    int n= num ;
    while (num != 0){
        int r = num % 10; // last digit 
        fact=1; // factorial update to 1 for next iteration
        for(int i = 1 ; i<= r; i++){
            fact *=i;          //  factorial of the digit 
        }
        num /= 10;  // number update 
        sum += fact;

    }
    if(sum == n ){
        printf("%d is a perfect number\n",sum);
    }else
    {
        printf("%d is not a perfect number\n",n);
    }
    return 0;
}