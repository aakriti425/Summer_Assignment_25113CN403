// Write a program to Character frequency.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("String :");
    scanf("%[^\n]", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        int rep = 0;
        for (int j = i - 1; j >= 0; j--) // cheking if character has appeared before or not
        {
            if (str[i] == str[j]) // if appeared then rep =1
            {
                rep = 1;
            }
        }
        if (rep == 1)
        { // if rep = 1 the skip this iteration
            continue;
        }
        else
        { // if rep =0 then continue the loop
            int fre = 1;
            for (int j = i + 1; j < len; j++)
            {

                if (str[i] == str[j])
                {
                    fre++;
                }
            }

            printf("Frequency of %c is %d \n", str[i], fre);
        }
    }

    return 0;
}
