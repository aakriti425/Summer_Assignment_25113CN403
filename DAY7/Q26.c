// Write a program to Recursive Fibonacci. 
// fibonacci => A Fibonacci series is a sequence where each number is 
//              the sum of the previous two numbers.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

#include <stdio.h>
int fibo(int a){
    if ( a == 1 )
        return 1;
    else if ( a== 0)
        return 0;
    else {
        return fibo(a-1)+fibo(a-2);
    }
    
}

int main (){
    int n;
    printf("Enter Number of term : ");
    scanf("%d",&n);
    for(int i =0; i< n; i++){
        printf("%d\t",fibo(i));
    }
    return 0;
}