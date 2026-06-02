// Write a program to Find largest prime factor. 
// perfect number => Factors of a number are the numbers that divide the given number exactly (remainder = 0).
// ex-> 12 | factor of 12 -> 1,2,3,4,6,12 | largest prime factor => 3
#include <stdio.h>

int main(){
    int num ,largestPrime = -1;    // number input 
    printf("Enter the number: ");
    scanf("%d",&num);

    for(int i=2;i<=num; i++){
        while(num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }
        
    printf("Largest prime Factors : %d \n",largestPrime);
    return 0;
}