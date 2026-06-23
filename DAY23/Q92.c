// Write a program to Find maximum occurring character.

// ex => hello : l is maximum occuring character

#include<stdio.h>
#include<string.h>

int main(){
    char str[100]; // creating array of char type of str name 
    printf("Enter String :"); 
    scanf("%[^\n]",str); // taking string input

    int len = strlen(str); // length of the given string 
    int maxFre =0 ; // intitalizing the maximum occuring character frequency to 0
    char maxchar; // variable to store the maximum occuring character

    for(int i= 0; i<len ; i++){

        int fre = 1; // intitalizing frequency of every character to be 1

        for(int j=i+1; j<len; j++){  // loop from i+1 to len-1
            if(str[i] == str[j]){ // comparing character 
                fre++; // if same character found then frequency of that character increased by 1 everytime 
            }
        }
        if(fre > maxFre){ // updating maximum frequency 
            maxFre = fre; 
            maxchar=str[i]; 
        }
    }
    printf("\nCharacter's maximum frequency = %d , %c",maxFre,maxchar);

    return 0;
}