#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char user_input[100];  
    int first_num;
    int second_num;
    int chances = 5; 

    srand(time(0));

    printf("Are you ready to play?(Y/N): ");
    scanf("%s", user_input);  

    if (strcmp(user_input, "Y") == 0 || strcmp(user_input, "YES") == 0 || strcmp(user_input, "yes") == 0 || strcmp(user_input, "y") == 0) {
        printf("Great! Now ");

        while (1) {
            printf("give me the first number to start with: ");
            if (scanf("%d", &first_num) == 1){
                break;
            } 
            else {
                printf("Thats not what I asked! I said to ");
                while (getchar() != '\n');  
            }
        }

        printf("Awsome! ");

        while (1) {
            printf("Now give me the second number (make sure it is larger than the first number!): ");
            if (scanf("%d", &second_num) == 1) {
                if (second_num > first_num){
                    break;
                }
                else {
                    printf("I just said that the second number must be LARGER than the first number... try again!\n");
                }           
            } 
            else {
                printf("Thats not what I asked! I said to ");
                while (getchar() != '\n'); 
            }
        }

        printf("Chances left: %d\n", chances);
        printf("Now...I am thinking of a number between %d and %d.\n", first_num, second_num);
        
        int random_num = rand() % (second_num - first_num - 1) + first_num + 1;
 
        int guess;

        while (chances > 0) {
            while (1) {
                printf("Put your guess here... and make sure it's a good one!!: ");
                if (scanf("%d", &guess) == 1){
                    break;
                }
                else {
                    printf("Thats not a guess!! Follow the instructions!!\n");
                    while (getchar() != '\n');  
                }
            }

            if (guess < random_num) {
                chances--;
                if (chances > 0) {
                    printf("You guessed way too low! Try again but do better next time!!\nChances Left: %d\n", chances);
                }
            } 
            else if (guess > random_num) {
                chances--;
                if (chances > 0) {
                    printf("You guessed way too high! Try again but do better next time!!\nChances Left: %d\n", chances);
                }
            } 
            else {
                printf("Wow! You actually guessed correctly! Congrats I guess...\n");
                break; 
            }

            if (chances == 0) {
                printf("You lost!! Try better next time... or just give up\n");
                printf("Correct Number: %d", random_num);
                break;
            }
        }
    } 
    else if (strcmp(user_input, "N") == 0 || strcmp(user_input, "NO") == 0 || strcmp(user_input, "no") == 0 || strcmp(user_input, "n") == 0) {
        printf("Well then...get out of here!\n");
    }
    else{
        printf("I didn't ask that but... okay");
    }

    return 0;
}