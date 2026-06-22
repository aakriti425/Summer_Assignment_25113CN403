// Write a program to Remove Space from String.
// Example: "hello world" → "helloworld"

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // Input the string (including spaces)
    printf("String :");
    scanf("%[^\n]", str);

    // Find the length of the string
    int len = strlen(str);

    // Traverse the string character by character
    for (int i = 0; i < len; i++)
    {
        // Check if the current character is a space
        if (str[i] == ' ')
        {
            len--; // One character (space) will be removed

            // Shift all characters after the space one position to the left
            for (int j = i; j <= len; j++)
            {
                str[j] = str[j + 1];
            }

            // If multiple consecutive spaces are present,
            // stay at the same index and check again
            if (str[i] == ' ')
            {
                i--;
            }
        }
    }

    // Print the string after removing all spaces
    printf("String Without Spaces = %s", str);

    return 0;
}