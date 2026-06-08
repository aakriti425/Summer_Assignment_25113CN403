// Write a program to Write function to find maximum.

#include<stdio.h>
int max(int a,int b){
    int maxm = (a>b)?a:b;
    return maxm;
}
int main(){
    int x,y;
    printf("Enter two number:");
    scanf("%d %d",&x,&y);
    printf("Maximum of Two Numbers = %d",max(x,y));
}