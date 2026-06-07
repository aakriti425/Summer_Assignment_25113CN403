// Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main(){
    for (int i =0; i<5; i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=5; k>i ;k--){
            printf("*");
        }
        for(int l= 4; l>i; l--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}