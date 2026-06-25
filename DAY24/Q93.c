// Write a program to Check string rotation.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    // Input the string (including spaces)
    printf("String 1:");
    scanf("%[^\n]", str1);

    printf("String 2:");
    scanf("%s", str2);
    // Find the length of the string
    int len1 = strlen(str1), len2 = strlen(str2);
    strcat(temp, str1);
    strcat(temp, str1);

    if (len1 != len2) // comparing lengths of string
    {
        printf("\nString are not same ");
    }
    else if (strstr(temp, str2) != NULL) // checking if string exist in temp string or not
    {
        printf("String is rotation");
    }
    else
    {
        printf("String is not rotation");
    }
    return 0;
}