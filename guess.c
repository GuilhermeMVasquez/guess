#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main () {
    int random, input = 0;

    srand(time(0));

    random = (rand() % 10) + 1;

    printf("Guess a number:\n");

    scanf("%d", &input);

    if (random == input)
    {
        printf("Congrats! You guessed correctly\n");
    }
    else
    {
        printf("Sorry :( Wrong guess!\n");
        printf("The correct number was: %d\n", random);
    }
}