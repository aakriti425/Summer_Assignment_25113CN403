// Write a program to Remove duplicate characters. 
// example 
// input => programming | output => programing
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter String : ");
    scanf("%[^\n]", str);

    int len = strlen(str);

    printf("String after removing duplicates : ");

    for (int i = 0; i < len; i++)
    {
        int duplicate = 0;

        // Check if current character appeared before
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate == 0)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}