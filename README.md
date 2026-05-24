# Tic Tac Toe - C++ Console Game

A simple console-based Tic Tac Toe game implemented in C++ using object-oriented programming. Two players take turns to mark X and O on a 3x3 grid until one wins or the game ends in a draw.

---

## Features

- Text-based UI displaying the game board.  
- Input validation to prevent invalid moves.  
- Win detection for all rows, columns, and diagonals.  
- Draw detection when no more moves are possible.  
- Cross-platform clear screen functionality (Windows/Linux/Mac).  

---

## How to Use

1. Clone or download this repository.

2. Compile the code using a C++ compiler. For example, with g++:

    ```bash
    g++ tic_tac_toe.cpp -o tic_tac_toe
    ```

3. Run the compiled executable:

    - On Windows:  
      ```bash
      tic_tac_toe.exe
      ```
    
    - On Linux/macOS:  
      ```bash
      ./tic_tac_toe
      ```

4. Follow on-screen instructions to play game.

---

## Code Structure

- `TicTacToe` class encapsulates the game logic:  
  - `square` vector holds the current board state.  
  - `checkWin()` checks the game status (win/draw/ongoing).  
  - `drawBoard()` displays the board.  
  - `playGame()` controls the game loop and player input.

---

## Requirements

- A C++ compiler that supports C++11 or later (for example, g++, clang++, MSVC).  
- Compatible with Windows, Linux, and macOS.

---

## Author

**Amna Pervez**  
Email: amnapervez8910@gmail.com

---
