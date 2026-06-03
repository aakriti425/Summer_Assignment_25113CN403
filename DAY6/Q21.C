// Write a program to Convert decimal to binary. 

#include<stdio.h>

int main(){
    int decimal,binary=0,r,base=1;
    printf("Enter the Decimal Number :");
    scanf("%d",&decimal);

    while(decimal != 0){
        r = decimal % 2; // getting remainder by dividing by 2 
        decimal /= 2; // dividing number by 2 
        binary += r*base; // binary = binary +( r * base)
        base = base * 10; // updating base by multiplying it with 10 
    }
    printf("Binary number = %d",binary);
    return 0;
}