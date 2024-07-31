//Tool box that includes all the necessary header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Main function
int main() {

    // String for input (capable of up to 100 characters)
    char user_input[100];  

    //First and second number the user can choose
    int first_num;
    int second_num;

    //Number of lives the player gets
    int chances = 5; 

    // Initialize the srand() to start the random generator
    srand(time(0));

    // Prompt the player to play the game
    printf("Are you ready to play?(Y/N): ");

    // Take in the player's input 
    scanf("%s", user_input);  

    //If the player anwsers yes (in any form)
    if (strcmp(user_input, "Y") == 0 || strcmp(user_input, "YES") == 0 || strcmp(user_input, "yes") == 0 || strcmp(user_input, "y") == 0) {

        //Have to break the text up so that it appears cohesive
        printf("Great! Now ");

        //While true - The loops is always running
        while (1) {

            //Prompt the user to provide the first number 
            printf("give me the first number to start with: ");

            //If the user enters a valid first number, then this loop is broken and the game continues to next prompt
            if (scanf("%d", &first_num) == 1){
                break; //Player moves onto next prompt
            } 

            // If the player doesn't provide the game a legitimate 
            else {
                
                //Let the player know they made a mistake
                printf("Thats not what I asked! I said to ");

                // Clear the incorrect scanf input
                while (getchar() != '\n');  
            }
        }

        //Break up the message so it appears cohesive to the player 
        printf("Awsome! ");

        // While true - Player correctly answers first number
        while (1) {

            //Prompt player to give the second number 
            printf("Now give me the second number (make sure it is larger than the first number!): ");

            // As long as the player enters a number, they move on to next step
            if (scanf("%d", &second_num) == 1) {

                //If user correctly enters a larger second number, they move onto the next prompt
                if (second_num > first_num){
                    break; //Player moves onto the next prompt
                }
                
                // if user enters a smaller second number, they get prompted to try again
                else {
                    printf("I just said that the second number must be LARGER than the first number... try again!\n");
                }           
            } 

            // If player doesn't enter a number they really messed up, so they are prompted to try again
            else {
                printf("Thats not what I asked! I said to ");
                
                //Clear the incorrect scanf input
                while (getchar() != '\n'); 
            }
        }

        //Displays player's chances and tells them the numbers to guess from
        printf("Chances left: %d\n", chances);
        printf("Now...I am thinking of a number between %d and %d.\n", first_num, second_num);
        
        // Generate a random number strictly between first_num and second_num
        int random_num = rand() % (second_num - first_num - 1) + first_num + 1;
 
        // Game loop
        int guess;

        //Game loop runs continuously as long as player still has chances
        while (chances > 0) {
            
            //While true - loop runs continuously
            while (1) {

                //prompts user to enter their guess
                printf("Put your guess here... and make sure it's a good one!!: ");

                //If the user enters a valid guess, loop is broken and player moves onto the next step
                if (scanf("%d", &guess) == 1){
                    break; //Games moves onto the next step
                }

                //If the user does not enter a valid number as their guess they are prompted to try again
                else {
                    printf("Thats not a guess!! Follow the instructions!!\n");

                    //Clears the invalid scanf input
                    while (getchar() != '\n');  
                }
            }

            //If the guess is less than the generated number
            if (guess < random_num) {

                //Player loses a chance
                chances--;

                //If player still has chances left, they are informed that their guess is too low and instructed to try again
                if (chances > 0) {
                    printf("You guessed way too low! Try again but do better next time!!\nChances Left: %d\n", chances);
                }
            } 

            //If the guess is greater than the generated number
            else if (guess > random_num) {

                //Player loses a chance 
                chances--;

                //If player still has chances left, they are informed that their guess is too high and instructed to try again
                if (chances > 0) {
                    printf("You guessed way too high! Try again but do better next time!!\nChances Left: %d\n", chances);
                }
            } 

            //If the guess is correct they win and the game is over
            else {
                printf("Wow! You actually guessed correctly! Congrats I guess...\n");

                //breaks the loop essentially ending the game
                break; 
            }

            //If the player completely runs out of chances they lose the game 
            if (chances == 0) {

                //Laughs at player for losing and then tells the player the correct number
                printf("You lost!! Try better next time... or just give up\n");
                printf("Correct Number: %d", random_num);

                //breaks the loop essentially ending the game
                break;
            }
        }
    } 

    //If the player says no (in any form) to the prompt asking them to play, then they are told to scram
    else if (strcmp(user_input, "N") == 0 || strcmp(user_input, "NO") == 0 || strcmp(user_input, "no") == 0 || strcmp(user_input, "n") == 0) {
        printf("Well then...get out of here!\n");
    }

    //If player doesn't enter a valid answer at all the game takes it as a no and tells them that its an invalid answer
    else{
        printf("I didn't ask that but... okay");
    }

    return 0;
}
