// Write a program to Find common characters in strings.

// example => s1 = hello | s2 = world
// output => l o

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    // Input the string (including spaces)
    printf("String 1:");
    scanf("%s", str1);

    printf("String 2:");
    scanf("%s", str2);
    // Find the length of the string
    int len = (strlen(str1)<=strlen(str2))?  strlen(str1) :  strlen(str2);

    for (int i=0; i<len ; i++){
        int rep=0;
        for(int k=i-1 ;k>=0; k--){
            if(str1[i] == str1[k]){
                rep = 1;
            }
        }

        if(rep == 1){
            continue;
        }else {
            for (int j=0; j<strlen(str2); j++){
                if (str1[i]== str2[j]){
                    printf("%c\t",str2[j]);
                    break;
                }
            }
        }
    }
    return 0;
}