// Write a program to Find longest word. 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter String : ");
    scanf("%[^\n]", str);

    int len = strlen(str);

    int maxword = 0, sindex = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            // initalizing count and j
            int count = 0;
            int j = i;

            // loop for counting words 
            while (j < len && str[j] != ' ')
            {
                count++;
                j++;
            }

            // comparing present maxword with current count 
            if (count > maxword)
            {
                maxword = count;
                sindex = i;
            }

            i = j;
        }
    }

    printf("Longest word = ");
    // printing longest word charater wise 
    for (int i = sindex; i < sindex + maxword; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}