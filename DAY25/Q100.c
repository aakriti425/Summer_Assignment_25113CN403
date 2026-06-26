// Write a program to Sort words by length. 

// INPUT => apple bat elephant cat dog
// OUTPUT => bat cat dog apple elephant

#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][50], temp[50];

    printf("Enter words:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }

    // Sort by length
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(words[i]) > strlen(words[j]))
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}