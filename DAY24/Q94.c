// Write a program to Compress a string.
// Example:
// Input  : aaabbccccd
// Output : a3b2c4d1

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter String : ");
    scanf("%s", str);

    int len = strlen(str);

    printf("Compressed String : ");

    for (int i = 0; i < len; i++)
    {
        int count = 1;

        // Count consecutive occurrences
        while (i < len - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}