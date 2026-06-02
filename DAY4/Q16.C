// Q16 -> write a program to print armstrong numbers in a range .

#include<stdio.h>
#include <math.h> 

int main(){
    int range;
    printf("enter the no of terms :");
    scanf("%d",&range);
    for(int i=100;i<=range;i++){
        int count=0,sum=0;
        int num =i,n1=i,n=i;
                
        // digit count
        while(n>0){
            count++;
            n /=10;
        }
        // printf("number of digits = %d\n",count);
        // sum 
        while(num>0){
           int r=num%10;
           sum +=pow(r,count);
           num/=10;
        }
        // compare
        // printf("sum of digits after power %d\n",sum);
        if(n1==sum){
            printf("%d\t",i);
        }
    }
}