// Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE

#include<stdio.h>

int main(){

    for(int i=65 ; i< 70; i++){
        for(int j=65 ; j<=i; j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}