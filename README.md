# Word-Guessing-Game-project-
A console-based Word Guessing Game in C++ that reads 10 words from a file and hides one in a 10x10 grid. The player guesses the word or takes a hint (shows word length). Words are placed randomly, and the game tracks the score. Includes a loop to replay. Uses file handling, arrays, and basic logic.

---

## 💡 How It Works

- The program displays a welcome banner and asks for your name.
- It reads 10 words from `file1.txt`.
- One random word is placed in a 10x10 grid (horizontally or vertically).
- The remaining cells are filled with random letters.
- You can:
  - Guess the word directly
  - Take a hint (shows word length)
- Score is updated for correct guesses.
- The game can be replayed in a loop.

---

## 🛠️ How to Run

Make sure you are on **Windows** (due to `conio.h` and `windows.h` usage).

### Using g++:
```bash
g++ main.cpp -o WordGame.exe
WordGame.exe

