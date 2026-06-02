// Q20 -> Write a program to Find largest prime factor. 

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    int largestprime = 0;

    printf("factors :");
    for (int i=1; i<=num ;i++){

        if(num % i == 0){
            printf("%d\t",i);

            int isprime = 1;

            if(i<=1){
                 isprime = 0;
            }

            for(int j=2; j<=i ; j++){
                
                if(i % j == 0 ){
                    isprime=0;
                    break;
                } 
                if(isprime==1) {
                    largestprime=i;
                }
            }

        }
    }
    printf("\nlargest prime factor : %d\n",largestprime);
    return 0;
}