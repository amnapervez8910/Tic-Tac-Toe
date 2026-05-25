# 🎮 Tic Tac Toe in C

A simple console-based **Tic Tac Toe** game developed in **C language** as a Programming Fundamentals project.  
This project demonstrates core programming concepts including arrays, functions, loops, conditional statements, and user interaction.

---

## ✨ Features

- ✅ Interactive turn-based gameplay
- ✅ Input validation
- ✅ Prevents overwriting occupied cells
- ✅ Win detection using rows, columns, and diagonals
- ✅ Draw detection
- ✅ Dynamic console board display
- ✅ Cross-platform screen clearing support (`clear` / `cls`)

---

## 🛠 Technologies Used

- **Language:** C
- **Compiler:** GCC / Turbo C / Visual Studio
- **Platform:** Console Application

---

## ▶️ How to Run

### 🔹 Using GCC Compiler

Compile the program:

```bash
gcc tic_tac_toe.c -o tic_tac_toe
```

Run the executable:

```bash
./tic_tac_toe
```

---

### 🔹 On Windows

If using MinGW:

```bash
gcc tic_tac_toe.c -o tic_tac_toe.exe
tic_tac_toe.exe
```

---

## 🎯 Game Rules

1. The game is played by 2 players
2. Players choose positions from 1 to 9
3. Each number corresponds to a position on the board

Example:

```text
 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9
```

4. The first player to align 3 marks horizontally, vertically, or diagonally wins
5. If all positions are filled and no player wins, the game ends in a draw

---

## 🖥 Sample Gameplay

```text
Tic Tac Toe

Player 1 (X) - Player 2 (O)

 X | O | X
-----------
 O | X | O
-----------
 X | 8 | 9

==> Player 1 wins
```

---

## ⚠️ Notes

- Replace:

```c
system("clear");
```

with:

```c
system("cls");
```

if running on Windows.

- `scanf_s()` works in Visual Studio.  
  For GCC/Linux, replace it with:

```c
scanf("%d", &choice);
```

---
