// Write a program to Check perfect number. 
// perfect number => (factor sum of number == number)
// ex-> 6 | factor of 6 -> 1,2,3 |sum of 1+2+3 == 6
#include <stdio.h>

int main(){
    int num ,sum =0;    // number input 
    printf("Enter the number: ");
    scanf("%d",&num);

    for(int i=1;i<num; i++){
        if(num % i == 0){       // factor finding 
            sum +=i;
        }
    }
    if(sum == num ){
        printf("%d is a perfect number\n",sum);
    }else
    {
        printf("%d is not a perfect number\n",num);
    }
    return 0;
}