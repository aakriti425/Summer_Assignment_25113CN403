// Q13 -> Write a program to Generate Fibonacci series. 

#include<stdio.h>
int main(){
    int a=0,b=1,c;
    printf("%d\t%d\t",a,b);
    for(int i=0 ;i<11;i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}