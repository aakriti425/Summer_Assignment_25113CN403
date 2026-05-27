// Q14 -> Write a program to Find nth Fibonacci term. 

#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    printf("enter the no of terms :");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);

    for(int i=3 ;i<=n;i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}