// Write a program to Find string length without strlen().

#include <stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]", str);
    printf("string = %s \n", str);

    int i = 0, len = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    printf("length = %d \n", len);
    return 0;
}