// Write a program to Print star pyramid.
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>

int main(){
    for(int i=0 ;i< 5; i++){
        for (int j = 4 ; j > i ;j--){
            printf(" ");
        }
        for(int k= 1 ;k <= i; k++){
            printf("*");
        }
        for(int l=0; l<=i; l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}