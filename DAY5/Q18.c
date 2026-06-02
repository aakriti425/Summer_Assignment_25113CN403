// Q18 -> Write a program to Check Strong number .

#include<stdio.h>

int main(){
    int num,sum=0,fact=1;
    printf("Enter the number :");
    scanf("%d",&num);
    int n = num;
    while(num != 0){
        int r = num % 10;
        for(int i =1 ; i<=r ;i++){
            fact *= i;
        }
        sum += fact;
        fact = 1;
        num /= 10;
    }
    if(sum == n){
        printf("%d is a strong number\n",sum);
    } else{
        printf("%d is not a strong number \n",n);
    }
    return 0;
}