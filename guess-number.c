#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    srand(time(0));
    int number;
    int random_number = rand() % 1000;

    while(1) {
        printf("Guess number between 0 and 1000: ");
        scanf("%d", &number);
        if (number > random_number) {
            printf("Too big.\n");
        } if (number < random_number) {
            printf("Too small.\n");
        } if (number == random_number) {
            printf("You guessed number.\n");
            break;
        }
    }

    return 0;
}