// Write a program to Find first repeating character.

// Example: hello => l is 1st repeating character

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // Input the string (including spaces)
    printf("String :");
    scanf("%[^\n]", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        int fre = 0;

        for (int j = 0; j < len; j++)
        {
            if (str[i] == str[j])
            {
                fre++;
            }
        }
        if (fre > 1)
        { // if frequency is more than 1 then the character is  repeated.
            printf("First repeating character is %c", str[i]);
            break; // character is found then break because we only want 1st  repeated character.
        }
    }
    return 0;
}