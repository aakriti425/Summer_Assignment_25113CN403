// Write a program to Recursive factorial.

#include <stdio.h>
int recFact(int n){
    if(n== 1 || n== 0){ // base case
        return 1;
    }
    return recFact( n-1) * n ; // n * recfact(n-1) * recfact(n-2) * .... * 1
}

int main (){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    printf("Factorial = %d",recFact(num)); // factorial print
    return 0;
}