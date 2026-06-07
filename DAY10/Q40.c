// Write a program to Print character pyramid. 
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <stdio.h>

int main(){
    for(int i=65 ;i< 70; i++){
        for (int j = 69 ; j > i ;j--){
            printf(" ");
        }
        for(int k= 65 ;k <= i; k++){
            printf("%c",k);
        }
        for(int l=i-1; l>64; l--){
            printf("%c",l);
        }
        printf("\n");
    }
    return 0;
}