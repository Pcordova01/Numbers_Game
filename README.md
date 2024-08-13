# Numbers_Game
I wanted to create a program that allows people to play the popular childhood game- "guess what number I'm thinking off"- with a computer. In this simple command-line number guessing game, the user is prompted to choose two numbers, then the user tries to guess a randomly generated number within the range of the two numbers. They have 5 chances to do so, if they run out of chances they lose. 

## What I learned 
Building this program helped me build my skills in implementing game logic, handling user input, managing game state, and using random numbers in C. 'srand()' is used to initialize the random number generator; seeding this function ensures there to be a different sequence of random numbers each time the program is run. 'rand()' is used to generate the random numbers, the format for this is: rand() % (max - min + 1) + min.

## Features
- Random number generator
- Scanf to take user input
- While loops to control the game sequence
- Break statements to move from one prompt to the next
- Clear instructions
- Compiles with gcc

## Winning Example
Are you ready to play?(Y/N): Y<br>
Great! Now give me the first number to start with: 1<br>
Awesome! Now give me the second number (make sure it is larger than the first number!): 20<br>
Chances left: 5<br>
Now...I am thinking of a number between 1 and 20.<br>
Put your guess here... and make sure it's a good one!!: 10<br>
You guessed way too low! Try again but do better next time!!<br>
Chances Left: 4<br>
Put your guess here... and make sure it's a good one!!: 15<br>
You guessed way too high! Try again but do better next time!!<br>
Chances Left: 3<br>
Put your guess here... and make sure it's a good one!!: 13<br>
You guessed way too high! Try again but do better next time!!<br>
Chances Left: 2<br>
Put your guess here... and make sure it's a good one!!: 12<br>
Wow! You actually guessed correctly! Congrats I guess...<br>

## Losing Example
Are you ready to play?(Y/N): Y<br>
Great! Now give me the first number to start with: 1<br>
Awesome! Now give me the second number (make sure it is larger than the first number!): 50<br>
Chances left: 5<br>
Now...I am thinking of a number between 1 and 50.<br>
Put your guess here... and make sure it's a good one!!: 25<br>
You guessed way too high! Try again but do better next time!!<br>
Chances Left: 4<br>
Put your guess here... and make sure it's a good one!!: 12<br>
You guessed way too low! Try again but do better next time!!<br>
Chances Left: 3<br>
Put your guess here... and make sure it's a good one!!: 18<br>
You guessed way too low! Try again but do better next time!!<br>
Chances Left: 2<br>
Put your guess here... and make sure it's a good one!!: 22<br>
You guessed way too high! Try again but do better next time!!<br>
Chances Left: 1<br>
Put your guess here... and make sure it's a good one!!: 20<br>
You lost!! Try better next time... or just give up<br>
Correct Number: 19<br>
