// Q15 -> Write a program to Check Armstrong number.  .

#include<stdio.h>
#include <math.h> 
int main(){
    int n ,count=0,sum=0;
    printf("enter the no of terms :");
    scanf("%d",&n);
    int num =n,n1=n;

    // digit count
    while(n>0){
        count++;
        n /=10;
    }
    printf("number of digits = %d\n",count);
    // sum 
    while(num>0){
        int r=num%10;
        sum +=pow(r,count);
        num/=10;
    }
    // compare
    printf("sum of digits after power %d\n",sum);
    if(n1==sum){
        printf("number is Armstrong");
    }else{
        printf("number is not armstrong\n");
    }

}