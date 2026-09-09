/*
EECS 348 Assignment 1
Author: Zoey Spies
KUID: 3136594
Date: 9/8/2026
Purpose: To store a fixed secret number and have the user guess it
Collaborators: Copilot and Claude
*/

#include <stdio.h>

int main() {
    int secret = 7;   // Fixed secret number
    int guess; // Varrible to store the guess of the user
    int i; //creates an iterator that will be used during the for loop

    printf("Guess the secret number (1-10).\n"); // Prints a statement establishing the game
    printf("You have 3 guesses.\n"); // Gives user number of Guesses

    for (i = 1; i <= 3; i++) { // Loop that will run 3 times unless number is guessed
        printf("Guess %d: ", i); // prints the guess number
        scanf("%d", &guess); // gathers the users guess

        if (guess == secret) { // checkes if user wins
            printf("You win! You guessed the secret number.\n");
            return 0;   // Stop immediately if the user guessed right
        }
        else if (guess < secret) { // checks if number was too low
            printf("Too low. Try again.\n");
        }
        else { // else that is for any number too high
            printf("Too high. Try Again.\n");
        }
    }

    printf("You lose! The secret number was %d.\n", secret); // prints the secret number along with you lose

    return 0;
}