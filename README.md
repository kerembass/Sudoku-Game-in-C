# 🎮 Sudoku Game in C

![Language](https://img.shields.io/badge/Language-C-blue) ![IDE](https://img.shields.io/badge/IDE-Code%3A%3ABlocks-green) ![Status](https://img.shields.io/badge/Status-Completed-success)

A fully functional, command-line based Sudoku game developed in C. This project features a complete game loop, rule validation, dynamic board protection, and a win condition check.

## 🚀 Features

* **Interactive Gameplay:** User-friendly coordinate input system (Rows/Columns 1-9).
* **Rule Validation Engine:** * Prevents placing duplicate numbers in the same **Row**.
    * Prevents placing duplicate numbers in the same **Column**.
    * Prevents placing duplicate numbers in the same **3x3 Subgrid**.
* **Static Number Protection:** Players cannot modify or overwrite the initial puzzle numbers.
* **Dynamic Rendering:** The board updates and redraws after every valid move.
* **Win Condition:** Automatically detects when the board is successfully filled and congratulates the player.

## 🛠️ How to Compile & Run

You can compile this project using any standard C compiler (GCC, Clang) or an IDE like Code::Blocks.

### Using Code::Blocks
1. Open the `sudokuCProject.cbp` file.
2. Press **F9** (Build and Run).

### Using GCC (Terminal)
```bash
gcc main.c -o sudoku
./sudoku
🕹️ How to Play
1-Run the application.

2-You will see a 9x9 Grid with some numbers already filled.

3-Enter your move in the following format: Row Column Number

   Example: To place the number 5 in Row 1, Column 2, type: 1 2 5 and press Enter.

4-To exit the game, enter -1 or - as the row number.

📸 Screen Preview
5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
---------------------
8 0 0 | 0 6 0 | 0 0 3
...

👨‍💻 Author
Developed by [Kerem Baş] as a Computer Engineering project to master C programming logic, arrays, and algorithm design.
