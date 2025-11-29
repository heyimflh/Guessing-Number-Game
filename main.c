#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // NUMBER GUESSING GAME

    srand(time(NULL));

    int guess, tries = 0;
    int min = 1, max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("Welcome to the Number Guessing Game!\n");

    do {
        printf("Enter your guess (%d - %d): ", min, max);
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("Too low! Try again.\n");
        } else if (guess > answer) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d tries.\n", answer, tries);
        }
    } while (guess != answer);

    if (tries <= 5) {
        printf("Excellent work! You guessed it in very few tries!\n");
    } else if (tries <= 10) {
        printf("Good job! You guessed it in a reasonable number of tries.\n");
    } else {
        printf("You can do better! Keep practicing to improve your guessing skills.\n");
    }

    printf("The answer is: %d\n", answer);
    printf("Total attempts: %d\n", tries);
    return 0;
}