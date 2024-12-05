/*
We will write a program that generates a random number and asks the player ti guess it.
If the player guess is higher than the actual number, the programdisplays "Lower number please".
Similarly , if the user's guess is too low , the program prints "Higher number please".

When the user guesses the correct number  , the program displays the number of guesses the player used to arrive at the number.

Hint: Use loop and use  a random generator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Initialize random number geneartor
    srand(time(0));

    // Generate random number between 1 to 100
    int randomNumber = (rand() % 100) +1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the ranom number 
    // printf("Random Number: %d\n" , randomNumber);
    
    do{
      printf("Guess the number: ");
      scanf("%d", & guessed_number);
      if(guessed_number > randomNumber){
        printf("Lower number please\n");
      }
      else if (guessed_number < randomNumber){
        printf("Higher number please\n");
      }
      else{
        printf("Congrats!!\n");
      }
      no_of_guesses ++;

    }while(guessed_number!= randomNumber);
    printf("You guessed the number in %d guesses\n" , no_of_guesses);
    return 0;
}