// Write a program to Check anagram strings.
//
// Anagram => Two strings contain the same characters
// with the same frequencies, possibly in a different order.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter String 1 : ");
    scanf(" %[^\n]", str1);

    printf("Enter String 2 : ");
    scanf(" %[^\n]", str2);

    int l1 = strlen(str1);
    int l2 = strlen(str2);

    // If lengths are different, strings cannot be anagrams
    if (l1 != l2)
    {
        printf("\nStrings are not Anagrams");
        return 0;
    }

    int ana = 1;

    for (int i = 0; i < l1; i++)
    {
        int count1 = 0, count2 = 0;

        // Count frequency of str1[i] in str1
        for (int j = 0; j < l1; j++)
        {
            if (str1[i] == str1[j])
            {
                count1++;
            }
        }

        // Count frequency of str1[i] in str2
        for (int j = 0; j < l2; j++)
        {
            if (str1[i] == str2[j])
            {
                count2++;
            }
        }

        // If frequencies differ, not an anagram
        if (count1 != count2)
        {
            ana = 0;
            break;
        }
    }

    if (ana == 1)
    {
        printf("\nStrings are Anagrams");
    }
    else
    {
        printf("\nStrings are not Anagrams");
    }

    return 0;
}