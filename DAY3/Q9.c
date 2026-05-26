// Q9 -> write a program whether a number is prime .

#include<stdio.h>

int main(){
    int num ,loc = -1;
    printf("Enter the number :");
    scanf("%d",&num);

    for(int i=2 ;i<num/2;i++){
        if(num % i ==0){
            printf("number is not prime \n");
            loc =1;
            return 0;
        }
    }
    if(loc == -1){
        printf("Number is prime\n");
    }
    return 0;
}