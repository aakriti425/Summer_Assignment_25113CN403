// Write a program to Check palindrome string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    printf("String :");
    scanf("%[^\n]", str);
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        rev[i] = str[len - i - 1];  // storing the string into another string by reversing it 
    }
    rev[len] = '\0';
    printf("reverse String : %s", rev);
    if (strcmp(str, rev) == 0) // if str and rev is same then compare fxn will give 0 and if not then will give 1
    {
        printf("\nString is Palindrome");
    }
    else
    {
        printf("\nString is not Palindrome");
    }

    return 0;
}