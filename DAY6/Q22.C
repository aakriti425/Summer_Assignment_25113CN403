// Write a program to Convert binary to decimal .

#include<stdio.h>
#include<math.h>

int main(){
    int binary,decimal=0,r,count=0;
    printf("Enter the Binary Number :");
    scanf("%d",&binary);

    while(binary != 0){
        r = binary % 10; // getting remainder 
        decimal += r*pow(2,count); // decimal = decimal + [r * (2 ^ count)]
        binary /= 10; // remainder remove 
        count++; // count = count + 1
    }
    printf("Decimal Number = %d",decimal);
    return 0;
}