// pattern.
// A
// BB
// CCC
// DDDD
// EEEEE

#include<stdio.h>

int main(){
    for(int i=65 ; i< 70; i++){
        for(int j=65 ; j<=i; j++){
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}