# Rock Paper Scissors Game

A console-based Rock Paper Scissors game written in C, where the user plays against the computer. The computer randomly selects its move, and the winner is determined according to standard rules.

## Features
- Personalized gameplay using user name
- Multiple user-defined rounds
- Case-insensitive user input
- Random computer move generation using rand()
- Invalid input handling
- Displays per round result
- Final score and overall winner decision

## How to Run

1. Compile the program:
```bash
gcc rock-paper-scissors-game.c -o game
```

2. Run the program:
```bash
./game  (Linux/Mac)
game.exe    (Windows)
```

3. Follow on screen instructions to play.

## Rules

- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock

## Sample output
```
Enter your name: Ali
Enter number of rounds: 3

--- Round 1 ---:
Enter your choice (rock, paper or scissors):
Ali chose: Rock
Computer chose: paper
Result: You Lose

--- Round 2 ---:
Enter your choice (rock, paper or scissors):
Ali chose: Rock
Computer chose: paper
Result: You Lose

--- Round 3 ---:
Enter your choice (rock, paper or scissors):
Ali chose: Rock
Computer chose: scissors
Result: You Win

Final Result:
Ali Score: 1
Computer Score: 2
Draw: 0

Overall Winner: Computer

```
## What I Learned
- Working with rand() and srand()
- String handling in C
- Control flow and input validation

## Author
Ali Ahmed

## License
Open source, free to use .

