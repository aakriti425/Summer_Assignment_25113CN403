#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(NULL)); 

    // Generate a random number between 1 and 100
    int random_num = (rand() % 100) + 1; 

    int guess;

    // Use an infinite loop to handle guessing dynamically
    while (1) {
        printf("Enter your Number (1-100): ");
        scanf("%d", &guess);

        if (guess > random_num) {
            printf("Number is  High!\n\n");
        } 
        else if (guess < random_num) {
            printf("Number is  Low!\n\n");
        } 
        else {
            // This runs only when guess == random_num
            printf("🎉 YOU GUESSED THE NUMBER! It was %d.\n", random_num);
            break; // Exit the loop immediately
        }
    }
    
    return 0;
}
