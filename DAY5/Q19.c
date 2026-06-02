// Write a program to Print factors of a number. 
// perfect number => Factors of a number are the numbers that divide the given number exactly (remainder = 0).
// ex-> 12 | factor of 12 -> 1,2,3,4,6,12
#include <stdio.h>

int main(){
    int num ,sum =0;    // number input 
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Factors : ");
    for(int i=1;i<=num; i++){
        if(num % i == 0){       // factor finding 
            printf("%d\t",i);
        }
    }
    
    return 0;
}