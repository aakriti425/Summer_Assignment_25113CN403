// Write a program to Reverse a string. 

#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]",str);
    printf("string = %s \n",str);

    int i = 0, len = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    for( i =0; i<len/2 ;i++){
        char temp = str[i];
        str[i]= str[len-i-1];
        str[len-i-1]= temp;
    }

    printf("reverse string = %s\n",str);
}