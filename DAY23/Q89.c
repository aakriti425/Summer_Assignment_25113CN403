// Write a program to Find first non-repeating character.
// Example: hello => h is 1st non-repeating character

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
        if (fre == 1)
        { // if frequency is 1 then the character is not repeated.
            printf("First non-repeating character is %c", str[i]);
            break; // character is found then break because we only want 1st non repeated character.
        }
    }
    return 0;
}