// Write a program to Convert lowercase to uppercase.

#include<stdio.h>

void toUpper(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i] >='a' && str[i] <='z'){
            str[i] = str[i]-32;
        }
        i++;
    }
    printf("String in Uppercase : %s",str);
}
int main(){
    char str[50];

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    toUpper(str);
    return 0;
}
