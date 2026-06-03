// Write a program to Find x^n without pow(). 

#include<stdio.h>

int main(){
    float x,result=1;
    int n;
    printf("Enter the number :"); // number input 
    scanf("%f",&x);
    printf("Enter the Power :"); // power input
    scanf("%d",&n);

    for(int i=1; i<=n;i++){
        result *=x; // result = result * input number
    }
    printf("x^n =%f",result);
    return 0;
}