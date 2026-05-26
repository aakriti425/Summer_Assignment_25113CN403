// Q11 -> Write a program to Find GCD of two numbers. 

#include<stdio.h>

int main(){
    int a,b,GCD = 0;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    int big = a>b? a :b;
    for(int i=1 ; i<= big; i++){
        if(a % i ==0 && b%i == 0){
            GCD = i;
        }
    }
    if(GCD == 0){
        printf("no GCD found\n");
    }else{
        printf("GCD of %d and %d is %d",a,b,GCD);
    }
    return 0;
}