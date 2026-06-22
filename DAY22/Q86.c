// Write a program to count words in a sentence.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter the sentence: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        // Count the start of each word
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
        i++;
    }

    printf("No of Words in the Sentence = %d", count);

    return 0;
}