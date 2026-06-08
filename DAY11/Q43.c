// Write a program to Write function to check prime.

#include<stdio.h>
void prime(int num){
    int prm = -1;
    for(int i=2; i <= num/2 ; i++){
        if(num % i == 0){
            prm = 1;
            break;
        }
    }
    if(prm == -1){
        printf("%d is prime Number\n",num);
    }else {
        printf("%d is not a prime Number\n",num);
    }
}
int main(){
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    prime(num);
    return 0;
}