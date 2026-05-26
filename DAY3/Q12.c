// Q12 -> Write a program to Find LCM of two numbers. 

#include<stdio.h>

int main(){
    int a,b,fact_a = 0,fact_b = 0;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    for(int i=2 ; i<= 100; i++){
        if(i % a ==0 && i % b ==0){
            fact_a = i;
        }
        if(fact_a != 0){
            printf("LCM of %d and % d is %d \n",a,b,fact_a);
            break;
        }
    }
    return 0;
}