// Write a program to Write function to find factorial.

#include<stdio.h>
int fact(int n){
    int  factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *=i;
    }
    return factorial;
}
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Factoral of %d = %d", num , fact(num));
    return 0;
}