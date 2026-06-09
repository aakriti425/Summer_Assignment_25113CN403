// Write a program to Write function for Armstrong.
#include<stdio.h>
#include<math.h>

int armstrong(int n){
    int r,sum=0,x = n , count = 0;
    while (n != 0){
        count++;
        n /= 10;
    }
    while (x != 0){
        r = x % 10;
        sum += pow(r,count);
        x /= 10; 
    }
    return sum;
}
int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);

    int arm_Sum = armstrong(num);

    if(arm_Sum == num){
        printf("%d is Armstrong Number \n",arm_Sum);
    } else {
        printf("%d is not a Armstrong Number \n",num);
    }
    return 0;
}