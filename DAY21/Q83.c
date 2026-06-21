// Write a program to count vowels and consonants.

#include <stdio.h>

int main()
{
    char str[50];

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int i = 0, vowels = 0, consonants = 0;

    while (str[i] != '\0')
    {
        // Check whether the character is an alphabet
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            // Check for vowels
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Total no of Vowels = %d\n", vowels);
    printf("Total no of Consonants = %d\n", consonants);

    return 0;
}