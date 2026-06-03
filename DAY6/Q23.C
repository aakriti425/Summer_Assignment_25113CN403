// Write a program to Count set bits in a number. 

#include<stdio.h>

int main(){
    int binary,count=0,r;
    printf("enter the binary number:");
    scanf("%d",&binary);

    while(binary != 0){
        r = binary % 10; // remainder of the number
        if(r == 1){ // compare with 1
            count++; // if r == 1 the count = count +1
        }
        binary /= 10; // binary number remainder remove 
    }
    printf("Set Bits in the Number = %d",count);
    return 0;
}