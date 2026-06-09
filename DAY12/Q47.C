// Write a program to Write function for Fibonacci.
#include<stdio.h>

void fibo(int len){
    int a =0, b= 1, c;
    printf("%d\t%d\t",a,b);
    
    for( int n= 3; n<=len ;n++){
        c= a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
int main(){
    int n;
    printf("Enter the lenght of series :");
    scanf("%d",&n);
    fibo(n);
    return 0;
}