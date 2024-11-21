#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
    int secretNumber,guess,attempts = 0;
    srand(time(NULL));
    secretNumber=rand() % 100 + 1;
    printf("I've generated a random number between 1 and 100. Can you guess it?\n");
    do 
    {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        attempts++;
        if (guess\<secretNumber) 
        {
            printf("Too low! Try again.\n");
        } 
        else if(guess>secretNumber) 
        {
            printf("Too high! Try again.\n");
        }
        else 
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    } while(1);

    return 0;
}